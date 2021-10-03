#include <ultra64.h>

#include "sm64.h"
#include "engine/graph_node.h"
#include "math_util.h"
#include "surface_collision.h"
#include "extended_bounds.h"
#include "trig_tables.inc.c"
#include "game/camera.h"
#include "surface_load.h"
#include "game/puppyprint.h"
#include "game/rendering_graph_node.h"

#include "config.h"

/// Returns the lowest of three values.
s32 min_3i(s32 a0, s32 a1, s32 a2) { if (a1 < a0) a0 = a1; if (a2 < a0) a0 = a2; return a0; }
f32 min_3f(f32 a0, f32 a1, f32 a2) { if (a1 < a0) a0 = a1; if (a2 < a0) a0 = a2; return a0; }

/// Returns the highest of three values.
s32 max_3i(s32 a0, s32 a1, s32 a2) { if (a1 > a0) a0 = a1; if (a2 > a0) a0 = a2; return a0; }
f32 max_3f(f32 a0, f32 a1, f32 a2) { if (a1 > a0) a0 = a1; if (a2 > a0) a0 = a2; return a0; }

/// Copy vector 'src' to 'dest'
void vec3f_copy(Vec3f dest, Vec3f src) {
    ((u64 *) dest)[0] = ((u64 *) src)[0];
    ((u32 *) dest)[2] = ((u32 *) src)[2];
}

/// Set vector 'dest' to (x, y, z)
void vec3f_set(Vec3f dest, f32 x, f32 y, f32 z) {
    vec3_set(dest, x, y, z);
}

/// Add vector 'a' to 'dest'
void vec3f_add(Vec3f dest, Vec3f a) {
    register f32 *temp = dest;
    register s32 j;
    register f32 sum, sum2;
    for (j = 0; j < 3; j++) {
        sum = *a;
        a++;
        sum2 = *temp;
        temp++;
        temp[-1] = (sum + sum2);
    }
}

/// Make 'dest' the sum of vectors a and b.
void vec3f_sum(Vec3f dest, Vec3f a, Vec3f b) {
    vec3_sum(dest, a, b);
}

/// Copy vector src to dest
void vec3s_copy(Vec3s dest, Vec3s src) {
    vec3_copy(dest, src);
}

/// Set vector 'dest' to (x, y, z)
void vec3s_set(Vec3s dest, s16 x, s16 y, s16 z) {
    vec3_set(dest, x, y, z);
}

/// Add vector a to 'dest'
void vec3s_add(Vec3s dest, Vec3s a) {
    vec3_add(dest, a);
}

/// Make 'dest' the sum of vectors a and b.
void vec3s_sum(Vec3s dest, Vec3s a, Vec3s b) {
    vec3_sum(dest, a, b);
}

/// Subtract vector a from 'dest'
void vec3s_sub(Vec3s dest, Vec3s a) {
    vec3_sub(dest, a);
}

void vec3f_sub(Vec3f dest, Vec3f src) {
    vec3_sub(dest, src);
}

/**
 * Convert float vector a to a short vector 'dest' by rounding the components
 * to the nearest integer.
 */
void vec3f_to_vec3s(Vec3s dest, Vec3f a) {
    // add/subtract 0.5 in order to round to the nearest s32 instead of truncating
    dest[0] = a[0] + ((a[0] > 0) ? 0.5f : -0.5f);
    dest[1] = a[1] + ((a[1] > 0) ? 0.5f : -0.5f);
    dest[2] = a[2] + ((a[2] > 0) ? 0.5f : -0.5f);
}

/**
 * Set 'dest' the normal vector of a triangle with vertices a, b and c.
 * It is similar to vec3f_cross, but it calculates the vectors (c-b) and (b-a)
 * at the same time.
 */
void find_vector_perpendicular_to_plane(Vec3f dest, Vec3f a, Vec3f b, Vec3f c) {
    dest[0] = (b[1] - a[1]) * (c[2] - b[2]) - (c[1] - b[1]) * (b[2] - a[2]);
    dest[1] = (b[2] - a[2]) * (c[0] - b[0]) - (c[2] - b[2]) * (b[0] - a[0]);
    dest[2] = (b[0] - a[0]) * (c[1] - b[1]) - (c[0] - b[0]) * (b[1] - a[1]);
}

/// Make vector 'dest' the cross product of vectors a and b.
void vec3f_cross(Vec3f dest, Vec3f a, Vec3f b) {
    vec3_cross(dest, a, b);
}

/// Scale vector 'dest' so it has length 1
void vec3f_normalize(Vec3f dest) {
    f32 invsqrt = sqrtf(sqr(dest[0]) + sqr(dest[1]) + sqr(dest[2]));
    if (invsqrt < 0.00001f) return;
    invsqrt = 1.0f / invsqrt;
    vec3_mul_val(dest, invsqrt);
}

/// Copy matrix 'src' to 'dest'
void mtxf_copy(Mat4 dest, Mat4 src) {
    register s32 i;
    register u32 *d = (u32 *) dest;
    register u32 *s = (u32 *) src;

    for (i = 0; i < 16; i++) {
        *d++ = *s++;
    }
}

/**
 * Set mtx to the identity matrix
 */
void mtxf_identity(Mat4 mtx) {
    register s32 i;
    register f32 *dest;
    // These loops must be one line to match on -O2

    // initialize everything except the first and last cells to 0
    for (dest = (f32 *) mtx + 1, i = 0; i < 14; dest++, i++) *dest = 0;

    // initialize the diagonal cells to 1
    for (dest = (f32 *) mtx, i = 0; i < 4; dest += 5, i++) *dest = 1;
}

