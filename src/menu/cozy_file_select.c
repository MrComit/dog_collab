#include <PR/ultratypes.h>
#include <PR/gbi.h>

#include "audio/external.h"
#include "behavior_data.h"
#include "dialog_ids.h"
#include "engine/behavior_script.h"
#include "engine/graph_node.h"
#include "engine/math_util.h"
#include "cozy_file_select.h"
#include "file_select.h"
#include "game/area.h"
#include "game/game_init.h"
#include "game/ingame_menu.h"
#include "game/object_helpers.h"
#include "game/object_list_processor.h"
#include "game/print.h"
#include "game/save_file.h"
#include "game/segment2.h"
#include "game/segment7.h"
#include "game/spawn_object.h"
#include "game/rumble_init.h"
#include "sm64.h"
#include "text_strings.h.in"
#include "buffers/buffers.h"

#include "eu_translation.h"

void store_dog_string(char *dogString, u8 fileNum);

s32 on_select_game(FileSelectMenuState *mState);
s32 on_erase_game(FileSelectMenuState *mState);
s32 on_erase_game_button(FileSelectMenuState *mState);
s32 on_continue_game(FileSelectMenuState *mState);
s32 on_pop_menu(FileSelectMenuState *mState);
extern FileSelectMenu sMainMenu;
extern FileSelectMenu sExistingFileMenu;

FileSelectOption sConfirmEraseOptions[] = {
    {
        .label = "Erase",
        .onSelect = &on_erase_game,
        .disabled = FALSE,
    },
    {
        .label = "Cancel",
        .onSelect = &on_pop_menu,
        .disabled = FALSE,
    },
};
FileSelectMenu sConfirmEraseMenu = MENU_OPTIONS(sConfirmEraseOptions, "Erase file?", &sExistingFileMenu, MENU_TYPE_BASIC);


FileSelectOption sExistingFileOptions[] = {
    {
        .label = "Start",
        .onSelect = &on_continue_game,
        .disabled = FALSE,
    },
    {
        .label = "Erase",
        .onSelect = &on_erase_game_button,
        .disabled = FALSE,
    },
    {
        .label = "Cancel",
        .onSelect = &on_pop_menu,
        .disabled = FALSE,
    },
};
FileSelectMenu sExistingFileMenu = MENU_OPTIONS(sExistingFileOptions, NULL, &sMainMenu, MENU_TYPE_BASIC);

FileSelectOption sNewFileOptions[] = {
    {
        .label = "Start",
        .onSelect = &on_continue_game,
        .disabled = FALSE,
    },
    {
        .label = "Cancel",
        .onSelect = &on_pop_menu,
        .disabled = FALSE,
    },
};
FileSelectMenu sNewFileMenu = MENU_OPTIONS(sNewFileOptions, "New file?", &sMainMenu, MENU_TYPE_BASIC);

enum MM_OPTS {
    MAIN_MENU_OPT_SAVE_A,
    MAIN_MENU_OPT_SAVE_B,
    MAIN_MENU_OPT_SAVE_C,
};

#define START_NEW_GAME_TEXT "Start new game"

char sMainMenuFile1Label[16] = START_NEW_GAME_TEXT;
char sMainMenuFile2Label[16] = START_NEW_GAME_TEXT;
char sMainMenuFile3Label[16] = START_NEW_GAME_TEXT;

FileSelectOption sMainMenuOptList[] = {
    [MAIN_MENU_OPT_SAVE_A] = {
        .label = sMainMenuFile1Label,
        .onSelect = &on_select_game,
        .disabled = FALSE, // needs init
    },
    [MAIN_MENU_OPT_SAVE_B] = {
        .label = sMainMenuFile2Label,
        .onSelect = &on_select_game,
        .disabled = FALSE,
    },
    [MAIN_MENU_OPT_SAVE_C] = {
        .label = sMainMenuFile3Label,
        .onSelect = &on_select_game,
        .disabled = FALSE,
    },
};

FileSelectMenu sMainMenu = MENU_OPTIONS(sMainMenuOptList, "Select a file", NULL, MENU_TYPE_NUMBERED);

FileSelectMenuState sMenuState = {
    .waitingForStickReturn = FALSE,
    .optDirection = 0,
    .menu = &sMainMenu,
    .parentMenu = NULL,
    .alpha = 0,
    .closing = FALSE,
};


// this menu callbacks start

s32 on_erase_game(FileSelectMenuState *mState) {
    save_file_erase(sMainMenu.curOpt);
    
    sprintf(sMainMenu.options[sMainMenu.curOpt].label, START_NEW_GAME_TEXT); 
    mState->menu->curOpt = 0; // reset option
    mState->menu = &sMainMenu;

    return OPT_CALLBACK_EXIT;
}

s32 on_erase_game_button(FileSelectMenuState *mState) {
    mState->menu = &sConfirmEraseMenu;
    sConfirmEraseMenu.curOpt = 1;

    return OPT_CALLBACK_NONE;
}

s32 on_select_game(FileSelectMenuState *mState) {
    if (save_file_exists(sMainMenu.curOpt)) {
        mState->menu = &sExistingFileMenu;
        sExistingFileMenu.label = sMainMenu.options[sMainMenu.curOpt].label;
        sExistingFileMenu.curOpt = 0;
    } else {
        mState->menu = &sNewFileMenu;
        sNewFileMenu.curOpt = 0;
    }

    return OPT_CALLBACK_NONE;
}

s32 on_continue_game(UNUSED FileSelectMenuState *mState) {
    return OPT_CALLBACK_CLOSE;
}

// this menu callbacks end

ALWAYS_INLINE void play_change_option_sound(void) {
    play_sound(SOUND_MENU_MESSAGE_NEXT_PAGE, gGlobalSoundSource);
}

ALWAYS_INLINE void play_pop_menu_sound(void) {
    play_sound(SOUND_MENU_MESSAGE_DISAPPEAR, gGlobalSoundSource);
}

ALWAYS_INLINE void play_confirm_selection_sound(void) {
    play_sound(SOUND_MENU_CLICK_FILE_SELECT, gGlobalSoundSource);
}

s32 on_pop_menu(FileSelectMenuState *mState) {
    if (mState->menu->parentOptions) {
        play_pop_menu_sound();
        mState->menu = mState->menu->parentOptions;
        return OPT_CALLBACK_BACK;
    }

    return OPT_CALLBACK_EXIT;
}

void use_menu_direction(FileSelectMenuState *mState) {
    mState->menu->curOpt += mState->optDirection;
    if (mState->menu->curOpt >= mState->menu->numOptions) mState->menu->curOpt = 0;
    else if (mState->menu->curOpt < 0) mState->menu->curOpt = mState->menu->numOptions - 1;
}

s32 get_menu_inputs(FileSelectMenuState *mState) {
    mState->optDirection = 0;
    struct Controller *cont = gPlayer1Controller;

    if (cont->buttonPressed & (A_BUTTON | START_BUTTON)) {
        return FILE_SELECT_PRESS_CONFIRM;
    }

    if (cont->buttonPressed & (B_BUTTON)) {
        return FILE_SELECT_PRESS_CANCEL;
    }

    if (!mState->waitingForStickReturn) {
        if ((cont->rawStickY > 60) || (cont->buttonPressed & (U_CBUTTONS | U_JPAD))) mState->optDirection--;
        else if ((cont->rawStickY < -60) || (cont->buttonPressed & (D_CBUTTONS | D_JPAD))) mState->optDirection++;

        if (mState->optDirection != 0) {
            mState->waitingForStickReturn = TRUE;

            use_menu_direction(mState);
            while (mState->menu->options[mState->menu->curOpt].disabled) {
                use_menu_direction(mState);
            }
            play_change_option_sound();
        }
    } else if (ABS(cont->rawStickY) < 20 && !(cont->buttonDown & (U_CBUTTONS | U_JPAD | D_CBUTTONS | D_JPAD))) {
        mState->waitingForStickReturn = FALSE;
    }

    return FILE_SELECT_PRESS_NONE;
}

#define MENU_PADDING 12
#define MENU_LINE_HEIGHT 20
#define MENU_OPT_START_Y (MENU_PADDING + MENU_LINE_HEIGHT)
#define MENU_OPT_LINE_Y(idx, numOpts) (SCREEN_HEIGHT - (MENU_OPT_START_Y + ((numOpts - idx) * MENU_LINE_HEIGHT)))