/**
 * Set dest to a translation matrix of vector b
 */
void mtxf_translate(Mat4 dest, Vec3f b) {
    mtxf_identity(dest);
    vec3f_copy(dest[3], b);
}

void mtxf_rot_trans_mul(Vec3s rot, Vec3f trans, Mat4 dest, Mat4 src) {
    register f32 sx = sins(rot[0]);
    register f32 cx = coss(rot[0]);

    register f32 sy = sins(rot[1]);
    register f32 cy = coss(rot[1]);

    register f32 sz = sins(rot[2]);
    register f32 cz = coss(rot[2]);
    register f32 entry0;
    register f32 entry1;
    register f32 entry2;

    entry0 = cy * cz;
    entry1 = cy * sz;
    entry2 = -sy;
    dest[0][0] = entry0 * src[0][0] + entry1 * src[1][0] + entry2 * src[2][0];
    dest[0][1] = entry0 * src[0][1] + entry1 * src[1][1] + entry2 * src[2][1];
    dest[0][2] = entry0 * src[0][2] + entry1 * src[1][2] + entry2 * src[2][2];

    entry1 = sx * sy;
    entry0 = entry1 * cz - cx * sz;
    entry1 = entry1 * sz + cx * cz;
    entry2 = sx * cy;
    dest[1][0] = entry0 * src[0][0] + entry1 * src[1][0] + entry2 * src[2][0];
    dest[1][1] = entry0 * src[0][1] + entry1 * src[1][1] + entry2 * src[2][1];
    dest[1][2] = entry0 * src[0][2] + entry1 * src[1][2] + entry2 * src[2][2];

    entry1 = cx * sy;
    entry0 = entry1 * cz + sx * sz;
    entry1 = entry1 * sz - sx * cz;
    entry2 = cx * cy;
    dest[2][0] = entry0 * src[0][0] + entry1 * src[1][0] + entry2 * src[2][0];
    dest[2][1] = entry0 * src[0][1] + entry1 * src[1][1] + entry2 * src[2][1];
    dest[2][2] = entry0 * src[0][2] + entry1 * src[1][2] + entry2 * src[2][2];

    entry0 = trans[0];
    entry1 = trans[1];
    entry2 = trans[2];
    dest[3][0] = entry0 * src[0][0] + entry1 * src[1][0] + entry2 * src[2][0] + src[3][0];
    dest[3][1] = entry0 * src[0][1] + entry1 * src[1][1] + entry2 * src[2][1] + src[3][1];
    dest[3][2] = entry0 * src[0][2] + entry1 * src[1][2] + entry2 * src[2][2] + src[3][2];
    dest[0][3] = dest[1][3] = dest[2][3] = 0;
    ((u32 *) dest)[15] = 0x3F800000;
}

/**
 * Set mtx to a look-at matrix for the camera. The resulting transformation
 * transforms the world as if there exists a camera at position 'from' pointed
 * at the position 'to'. The up-vector is assumed to be (0, 1, 0), but the 'roll'
 * angle allows a bank rotation of the camera.
 */
void mtxf_lookat(Mat4 mtx, Vec3f from, Vec3f to, s32 roll) {
    Vec3f colX, colY, colZ;

    f32 dx = to[0] - from[0];
    f32 dz = to[2] - from[2];

    register f32 invLength = -1.0f / MAX(sqrtf(sqr(dx) + sqr(dz)), 0.00001f);
    dx *= invLength;
    dz *= invLength;

    colY[1] = coss(roll);
    colY[0] = sins(roll) * dz;
    colY[2] = -sins(roll) * dx;
    vec3_diff(colZ, to, from);

    invLength = -1.0f / MAX(sqrtf(sqr(colZ[0]) + sqr(colZ[1]) + sqr(colZ[2])), 0.00001f);
    vec3_mul_val(colZ, invLength);

    vec3_cross(colX, colY, colZ);

    invLength = 1.0f / MAX(sqrtf(sqr(colX[0]) + sqr(colX[1]) + sqr(colX[2])), 0.00001f);
    vec3_mul_val(colX, invLength);

    vec3_cross(colY, colZ, colX);

    invLength = 1.0f / MAX(sqrtf(sqr(colY[0]) + sqr(colY[1]) + sqr(colY[2])), 0.00001f);
    vec3_mul_val(colY, invLength);

    mtx[0][0] = colX[0];
    mtx[1][0] = colX[1];
    mtx[2][0] = colX[2];

    mtx[0][1] = colY[0];
    mtx[1][1] = colY[1];
    mtx[2][1] = colY[2];

    mtx[0][2] = colZ[0];
    mtx[1][2] = colZ[1];
    mtx[2][2] = colZ[2];
    mtx[3][0] = -vec3_dot(from, colX);
    mtx[3][1] = -vec3_dot(from, colY);
    mtx[3][2] = -vec3_dot(from, colZ);

    mtx[0][3] = 0;
    mtx[1][3] = 0;
    mtx[2][3] = 0;
    mtx[3][3] = 1;
}

/**
 * Build a matrix that rotates around the z axis, then the x axis, then the y
 * axis, and then translates.
 */