void render_menu(FileSelectMenuState *mState) {
    if (mState->closing && mState->alpha > 0) mState->alpha = lroundf(lerp(0, 255, (f32)(CLAMP(mState->closeTimer, 0, 15)) / 15.0f));
    else if (!mState->closing && mState->alpha < 255) {
        mState->alpha += lroundf(255.0f/15.0f);
        mState->alpha = MIN(mState->alpha, 255);
    }

    create_dl_ortho_matrix();

    gSPDisplayList(gDisplayListHead++, dl_rgba16_text_begin);
    gDPSetEnvColor(gDisplayListHead++, 255, 255, 255, mState->alpha);
    if (mState->menu->label) print_hud_lut_string(HUD_LUT_DIFF, MENU_PADDING, MENU_PADDING, (u8 *)mState->menu->label);

    for (int i = 0; i < mState->menu->numOptions; i++) {
        FileSelectOption *opt = &mState->menu->options[i];
        s32 yPos = MENU_OPT_LINE_Y(i, mState->menu->numOptions);
        if (opt->disabled) {
            gDPSetEnvColor(gDisplayListHead++, 127, 127, 127, mState->alpha / 2);
        } else if (i == mState->menu->curOpt) {
            f32 fac = (get_cycle(0.7f, 0.0f, gGlobalTimer) + 1.0f) * 0.5f;
            s32 intensity = lroundf(lerp(200, 255, fac));
            gDPSetEnvColor(gDisplayListHead++, intensity, intensity, intensity, mState->alpha);
            if (mState->menu->menuType != MENU_TYPE_NUMBERED) {
                print_hud_lut_string(HUD_LUT_DIFF, MENU_PADDING, yPos, (u8 *)"$");
            }
        } else {
            gDPSetEnvColor(gDisplayListHead++, 150, 150, 150, mState->alpha);
        }

        if (mState->menu->menuType == MENU_TYPE_NUMBERED) {
            char numStr[4];
            sprintf(numStr, "%d.", i+1);
            print_hud_lut_string(HUD_LUT_DIFF, MENU_PADDING, yPos, (u8 *)numStr);
            print_hud_lut_string(HUD_LUT_DIFF, MENU_PADDING+20, yPos, (u8 *)opt->label);
        } else {
            print_hud_lut_string(HUD_LUT_DIFF, MENU_PADDING+8, yPos, (u8 *)opt->label);
        }
    }

    gSPDisplayList(gDisplayListHead++, dl_rgba16_text_end);
}

s32 process_menu(FileSelectMenuState *mState) {
    s32 input = mState->closing ? FILE_SELECT_PRESS_NONE : get_menu_inputs(mState);
    s32 result = OPT_CALLBACK_NONE;

    switch (input) {
        case FILE_SELECT_PRESS_CONFIRM:
            play_confirm_selection_sound();
            FileSelectOption *opt = &mState->menu->options[mState->menu->curOpt];
            result = opt->onSelect(mState);
            break;
        case FILE_SELECT_PRESS_CANCEL:
            result = on_pop_menu(mState); // OPT_CALLBACK_EXIT if inside of menu, else OPT_CALLBACK_BACK
            break;
        // case FILE_SELECT_PRESS_NONE:
    }

    render_menu(mState);

    return result;
}

void render_file_info(FileSelectMenuState *mState) {
    s32 saveIndex = sMainMenu.curOpt;
    s32 starCount = save_file_get_total_star_count(saveIndex, COURSE_MIN - 1, COURSE_MAX - 1);
    char buf[8];
    gSPDisplayList(gDisplayListHead++, dl_rgba16_text_begin);
    gDPSetEnvColor(gDisplayListHead++, 255, 255, 255, mState->alpha);
    sprintf(buf, "-*%d", starCount);
    print_hud_lut_string(HUD_LUT_GLOBAL, MENU_PADDING, MENU_PADDING + MENU_LINE_HEIGHT, (u8 *)buf);
    gSPDisplayList(gDisplayListHead++, dl_rgba16_text_end);
}

s32 run_file_select(void) {
    FileSelectMenuState *mState = &sMenuState;

    s32 menuResponse = process_menu(mState);

    if (mState->menu == &sExistingFileMenu) {
        render_file_info(mState);
    }

    if (menuResponse == OPT_CALLBACK_CLOSE) {
        mState->closing = TRUE;
        mState->closeTimer = 15;
        return 0;
    }

    if (mState->closing) {
        if (mState->closeTimer <= 0) {
            // mState->closing = FALSE;
            mState->closeTimer = 0;
            return sMainMenu.curOpt + 1;
        } else {
            mState->closeTimer--;
        }
    }

    return 0;
}

void store_dog_string(char *dogString, u8 fileNum) {
    u8 length = DOG_STRING_LENGTH;
    s8 lastZero = -1;

    for(int i = 0; i < DOG_STRING_LENGTH + 1; i++) {
        dogString[i] = save_file_get_dog_string(fileNum, i);
        if(dogString[i] == 0x0 && lastZero == -1) {
            lastZero = i;
        }
        if(dogString[i] == 0x0 && length == 12) {
            length = i;
            break;
        }
    }

    if((gSaveBuffer.files[fileNum].flags & SAVE_FLAG_BOWSER_3_BEAT) && save_file_get_total_star_count(fileNum, COURSE_MIN - 1, COURSE_MAX - 1) >= 73) {
        dogString[lastZero] = 0x20;
        dogString[lastZero + 1] = 0x2C;
        dogString[lastZero + 2] = 0x0;
    } else {
        dogString[length] = 0x0;
    }
}

void init_file_select(void) {
    FileSelectMenuState *mState = &sMenuState;
    if (save_file_exists(0)) {
        store_dog_string(sMainMenuOptList[0].label, 0);
    }
    if (save_file_exists(1)) {
        store_dog_string(sMainMenuOptList[1].label, 1);
    }
    if (save_file_exists(2)) {
        store_dog_string(sMainMenuOptList[2].label, 2);
    }
    mState->closing = FALSE;
}