void mtxf_rotate_zxy_and_translate(Mat4 dest, Vec3f translate, Vec3s rotate) {
    register f32 sx = sins(rotate[0]);
    register f32 cx = coss(rotate[0]);

    register f32 sy = sins(rotate[1]);
    register f32 cy = coss(rotate[1]);

    register f32 sz = sins(rotate[2]);
    register f32 cz = coss(rotate[2]);

    dest[0][0] = cy * cz + sx * sy * sz;
    dest[1][0] = -cy * sz + sx * sy * cz;
    dest[2][0] = cx * sy;
    dest[3][0] = translate[0];

    dest[0][1] = cx * sz;
    dest[1][1] = cx * cz;
    dest[2][1] = -sx;
    dest[3][1] = translate[1];

    dest[0][2] = -sy * cz + sx * cy * sz;
    dest[1][2] = sy * sz + sx * cy * cz;
    dest[2][2] = cx * cy;
    dest[3][2] = translate[2];

    dest[0][3] = dest[1][3] = dest[2][3] = 0.0f;
    dest[3][3] = 1.0f;
}

/**
 * Build a matrix that rotates around the x axis, then the y axis, then the z
 * axis, and then translates.
 */
void mtxf_rotate_xyz_and_translate(Mat4 dest, Vec3f b, Vec3s c) {
    register f32 sx = sins(c[0]);
    register f32 cx = coss(c[0]);

    register f32 sy = sins(c[1]);
    register f32 cy = coss(c[1]);

    register f32 sz = sins(c[2]);
    register f32 cz = coss(c[2]);

    dest[0][0] = cy * cz;
    dest[0][1] = cy * sz;
    dest[0][2] = -sy;
    dest[0][3] = 0;

    dest[1][0] = sx * sy * cz - cx * sz;
    dest[1][1] = sx * sy * sz + cx * cz;
    dest[1][2] = sx * cy;
    dest[1][3] = 0;

    dest[2][0] = cx * sy * cz + sx * sz;
    dest[2][1] = cx * sy * sz - sx * cz;
    dest[2][2] = cx * cy;
    dest[2][3] = 0;

    dest[3][0] = b[0];
    dest[3][1] = b[1];
    dest[3][2] = b[2];
    dest[3][3] = 1;
}

/**
 * Set 'dest' to a transformation matrix that turns an object to face the camera.
 * 'mtx' is the look-at matrix from the camera
 * 'position' is the position of the object in the world
 * 'angle' rotates the object while still facing the camera.
 */
void mtxf_billboard(Mat4 dest, Mat4 mtx, Vec3f position, s32 angle) {
    if (angle == 0x0) {
        dest[0][0] = 1;
        dest[0][1] = 0;
    } else {
        dest[0][0] = coss(angle);
        dest[0][1] = sins(angle);
    }
    dest[0][2] = 0;
    dest[0][3] = 0;

    dest[1][0] = -dest[0][1];
    dest[1][1] = dest[0][0];
    dest[1][2] = 0;
    dest[1][3] = 0;

    dest[2][0] = 0;
    dest[2][1] = 0;
    dest[2][2] = 1;
    dest[2][3] = 0;

    dest[3][0] = mtx[0][0] * position[0] + mtx[1][0] * position[1] + mtx[2][0] * position[2] + mtx[3][0];
    dest[3][1] = mtx[0][1] * position[0] + mtx[1][1] * position[1] + mtx[2][1] * position[2] + mtx[3][1];
    dest[3][2] = mtx[0][2] * position[0] + mtx[1][2] * position[1] + mtx[2][2] * position[2] + mtx[3][2];
    dest[3][3] = 1;
}

/**
 * Set 'dest' to a transformation matrix that aligns an object with the terrain
 * based on the normal. Used for enemies.
 * 'upDir' is the terrain normal
 * 'yaw' is the angle which it should face
 * 'pos' is the object's position in the world
 */
void mtxf_align_terrain_normal(Mat4 dest, Vec3f upDir, Vec3f pos, s32 yaw) {
    Vec3f lateralDir;
    Vec3f leftDir;
    Vec3f forwardDir;

    vec3_set(lateralDir, sins(yaw), 0, coss(yaw));
    vec3f_normalize(upDir);

    vec3_cross(leftDir, upDir, lateralDir);
    vec3f_normalize(leftDir);

    vec3_cross(forwardDir, leftDir, upDir);
    vec3f_normalize(forwardDir);

    vec3f_copy(dest[0], leftDir);
    vec3f_copy(dest[1], upDir);
    vec3f_copy(dest[2], forwardDir);
    vec3f_copy(dest[3], pos);

    dest[0][3] = 0.0f;
    dest[1][3] = 0.0f;
    dest[2][3] = 0.0f;
    dest[3][3] = 1.0f;
}

/**
 * Set 'mtx' to a transformation matrix that aligns an object with the terrain
 * based on 3 height samples in an equilateral triangle around the object.
 * Used for Mario when crawling or sliding.
 * 'yaw' is the angle which it should face
 * 'pos' is the object's position in the world
 * 'radius' is the distance from each triangle vertex to the center
 */
void mtxf_align_terrain_triangle(Mat4 mtx, Vec3f pos, s32 yaw, f32 radius) {
    struct Surface *floor;
    Vec3f point0, point1, point2;
    Vec3f forward;
    Vec3f xColumn, yColumn, zColumn;
    f32 avgY;
    f32 minY = -radius * 3;

    point0[0] = pos[0] + radius * sins(yaw + 0x2AAA);
    point0[2] = pos[2] + radius * coss(yaw + 0x2AAA);
    point1[0] = pos[0] + radius * sins(yaw + 0x8000);
    point1[2] = pos[2] + radius * coss(yaw + 0x8000);
    point2[0] = pos[0] + radius * sins(yaw + 0xD555);
    point2[2] = pos[2] + radius * coss(yaw + 0xD555);

    point0[1] = find_floor(point0[0], pos[1] + 150, point0[2], &floor);
    point1[1] = find_floor(point1[0], pos[1] + 150, point1[2], &floor);
    point2[1] = find_floor(point2[0], pos[1] + 150, point2[2], &floor);

    if (point0[1] - pos[1] < minY) {
        point0[1] = pos[1];
    }

    if (point1[1] - pos[1] < minY) {
        point1[1] = pos[1];
    }

    if (point2[1] - pos[1] < minY) {
        point2[1] = pos[1];
    }

    avgY = (point0[1] + point1[1] + point2[1]) / 3;

    vec3_set(forward, sins(yaw), 0, coss(yaw));
    find_vector_perpendicular_to_plane(yColumn, point0, point1, point2);
    vec3f_normalize(yColumn);
    vec3_cross(xColumn, yColumn, forward);
    vec3f_normalize(xColumn);
    vec3_cross(zColumn, xColumn, yColumn);
    vec3f_normalize(zColumn);
    vec3f_copy(mtx[0], xColumn);
    vec3f_copy(mtx[1], yColumn);
    vec3f_copy(mtx[2], zColumn);

    mtx[3][0] = pos[0];
    mtx[3][1] = (avgY < pos[1]) ? pos[1] : avgY;
    mtx[3][2] = pos[2];

    mtx[0][3] = 0;
    mtx[1][3] = 0;
    mtx[2][3] = 0;
    mtx[3][3] = 1;
}

/**
 * Sets matrix 'dest' to the matrix product b * a assuming they are both
 * transformation matrices with a w-component of 1. Since the bottom row
 * is assumed to equal [0, 0, 0, 1], it saves some multiplications and
 * addition.
 * The resulting matrix represents first applying transformation b and
 * then a.
 */
void mtxf_mul(Mat4 dest, Mat4 a, Mat4 b) {
    Mat4 temp;
    register Vec3f entry;

    // column 0
    vec3_copy(entry, a[0]);
    temp[0][0] = entry[0] * b[0][0] + entry[1] * b[1][0] + entry[2] * b[2][0];
    temp[0][1] = entry[0] * b[0][1] + entry[1] * b[1][1] + entry[2] * b[2][1];
    temp[0][2] = entry[0] * b[0][2] + entry[1] * b[1][2] + entry[2] * b[2][2];

    // column 1
    vec3_copy(entry, a[1]);
    temp[1][0] = entry[0] * b[0][0] + entry[1] * b[1][0] + entry[2] * b[2][0];
    temp[1][1] = entry[0] * b[0][1] + entry[1] * b[1][1] + entry[2] * b[2][1];
    temp[1][2] = entry[0] * b[0][2] + entry[1] * b[1][2] + entry[2] * b[2][2];

    // column 2
    vec3_copy(entry, a[2]);
    temp[2][0] = entry[0] * b[0][0] + entry[1] * b[1][0] + entry[2] * b[2][0];
    temp[2][1] = entry[0] * b[0][1] + entry[1] * b[1][1] + entry[2] * b[2][1];
    temp[2][2] = entry[0] * b[0][2] + entry[1] * b[1][2] + entry[2] * b[2][2];

    // column 3
    vec3_copy(entry, a[3]);
    temp[3][0] = entry[0] * b[0][0] + entry[1] * b[1][0] + entry[2] * b[2][0] + b[3][0];
    temp[3][1] = entry[0] * b[0][1] + entry[1] * b[1][1] + entry[2] * b[2][1] + b[3][1];
    temp[3][2] = entry[0] * b[0][2] + entry[1] * b[1][2] + entry[2] * b[2][2] + b[3][2];

    temp[0][3] = temp[1][3] = temp[2][3] = 0;
    temp[3][3] = 1;

    mtxf_copy(dest, temp);
}

/**
 * Set matrix 'dest' to 'mtx' scaled by vector s
 */
void mtxf_scale_vec3f(Mat4 dest, Mat4 mtx, Vec3f s) {
    register s32 i;

    for (i = 0; i < 4; i++) {
        dest[0][i] = mtx[0][i] * s[0];
        dest[1][i] = mtx[1][i] * s[1];
        dest[2][i] = mtx[2][i] * s[2];
        dest[3][i] = mtx[3][i];
    }
}

/**
 * Multiply a vector with a transformation matrix, which applies the transformation
 * to the point. Note that the bottom row is assumed to be [0, 0, 0, 1], which is
 * true for transformation matrices if the translation has a w component of 1.
 */
void mtxf_mul_vec3s(Mat4 mtx, Vec3s b) {
    register f32 x = b[0];
    register f32 y = b[1];
    register f32 z = b[2];

    b[0] = x * mtx[0][0] + y * mtx[1][0] + z * mtx[2][0] + mtx[3][0];
    b[1] = x * mtx[0][1] + y * mtx[1][1] + z * mtx[2][1] + mtx[3][1];
    b[2] = x * mtx[0][2] + y * mtx[1][2] + z * mtx[2][2] + mtx[3][2];
}

/**
 * Convert float matrix 'src' to fixed point matrix 'dest'.
 * The float matrix may not contain entries larger than 65536 or the console
 * crashes. The fixed point matrix has entries with a 16-bit integer part, so
 * the floating point numbers are multiplied by 2^16 before being cast to a s32
 * integer. If this doesn't fit, the N64 and iQue consoles will throw an
 * exception. On Wii and Wii U Virtual Console the value will simply be clamped
 * and no crashes occur.

 * Modified into a hybrid of the original function and the worldscale altered function.
 * Will check if the worldscale is below what's considered safe in vanilla bounds and
 * just run the faster vanilla function, otherwise it'll run the slower, but safer scale
 * function, for extended boundaries.
 */
void mtxf_to_mtx_scale(Mtx *dest, Mat4 src) {
    Mat4 temp;
    register s32 i, j;
    for( i = 0; i < 4; i++ ) {
        for( j = 0; j < 3; j++ ) {
            temp[i][j] = src[i][j] / gWorldScale;
        }
        temp[i][3] = src[i][3];
    }
    guMtxF2L( temp, dest );
}

void mtxf_to_mtx_constant(register s16 *dest, register f32 *src) {
    s32 asFixedPoint;
    s32 i;
    for (i = 0; i < 16; i++) {
        asFixedPoint = (src[i] * (1 << 16));
        dest[i] = (asFixedPoint >> 16);
        dest[i + 16] = (asFixedPoint & 0xFFFF);
    }
}

void mtxf_to_mtx(void *dest, void *src) {
    if (gWorldScale > 2.0f) {
        mtxf_to_mtx_scale(dest, src);
    } else {
        mtxf_to_mtx_constant(dest, src);
    }
}

/**
 * Set 'mtx' to a transformation matrix that rotates around the z axis.
 */
void mtxf_rotate_xy(Mtx *mtx, s32 angle) {
    Mat4 temp;
    mtxf_identity(temp);
    temp[0][0] = coss(angle);
    temp[0][1] = sins(angle);
    temp[1][0] = -temp[0][1];
    temp[1][1] = temp[0][0];
    mtxf_to_mtx(mtx, temp);
}

/**
 * Extract a position given an object's transformation matrix and a camera matrix.
 * This is used for determining the world position of the held object: since objMtx
 * inherits the transformation from both the camera and Mario, it calculates this
 * by taking the camera matrix and inverting its transformation by first rotating
 * objMtx back from screen orientation to world orientation, and then subtracting
 * the camera position.
 */
void get_pos_from_transform_mtx(Vec3f dest, Mat4 objMtx, Mat4 camMtx) {
    f32 camX = camMtx[3][0] * camMtx[0][0] + camMtx[3][1] * camMtx[0][1] + camMtx[3][2] * camMtx[0][2];
    f32 camY = camMtx[3][0] * camMtx[1][0] + camMtx[3][1] * camMtx[1][1] + camMtx[3][2] * camMtx[1][2];
    f32 camZ = camMtx[3][0] * camMtx[2][0] + camMtx[3][1] * camMtx[2][1] + camMtx[3][2] * camMtx[2][2];

    dest[0] = objMtx[3][0] * camMtx[0][0] + objMtx[3][1] * camMtx[0][1] + objMtx[3][2] * camMtx[0][2] - camX;
    dest[1] = objMtx[3][0] * camMtx[1][0] + objMtx[3][1] * camMtx[1][1] + objMtx[3][2] * camMtx[1][2] - camY;
    dest[2] = objMtx[3][0] * camMtx[2][0] + objMtx[3][1] * camMtx[2][1] + objMtx[3][2] * camMtx[2][2] - camZ;
}


/**
 * Take the vector starting at 'from' pointed at 'to' an retrieve the length
 * of that vector, as well as the yaw and pitch angles.
 * Basically it converts the direction to spherical coordinates.
 */

/// Finds the horizontal distance between two vectors.
void vec3f_get_lateral_dist(Vec3f from, Vec3f to, f32 *lateralDist) {
    register f32 dx = (to[0] - from[0]);
    register f32 dz = (to[2] - from[2]);
    *lateralDist = sqrtf(sqr(dx) + sqr(dz));
}

/// Finds the squared horizontal distance between two vectors.
void vec3f_get_lateral_dist_squared(Vec3f from, Vec3f to, f32 *lateralDist) {
    register f32 dx = (to[0] - from[0]);
    register f32 dz = (to[2] - from[2]);
    *lateralDist = (sqr(dx) + sqr(dz));
}

/// Finds the distance between two vectors.
void vec3f_get_dist(Vec3f from, Vec3f to, f32 *dist) {
    register Vec3f d;
    vec3_diff(d, to, from);
    *dist = vec3_mag(d);
}

/// Finds the squared distance between two vectors.
void vec3f_get_dist_squared(Vec3f from, Vec3f to, f32 *dist) {
    register Vec3f d;
    vec3_diff(d, to, from);
    *dist = vec3_sumsq(d);
}

/// Finds the distance and yaw etween two vectors.
void vec3f_get_dist_and_yaw(Vec3f from, Vec3f to, f32 *dist, s16 *yaw) {
    register Vec3f d;
    vec3_diff(d, to, from);
    *dist = vec3_mag(d);
    *yaw = atan2s(d[2], d[0]);
}

/// Finds the pitch between two vectors.
void vec3f_get_pitch(Vec3f from, Vec3f to, s16 *pitch) {
    register Vec3f d;
    vec3_diff(d, to, from);
    *pitch = atan2s(sqrtf(sqr(d[0]) + sqr(d[2])), d[1]);
}

/// Finds the yaw between two vectors.
void vec3f_get_yaw(Vec3f from, Vec3f to, s16 *yaw) {
    register f32 dx = (to[0] - from[0]);
    register f32 dz = (to[2] - from[2]);
    *yaw = atan2s(dz, dx);
}

/// Finds the pitch and yaw between two vectors.
void vec3f_get_angle(Vec3f from, Vec3f to, s16 *pitch, s16 *yaw) {
    register Vec3f d;
    vec3_diff(d, to, from);
    *pitch = atan2s(sqrtf(sqr(d[0]) + sqr(d[2])), d[1]);
    *yaw = atan2s(d[2], d[0]);
}

/// Finds the horizontal distance and pitch between two vectors.
void vec3f_get_lateral_dist_and_pitch(Vec3f from, Vec3f to, f32 *lateralDist, Angle *pitch) {
    Vec3f d;
    vec3_diff(d, to, from);
    *lateralDist = sqrtf(sqr(d[0]) + sqr(d[2]));
    *pitch          = atan2s(*lateralDist, d[1]);
}

/// Finds the horizontal distance and yaw between two vectors.
void vec3f_get_lateral_dist_and_yaw(Vec3f from, Vec3f to, f32 *lateralDist, Angle *yaw) {
    register f32 dx = (to[0] - from[0]);
    register f32 dz = (to[2] - from[2]);
    *lateralDist = sqrtf(sqr(dx) + sqr(dz));
    *yaw         = atan2s(dz, dx);
}

/// Finds the horizontal distance and angles between two vectors.
void vec3f_get_lateral_dist_and_angle(Vec3f from, Vec3f to, f32 *lateralDist, Angle *pitch, Angle *yaw) {
    Vec3f d;
    vec3_diff(d, to, from);
    *lateralDist = sqrtf(sqr(d[0]) + sqr(d[2]));
    *pitch       = atan2s(*lateralDist, d[1]);
    *yaw         = atan2s(d[2], d[0]);
}

/// Finds the distance and angles between two vectors.
void vec3f_get_dist_and_angle(Vec3f from, Vec3f to, f32 *dist, s16 *pitch, s16 *yaw) {
    register Vec3f d;
    vec3_diff(d, to, from);
    register f32 xz = sqr(d[0]) + sqr(d[2]);
    *dist           = sqrtf(xz + sqr(d[1]));
    *pitch          = atan2s(sqrtf(xz), d[1]);
    *yaw            = atan2s(d[2], d[0]);
}
void vec3s_get_dist_and_angle(Vec3s from, Vec3s to, s16 *dist, Angle *pitch, Angle *yaw) {
    Vec3s d;
    vec3_diff(d, to, from);
    register f32 xz = (sqr(d[0]) + sqr(d[2]));
    *dist           = sqrtf(xz + sqr(d[1]));
    *pitch          = atan2s(sqrtf(xz), d[1]);
    *yaw            = atan2s(d[2], d[0]);
}

/// Finds the distance, horizontal distance, and angles between two vectors.
void vec3f_get_dist_and_lateral_dist_and_angle(Vec3f from, Vec3f to, f32 *dist, f32 *lateralDist, Angle *pitch, Angle *yaw) {
    Vec3f d;
    vec3_diff(d, to, from);
    register f32 xz = (sqr(d[0]) + sqr(d[2]));
    *dist           = sqrtf(xz + sqr(d[1]));
    *lateralDist    = sqrtf(xz);
    *pitch          = atan2s(*lateralDist, d[1]);
    *yaw            = atan2s(d[2], d[0]);
}

/**
 * Construct the 'to' point which is distance 'dist' away from the 'from' position,
 * and has the angles pitch and yaw.
 */
void vec3f_set_dist_and_angle(Vec3f from, Vec3f to, f32 dist, s32 pitch, s32 yaw) {
    register f32 dcos = (dist * coss(pitch));
    to[0] = (from[0] + (dcos * sins(yaw  )));
    to[1] = (from[1] + (dist * sins(pitch)));
    to[2] = (from[2] + (dcos * coss(yaw  )));
}
void vec3s_set_dist_and_angle(Vec3s from, Vec3s to, s16 dist, Angle32 pitch, Angle32 yaw) {
    register f32 dcos = (dist * coss(pitch));
    to[0] = (from[0] + (dcos * sins(yaw  )));
    to[1] = (from[1] + (dist * sins(pitch)));
    to[2] = (from[2] + (dcos * coss(yaw  )));
}

s32 approach_s16(s32 current, s32 target, s32 inc, s32 dec) {
    s16 dist = (target - current);
    if (dist >= 0) { // target >= current
        current = ((dist >  inc) ? (current + inc) : target);
    } else { // target < current
        current = ((dist < -dec) ? (current - dec) : target);
    }
    return current;
}

Bool32 approach_s16_bool(s16 *current, s32 target, s32 inc, s32 dec) {
    *current = approach_s16(*current, target, inc, dec);
    return !(*current == target);
}

/**
 * Return the value 'current' after it tries to approach target, going up at
 * most 'inc' and going down at most 'dec'.
 */
s32 approach_s32(s32 current, s32 target, s32 inc, s32 dec) {
    s32 dist = (target - current);
    if (dist > 0) { // current < target
        current = ((dist >  inc) ? (current + inc) : target);
    } else if (dist < 0) { // current > target
        current = ((dist < -dec) ? (current - dec) : target);
    }
    return current;
}

Bool32 approach_s32_bool(s32 *current, s32 target, s32 inc, s32 dec) {
    *current = approach_s32(*current, target, inc, dec);
    return !(*current == target);
}

/**
 * Return the value 'current' after it tries to approach target, going up at
 * most 'inc' and going down at most 'dec'.
 */
f32 approach_f32(f32 current, f32 target, f32 inc, f32 dec) {
    f32 dist = (target - current);
    if (dist >= 0.0f) { // target >= current
        current = ((dist >  inc) ? (current + inc) : target);
    } else { // target < current
        current = ((dist < -dec) ? (current - dec) : target);
    }
    return current;
}

Bool32 approach_f32_bool(f32 *current, f32 target, f32 inc, f32 dec) {
    *current = approach_f32(*current, target, inc, dec);
    return !(*current == target);
}

s32 approach_f32_signed(f32 *current, f32 target, f32 inc) {
    s32 reachedTarget = FALSE;
    *current += inc;
    if (inc >= 0.0f) {
        if (*current > target) {
            *current = target;
            reachedTarget = TRUE;
        }
    } else {
        if (*current < target) {
            *current = target;
            reachedTarget = TRUE;
        }
    }
    return reachedTarget;
}

/**
 * Similar to approach_s32, but converts to s16 and allows for overflow between 32767 and -32768
 */
s32 approach_angle(s32 current, s32 target, s32 inc) {
    s32 dist = (s16)(target - current);
    if (dist < 0) {
        dist += inc;
        if (dist > 0) dist = 0;
    } else if (dist > 0) {
        dist -= inc;
        if (dist < 0) dist = 0;
    }
    return (target - dist);
}

/**
 * Approaches an f32 value by taking the difference between the target and current value
 * and adding a fraction of that to the current value.
 * Edits the current value directly, returns TRUE if the target has been reached, FALSE otherwise.
 */
s32 approach_f32_asymptotic_bool(f32 *current, f32 target, f32 multiplier) {
    if (multiplier > 1.f) {
        multiplier = 1.f;
    }
    *current = *current + (target - *current) * multiplier;
    return (*current != target);
}

/**
 * Nearly the same as the above function, returns new value instead.
 */
f32 approach_f32_asymptotic(f32 current, f32 target, f32 multiplier) {
    current = current + (target - current) * multiplier;
    return current;
}

/**
 * Approaches an s16 value in the same fashion as approach_f32_asymptotic_bool, returns TRUE if target
 * is reached. Note: Since this function takes integers as parameters, the last argument is the
 * reciprocal of what it would be in the previous two functions.
 */
s32 approach_s16_asymptotic_bool(s16 *current, s16 target, s16 divisor) {
    s16 temp = *current;

    if (divisor == 0) {
        *current = target;
    } else {
        temp -= target;
        temp -= temp / divisor;
        temp += target;
        *current = temp;
    }
    return (*current != target);
}

/**
 * Approaches an s16 value in the same fashion as approach_f32_asymptotic, returns the new value.
 * Note: last parameter is the reciprocal of what it would be in the f32 functions
 */
s32 approach_s16_asymptotic(s16 current, s16 target, s16 divisor) {
    s16 temp = current;

    if (divisor == 0) {
        current = target;
    } else {
        temp -= target;
        temp -= temp / divisor;
        temp += target;
        current = temp;
    }
    return current;
}

/**
 * Helper function for atan2s. Does a look up of the arctangent of y/x assuming
 * the resulting angle is in range [0, 0x2000] (1/8 of a circle).
 */
#define atan2_lookup(y, x) ((x == 0) ? 0x0 : atans((y) / (x)))

/**
 * Compute the angle from (0, 0) to (x, y) as a s16. Given that terrain is in
 * the xz-plane, this is commonly called with (z, x) to get a yaw angle.
 */
s16 atan2s(f32 y, f32 x) {
    u16 ret;
    if (x >= 0) {
        if (y >= 0) {
            if (y >= x) {
                ret = atan2_lookup(x, y);
            } else {
                ret = (0x4000 - atan2_lookup(y, x));
            }
        } else {
            y = -y;
            if (y < x) {
                ret = (0x4000 + atan2_lookup(y, x));
            } else {
                ret = (0x8000 - atan2_lookup(x, y));
            }
        }
    } else {
        x = -x;
        if (y < 0) {
            y = -y;
            if (y >= x) {
                ret = (0x8000 + atan2_lookup(x, y));
            } else {
                ret = (0xC000 - atan2_lookup(y, x));
            }
        } else {
            if (y < x) {
                ret = (0xC000 + atan2_lookup(y, x));
            } else {
                ret = -atan2_lookup(x, y);
            }
        }
    }
    return ret;
}

/**
 * Compute the atan2 in radians by calling atan2s and converting the result.
 */
f32 atan2f(f32 y, f32 x) {
    return ((f32) atan2s(y, x) * M_PI / 0x8000);
}

// Variables for a spline curve animation (used for the flight path in the grand star cutscene)
Vec4s *gSplineKeyframe;
float gSplineKeyframeFraction;
int gSplineState;

#define CURVE_BEGIN_1 0x1
#define CURVE_BEGIN_2 0x2
#define CURVE_MIDDLE  0x3
#define CURVE_END_1   0x4
#define CURVE_END_2   0x5

/**
 * Set 'result' to a 4-vector with weights corresponding to interpolation
 * value t in [0, 1] and gSplineState. Given the current control point P, these
 * weights are for P[0], P[1], P[2] and P[3] to obtain an interpolated point.
 * The weights naturally sum to 1, and they are also always in range [0, 1] so
 * the interpolated point will never overshoot. The curve is guaranteed to go
 * through the first and last point, but not through intermediate points.
 *
 * gSplineState ensures that the curve is clamped: the first two points
 * and last two points have different weight formulas. These are the weights
 * just before gSplineState transitions:
 * 1: [1, 0, 0, 0]
 * 1->2: [0, 3/12, 7/12, 2/12]
 * 2->3: [0, 1/6, 4/6, 1/6]
 * 3->3: [0, 1/6, 4/6, 1/6] (repeats)
 * 3->4: [0, 1/6, 4/6, 1/6]
 * 4->5: [0, 2/12, 7/12, 3/12]
 * 5: [0, 0, 0, 1]
 *
 * I suspect that the weight formulas will give a 3rd degree B-spline with the
 * common uniform clamped knot vector, e.g. for n points:
 * [0, 0, 0, 0, 1, 2, ... n-1, n, n, n, n]
 * TODO: verify the classification of the spline / figure out how polynomials were computed
 */
void spline_get_weights(Vec4f result, f32 t, UNUSED s32 c) {
    f32 tinv = 1 - t;
    f32 tinv2 = tinv * tinv;
    f32 tinv3 = tinv2 * tinv;
    f32 t2 = t * t;
    f32 t3 = t2 * t;

    switch (gSplineState) {
        case CURVE_BEGIN_1:
            result[0] = tinv3;
            result[1] = t3 * 1.75f - t2 * 4.5f + t * 3.0f;
            result[2] = -t3 * (11 / 12.0f) + t2 * 1.5f;
            result[3] = t3 * (1 / 6.0f);
            break;
        case CURVE_BEGIN_2:
            result[0] = tinv3 * 0.25f;
            result[1] = t3 * (7 / 12.0f) - t2 * 1.25f + t * 0.25f + (7 / 12.0f);
            result[2] = -t3 * 0.5f + t2 * 0.5f + t * 0.5f + (1 / 6.0f);
            result[3] = t3 * (1 / 6.0f);
            break;
        case CURVE_MIDDLE:
            result[0] = tinv3 * (1 / 6.0f);
            result[1] = t3 * 0.5f - t2 + (4 / 6.0f);
            result[2] = -t3 * 0.5f + t2 * 0.5f + t * 0.5f + (1 / 6.0f);
            result[3] = t3 * (1 / 6.0f);
            break;
        case CURVE_END_1:
            result[0] = tinv3 * (1 / 6.0f);
            result[1] = -tinv3 * 0.5f + tinv2 * 0.5f + tinv * 0.5f + (1 / 6.0f);
            result[2] = tinv3 * (7 / 12.0f) - tinv2 * 1.25f + tinv * 0.25f + (7 / 12.0f);
            result[3] = t3 * 0.25f;
            break;
        case CURVE_END_2:
            result[0] = tinv3 * (1 / 6.0f);
            result[1] = -tinv3 * (11 / 12.0f) + tinv2 * 1.5f;
            result[2] = tinv3 * 1.75f - tinv2 * 4.5f + tinv * 3.0f;
            result[3] = t3;
            break;
    }
}

/**
 * Initialize a spline animation.
 * 'keyFrames' should be an array of (s, x, y, z) vectors
 *  s: the speed of the keyframe in 1000/frames, e.g. s=100 means the keyframe lasts 10 frames
 *  (x, y, z): point in 3D space on the curve
 * The array should end with three entries with s=0 (infinite keyframe duration).
 * That's because the spline has a 3rd degree polynomial, so it looks 3 points ahead.
 */
void anim_spline_init(Vec4s *keyFrames) {
    gSplineKeyframe = keyFrames;
    gSplineKeyframeFraction = 0;
    gSplineState = 1;
}

/**
 * Poll the next point from a spline animation.
 * anim_spline_init should be called before polling for vectors.
 * Returns TRUE when the last point is reached, FALSE otherwise.
 */
s32 anim_spline_poll(Vec3f result) {
    Vec4f weights;
    s32 i;
    s32 hasEnded = FALSE;

    vec3_zero(result);
    spline_get_weights(weights, gSplineKeyframeFraction, gSplineState);
    for (i = 0; i < 4; i++) {
        result[0] += weights[i] * gSplineKeyframe[i][1];
        result[1] += weights[i] * gSplineKeyframe[i][2];
        result[2] += weights[i] * gSplineKeyframe[i][3];
    }

    if ((gSplineKeyframeFraction += gSplineKeyframe[0][0] / 1000.0f) >= 1) {
        gSplineKeyframe++;
        gSplineKeyframeFraction--;
        switch (gSplineState) {
            case CURVE_END_2:
                hasEnded = TRUE;
                break;
            case CURVE_MIDDLE:
                if (gSplineKeyframe[2][0] == 0) {
                    gSplineState = CURVE_END_1;
                }
                break;
            default:
                gSplineState++;
                break;
        }
    }

    return hasEnded;
}

f32 get_relative_position_between_ranges(f32 x, f32 fromA, f32 toA, f32 fromB, f32 toB) {
    return (x - fromA) / (toA - fromA) * (toB - fromB) + fromB;
}

s16 approach_yaw(s16 curYaw, s16 target, f32 speed) {
    return (s16) (target - approach_f32_asymptotic(
        (s16) (target - curYaw),
        0,
        speed
    ));
}

/// Multiply vector 'dest' by a
void vec3f_mul(Vec3f dest, f32 a) {
    vec3_mul_val(dest, a);
}

/// Get length of vector 'a'
f32 vec3f_length(Vec3f a) {
    return sqrtf(sqr(a[0]) + sqr(a[1]) + sqr(a[2]));
}

/// Get dot product of vectors 'a' and 'b'
f32 vec3f_dot(Vec3f a, Vec3f b) {
    return vec3_dot(a, b);
}

/// Make 'dest' the difference of vectors a and b.
void vec3f_dif(Vec3f dest, Vec3f a, Vec3f b) {
    vec3_diff(dest, a, b);
}
