// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: GAMA_Touchscreen

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_SplashScreen;
lv_obj_t * ui_SplashScreen_Image1;
void ui_event_SplashScreen_Button5(lv_event_t * e);
lv_obj_t * ui_SplashScreen_Button5;
lv_obj_t * ui_SplashScreen_Label5;
lv_obj_t * ui_threeButtonFOB;
void ui_event_SplashScreen_Button2(lv_event_t * e);
lv_obj_t * ui_SplashScreen_Button2;
lv_obj_t * ui_Screen1_Label2;
void ui_event_Screen1_Button3(lv_event_t * e);
lv_obj_t * ui_Screen1_Button3;
lv_obj_t * ui_Screen1_Label3;
void ui_event_SplashScreen_ButtonBack(lv_event_t * e);
lv_obj_t * ui_SplashScreen_ButtonBack;
lv_obj_t * ui_Screen1_LabelBack;
lv_obj_t * ui_twelveButtonFOB;
void ui_event_SplashScreen_ButtonBack1(lv_event_t * e);
lv_obj_t * ui_SplashScreen_ButtonBack1;
lv_obj_t * ui_Screen1_LabelBack1;
lv_obj_t * ui_twelveButtonFOB_ButtonOne;
lv_obj_t * ui_twelveButtonFOB_LabelOne;
lv_obj_t * ui_twelveButtonFOB_ButtonTwo;
lv_obj_t * ui_twelveButtonFOB_LabelTwo;
lv_obj_t * ui_twelveButtonFOB_ButtonThree;
lv_obj_t * ui_twelveButtonFOB_LabelThree;
lv_obj_t * ui_twelveButtonFOB_ButtonFour;
lv_obj_t * ui_twelveButtonFOB_LabelFour;
lv_obj_t * ui_twelveButtonFOB_ButtonFive;
lv_obj_t * ui_twelveButtonFOB_LabelFive;
lv_obj_t * ui_twelveButtonFOB_ButtonSix;
lv_obj_t * ui_twelveButtonFOB_LabelSix;
lv_obj_t * ui_twelveButtonFOB_ButtonSeven;
lv_obj_t * ui_twelveButtonFOB_LabelSeven;
lv_obj_t * ui_twelveButtonFOB_ButtonEight;
lv_obj_t * ui_twelveButtonFOB_LabelEight;
lv_obj_t * ui_twelveButtonFOB_ButtonNine;
lv_obj_t * ui_twelveButtonFOB_LabelNine;
lv_obj_t * ui_twelveButtonFOB_ButtonTen;
lv_obj_t * ui_twelveButtonFOB_LabelTen;
lv_obj_t * ui_twelveButtonFOB_ButtonEleven;
lv_obj_t * ui_twelveButtonFOB_LabelEleven;
lv_obj_t * ui_twelveButtonFOB_ButtonTwleve;
lv_obj_t * ui_twelveButtonFOB_LabelTwleve;
lv_obj_t * ui_MainScreen;
void ui_event_MainScreen_Dropdown1(lv_event_t * e);
lv_obj_t * ui_MainScreen_Dropdown1;
lv_obj_t * ui_colorwheel;
void ui_event_SplashScreen_ButtonBack2(lv_event_t * e);
lv_obj_t * ui_SplashScreen_ButtonBack2;
lv_obj_t * ui_Screen1_LabelBack2;
void ui_event_colorwheel_Colorwheel1(lv_event_t * e);
lv_obj_t * ui_colorwheel_Colorwheel1;
lv_obj_t * ui_colorwheel_Image2;
lv_obj_t * ui_keyboard;
void ui_event_SplashScreen_ButtonBack3(lv_event_t * e);
lv_obj_t * ui_SplashScreen_ButtonBack3;
lv_obj_t * ui_Screen1_LabelBack3;
lv_obj_t * ui_keyboard_TextArea1;
lv_obj_t * ui_keyboard_Keyboard1;
lv_obj_t * ui_colorsliders;
void ui_event_colorsliders_SliderRed(lv_event_t * e);
lv_obj_t * ui_colorsliders_SliderRed;
void ui_event_colorsliders_SliderGreen(lv_event_t * e);
lv_obj_t * ui_colorsliders_SliderGreen;
void ui_event_colorsliders_SliderBlue(lv_event_t * e);
lv_obj_t * ui_colorsliders_SliderBlue;
void ui_event_SplashScreen_ButtonBack4(lv_event_t * e);
lv_obj_t * ui_SplashScreen_ButtonBack4;
lv_obj_t * ui_Screen1_LabelBack4;
lv_obj_t * ui_chart;
void ui_event_SplashScreen_ButtonBack5(lv_event_t * e);
lv_obj_t * ui_SplashScreen_ButtonBack5;
lv_obj_t * ui_Screen1_LabelBack5;
lv_obj_t * ui_chart_Chart1;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_SplashScreen_Button5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_MainScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_SplashScreen_Button2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        upPressed(e);
    }
    if(event_code == LV_EVENT_RELEASED) {
        upReleased(e);
    }
}
void ui_event_Screen1_Button3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        downPressed(e);
    }
    if(event_code == LV_EVENT_RELEASED) {
        downReleased(e);
    }
}
void ui_event_SplashScreen_ButtonBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_MainScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_SplashScreen_ButtonBack1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_MainScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_MainScreen_Dropdown1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        gotoDemo(e);
    }
}
void ui_event_SplashScreen_ButtonBack2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_MainScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
    if(event_code == LV_EVENT_RELEASED) {
        clearRGB(e);
    }
}
void ui_event_colorwheel_Colorwheel1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        updateColorwheel(e);
    }
}
void ui_event_SplashScreen_ButtonBack3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_MainScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_colorsliders_SliderRed(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        updateRGB_Red(e);
    }
}
void ui_event_colorsliders_SliderGreen(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        updateRGB_Green(e);
    }
}
void ui_event_colorsliders_SliderBlue(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        updateRGB_Blue(e);
    }
}
void ui_event_SplashScreen_ButtonBack4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_MainScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
    if(event_code == LV_EVENT_RELEASED) {
        clearRGB(e);
    }
}
void ui_event_SplashScreen_ButtonBack5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_MainScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_SplashScreen_screen_init(void)
{
    ui_SplashScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_SplashScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_SplashScreen, lv_color_hex(0x0E4613), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SplashScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SplashScreen_Image1 = lv_img_create(ui_SplashScreen);
    lv_img_set_src(ui_SplashScreen_Image1, &ui_img_222593973);
    lv_obj_set_width(ui_SplashScreen_Image1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SplashScreen_Image1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SplashScreen_Image1, 0);
    lv_obj_set_y(ui_SplashScreen_Image1, -46);
    lv_obj_set_align(ui_SplashScreen_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SplashScreen_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_SplashScreen_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_SplashScreen_Button5 = lv_btn_create(ui_SplashScreen);
    lv_obj_set_width(ui_SplashScreen_Button5, 250);
    lv_obj_set_height(ui_SplashScreen_Button5, 50);
    lv_obj_set_x(ui_SplashScreen_Button5, 0);
    lv_obj_set_y(ui_SplashScreen_Button5, 50);
    lv_obj_set_align(ui_SplashScreen_Button5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SplashScreen_Button5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_SplashScreen_Button5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_SplashScreen_Button5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SplashScreen_Button5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SplashScreen_Label5 = lv_label_create(ui_SplashScreen_Button5);
    lv_obj_set_width(ui_SplashScreen_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SplashScreen_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_SplashScreen_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SplashScreen_Label5, "GAMA Touchscreen Demo");
    lv_obj_set_style_text_color(ui_SplashScreen_Label5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SplashScreen_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_SplashScreen_Button5, ui_event_SplashScreen_Button5, LV_EVENT_ALL, NULL);

}
void ui_threeButtonFOB_screen_init(void)
{
    ui_threeButtonFOB = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_threeButtonFOB, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_threeButtonFOB, lv_color_hex(0x0E4613), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_threeButtonFOB, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SplashScreen_Button2 = lv_btn_create(ui_threeButtonFOB);
    lv_obj_set_width(ui_SplashScreen_Button2, 150);
    lv_obj_set_height(ui_SplashScreen_Button2, 75);
    lv_obj_set_x(ui_SplashScreen_Button2, 0);
    lv_obj_set_y(ui_SplashScreen_Button2, -50);
    lv_obj_set_align(ui_SplashScreen_Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SplashScreen_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_SplashScreen_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_SplashScreen_Button2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SplashScreen_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Label2 = lv_label_create(ui_SplashScreen_Button2);
    lv_obj_set_width(ui_Screen1_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen1_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_Label2, "Up");
    lv_obj_set_style_text_color(ui_Screen1_Label2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Button3 = lv_btn_create(ui_threeButtonFOB);
    lv_obj_set_width(ui_Screen1_Button3, 150);
    lv_obj_set_height(ui_Screen1_Button3, 75);
    lv_obj_set_x(ui_Screen1_Button3, 0);
    lv_obj_set_y(ui_Screen1_Button3, 50);
    lv_obj_set_align(ui_Screen1_Button3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Screen1_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Screen1_Button3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1_Button3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Label3 = lv_label_create(ui_Screen1_Button3);
    lv_obj_set_width(ui_Screen1_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen1_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_Label3, "Down");
    lv_obj_set_style_text_color(ui_Screen1_Label3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SplashScreen_ButtonBack = lv_btn_create(ui_threeButtonFOB);
    lv_obj_set_width(ui_SplashScreen_ButtonBack, 50);
    lv_obj_set_height(ui_SplashScreen_ButtonBack, 50);
    lv_obj_set_x(ui_SplashScreen_ButtonBack, -130);
    lv_obj_set_y(ui_SplashScreen_ButtonBack, -90);
    lv_obj_set_align(ui_SplashScreen_ButtonBack, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SplashScreen_ButtonBack, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_SplashScreen_ButtonBack, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_SplashScreen_ButtonBack, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SplashScreen_ButtonBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_LabelBack = lv_label_create(ui_SplashScreen_ButtonBack);
    lv_obj_set_width(ui_Screen1_LabelBack, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_LabelBack, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen1_LabelBack, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_LabelBack, "Back");
    lv_obj_set_style_text_color(ui_Screen1_LabelBack, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_LabelBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_SplashScreen_Button2, ui_event_SplashScreen_Button2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen1_Button3, ui_event_Screen1_Button3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SplashScreen_ButtonBack, ui_event_SplashScreen_ButtonBack, LV_EVENT_ALL, NULL);

}
void ui_twelveButtonFOB_screen_init(void)
{
    ui_twelveButtonFOB = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_twelveButtonFOB, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_twelveButtonFOB, lv_color_hex(0x0E4613), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_twelveButtonFOB, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SplashScreen_ButtonBack1 = lv_btn_create(ui_twelveButtonFOB);
    lv_obj_set_width(ui_SplashScreen_ButtonBack1, 40);
    lv_obj_set_height(ui_SplashScreen_ButtonBack1, 70);
    lv_obj_set_x(ui_SplashScreen_ButtonBack1, -140);
    lv_obj_set_y(ui_SplashScreen_ButtonBack1, -80);
    lv_obj_set_align(ui_SplashScreen_ButtonBack1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SplashScreen_ButtonBack1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_SplashScreen_ButtonBack1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_SplashScreen_ButtonBack1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SplashScreen_ButtonBack1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_LabelBack1 = lv_label_create(ui_SplashScreen_ButtonBack1);
    lv_obj_set_width(ui_Screen1_LabelBack1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_LabelBack1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen1_LabelBack1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_LabelBack1, "Back");
    lv_obj_set_style_text_color(ui_Screen1_LabelBack1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_LabelBack1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_ButtonOne = lv_btn_create(ui_twelveButtonFOB);
    lv_obj_set_width(ui_twelveButtonFOB_ButtonOne, 65);
    lv_obj_set_height(ui_twelveButtonFOB_ButtonOne, 70);
    lv_obj_set_x(ui_twelveButtonFOB_ButtonOne, -84);
    lv_obj_set_y(ui_twelveButtonFOB_ButtonOne, -80);
    lv_obj_set_align(ui_twelveButtonFOB_ButtonOne, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_twelveButtonFOB_ButtonOne, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_twelveButtonFOB_ButtonOne, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_twelveButtonFOB_ButtonOne, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_twelveButtonFOB_ButtonOne, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_LabelOne = lv_label_create(ui_twelveButtonFOB_ButtonOne);
    lv_obj_set_width(ui_twelveButtonFOB_LabelOne, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_twelveButtonFOB_LabelOne, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_twelveButtonFOB_LabelOne, LV_ALIGN_CENTER);
    lv_label_set_text(ui_twelveButtonFOB_LabelOne, "1");
    lv_obj_set_style_text_color(ui_twelveButtonFOB_LabelOne, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_twelveButtonFOB_LabelOne, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_ButtonTwo = lv_btn_create(ui_twelveButtonFOB);
    lv_obj_set_width(ui_twelveButtonFOB_ButtonTwo, 65);
    lv_obj_set_height(ui_twelveButtonFOB_ButtonTwo, 70);
    lv_obj_set_x(ui_twelveButtonFOB_ButtonTwo, -16);
    lv_obj_set_y(ui_twelveButtonFOB_ButtonTwo, -80);
    lv_obj_set_align(ui_twelveButtonFOB_ButtonTwo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_twelveButtonFOB_ButtonTwo, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_twelveButtonFOB_ButtonTwo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_twelveButtonFOB_ButtonTwo, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_twelveButtonFOB_ButtonTwo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_LabelTwo = lv_label_create(ui_twelveButtonFOB_ButtonTwo);
    lv_obj_set_width(ui_twelveButtonFOB_LabelTwo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_twelveButtonFOB_LabelTwo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_twelveButtonFOB_LabelTwo, LV_ALIGN_CENTER);
    lv_label_set_text(ui_twelveButtonFOB_LabelTwo, "2");
    lv_obj_set_style_text_color(ui_twelveButtonFOB_LabelTwo, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_twelveButtonFOB_LabelTwo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_ButtonThree = lv_btn_create(ui_twelveButtonFOB);
    lv_obj_set_width(ui_twelveButtonFOB_ButtonThree, 65);
    lv_obj_set_height(ui_twelveButtonFOB_ButtonThree, 70);
    lv_obj_set_x(ui_twelveButtonFOB_ButtonThree, 52);
    lv_obj_set_y(ui_twelveButtonFOB_ButtonThree, -80);
    lv_obj_set_align(ui_twelveButtonFOB_ButtonThree, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_twelveButtonFOB_ButtonThree, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_twelveButtonFOB_ButtonThree, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_twelveButtonFOB_ButtonThree, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_twelveButtonFOB_ButtonThree, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_LabelThree = lv_label_create(ui_twelveButtonFOB_ButtonThree);
    lv_obj_set_width(ui_twelveButtonFOB_LabelThree, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_twelveButtonFOB_LabelThree, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_twelveButtonFOB_LabelThree, LV_ALIGN_CENTER);
    lv_label_set_text(ui_twelveButtonFOB_LabelThree, "3");
    lv_obj_set_style_text_color(ui_twelveButtonFOB_LabelThree, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_twelveButtonFOB_LabelThree, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_ButtonFour = lv_btn_create(ui_twelveButtonFOB);
    lv_obj_set_width(ui_twelveButtonFOB_ButtonFour, 65);
    lv_obj_set_height(ui_twelveButtonFOB_ButtonFour, 70);
    lv_obj_set_x(ui_twelveButtonFOB_ButtonFour, 120);
    lv_obj_set_y(ui_twelveButtonFOB_ButtonFour, -80);
    lv_obj_set_align(ui_twelveButtonFOB_ButtonFour, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_twelveButtonFOB_ButtonFour, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_twelveButtonFOB_ButtonFour, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_twelveButtonFOB_ButtonFour, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_twelveButtonFOB_ButtonFour, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_LabelFour = lv_label_create(ui_twelveButtonFOB_ButtonFour);
    lv_obj_set_width(ui_twelveButtonFOB_LabelFour, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_twelveButtonFOB_LabelFour, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_twelveButtonFOB_LabelFour, LV_ALIGN_CENTER);
    lv_label_set_text(ui_twelveButtonFOB_LabelFour, "4");
    lv_obj_set_style_text_color(ui_twelveButtonFOB_LabelFour, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_twelveButtonFOB_LabelFour, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_ButtonFive = lv_btn_create(ui_twelveButtonFOB);
    lv_obj_set_width(ui_twelveButtonFOB_ButtonFive, 65);
    lv_obj_set_height(ui_twelveButtonFOB_ButtonFive, 70);
    lv_obj_set_x(ui_twelveButtonFOB_ButtonFive, -84);
    lv_obj_set_y(ui_twelveButtonFOB_ButtonFive, 0);
    lv_obj_set_align(ui_twelveButtonFOB_ButtonFive, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_twelveButtonFOB_ButtonFive, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_twelveButtonFOB_ButtonFive, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_twelveButtonFOB_ButtonFive, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_twelveButtonFOB_ButtonFive, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_LabelFive = lv_label_create(ui_twelveButtonFOB_ButtonFive);
    lv_obj_set_width(ui_twelveButtonFOB_LabelFive, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_twelveButtonFOB_LabelFive, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_twelveButtonFOB_LabelFive, LV_ALIGN_CENTER);
    lv_label_set_text(ui_twelveButtonFOB_LabelFive, "5");
    lv_obj_set_style_text_color(ui_twelveButtonFOB_LabelFive, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_twelveButtonFOB_LabelFive, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_ButtonSix = lv_btn_create(ui_twelveButtonFOB);
    lv_obj_set_width(ui_twelveButtonFOB_ButtonSix, 65);
    lv_obj_set_height(ui_twelveButtonFOB_ButtonSix, 70);
    lv_obj_set_x(ui_twelveButtonFOB_ButtonSix, -16);
    lv_obj_set_y(ui_twelveButtonFOB_ButtonSix, 0);
    lv_obj_set_align(ui_twelveButtonFOB_ButtonSix, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_twelveButtonFOB_ButtonSix, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_twelveButtonFOB_ButtonSix, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_twelveButtonFOB_ButtonSix, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_twelveButtonFOB_ButtonSix, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_LabelSix = lv_label_create(ui_twelveButtonFOB_ButtonSix);
    lv_obj_set_width(ui_twelveButtonFOB_LabelSix, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_twelveButtonFOB_LabelSix, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_twelveButtonFOB_LabelSix, LV_ALIGN_CENTER);
    lv_label_set_text(ui_twelveButtonFOB_LabelSix, "6");
    lv_obj_set_style_text_color(ui_twelveButtonFOB_LabelSix, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_twelveButtonFOB_LabelSix, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_ButtonSeven = lv_btn_create(ui_twelveButtonFOB);
    lv_obj_set_width(ui_twelveButtonFOB_ButtonSeven, 65);
    lv_obj_set_height(ui_twelveButtonFOB_ButtonSeven, 70);
    lv_obj_set_x(ui_twelveButtonFOB_ButtonSeven, 52);
    lv_obj_set_y(ui_twelveButtonFOB_ButtonSeven, 0);
    lv_obj_set_align(ui_twelveButtonFOB_ButtonSeven, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_twelveButtonFOB_ButtonSeven, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_twelveButtonFOB_ButtonSeven, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_twelveButtonFOB_ButtonSeven, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_twelveButtonFOB_ButtonSeven, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_LabelSeven = lv_label_create(ui_twelveButtonFOB_ButtonSeven);
    lv_obj_set_width(ui_twelveButtonFOB_LabelSeven, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_twelveButtonFOB_LabelSeven, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_twelveButtonFOB_LabelSeven, LV_ALIGN_CENTER);
    lv_label_set_text(ui_twelveButtonFOB_LabelSeven, "7");
    lv_obj_set_style_text_color(ui_twelveButtonFOB_LabelSeven, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_twelveButtonFOB_LabelSeven, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_ButtonEight = lv_btn_create(ui_twelveButtonFOB);
    lv_obj_set_width(ui_twelveButtonFOB_ButtonEight, 65);
    lv_obj_set_height(ui_twelveButtonFOB_ButtonEight, 70);
    lv_obj_set_x(ui_twelveButtonFOB_ButtonEight, 120);
    lv_obj_set_y(ui_twelveButtonFOB_ButtonEight, 0);
    lv_obj_set_align(ui_twelveButtonFOB_ButtonEight, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_twelveButtonFOB_ButtonEight, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_twelveButtonFOB_ButtonEight, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_twelveButtonFOB_ButtonEight, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_twelveButtonFOB_ButtonEight, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_LabelEight = lv_label_create(ui_twelveButtonFOB_ButtonEight);
    lv_obj_set_width(ui_twelveButtonFOB_LabelEight, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_twelveButtonFOB_LabelEight, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_twelveButtonFOB_LabelEight, LV_ALIGN_CENTER);
    lv_label_set_text(ui_twelveButtonFOB_LabelEight, "8");
    lv_obj_set_style_text_color(ui_twelveButtonFOB_LabelEight, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_twelveButtonFOB_LabelEight, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_ButtonNine = lv_btn_create(ui_twelveButtonFOB);
    lv_obj_set_width(ui_twelveButtonFOB_ButtonNine, 65);
    lv_obj_set_height(ui_twelveButtonFOB_ButtonNine, 70);
    lv_obj_set_x(ui_twelveButtonFOB_ButtonNine, -84);
    lv_obj_set_y(ui_twelveButtonFOB_ButtonNine, 80);
    lv_obj_set_align(ui_twelveButtonFOB_ButtonNine, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_twelveButtonFOB_ButtonNine, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_twelveButtonFOB_ButtonNine, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_twelveButtonFOB_ButtonNine, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_twelveButtonFOB_ButtonNine, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_LabelNine = lv_label_create(ui_twelveButtonFOB_ButtonNine);
    lv_obj_set_width(ui_twelveButtonFOB_LabelNine, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_twelveButtonFOB_LabelNine, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_twelveButtonFOB_LabelNine, LV_ALIGN_CENTER);
    lv_label_set_text(ui_twelveButtonFOB_LabelNine, "9");
    lv_obj_set_style_text_color(ui_twelveButtonFOB_LabelNine, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_twelveButtonFOB_LabelNine, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_ButtonTen = lv_btn_create(ui_twelveButtonFOB);
    lv_obj_set_width(ui_twelveButtonFOB_ButtonTen, 65);
    lv_obj_set_height(ui_twelveButtonFOB_ButtonTen, 70);
    lv_obj_set_x(ui_twelveButtonFOB_ButtonTen, -16);
    lv_obj_set_y(ui_twelveButtonFOB_ButtonTen, 80);
    lv_obj_set_align(ui_twelveButtonFOB_ButtonTen, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_twelveButtonFOB_ButtonTen, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_twelveButtonFOB_ButtonTen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_twelveButtonFOB_ButtonTen, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_twelveButtonFOB_ButtonTen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_LabelTen = lv_label_create(ui_twelveButtonFOB_ButtonTen);
    lv_obj_set_width(ui_twelveButtonFOB_LabelTen, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_twelveButtonFOB_LabelTen, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_twelveButtonFOB_LabelTen, LV_ALIGN_CENTER);
    lv_label_set_text(ui_twelveButtonFOB_LabelTen, "10");
    lv_obj_set_style_text_color(ui_twelveButtonFOB_LabelTen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_twelveButtonFOB_LabelTen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_ButtonEleven = lv_btn_create(ui_twelveButtonFOB);
    lv_obj_set_width(ui_twelveButtonFOB_ButtonEleven, 65);
    lv_obj_set_height(ui_twelveButtonFOB_ButtonEleven, 70);
    lv_obj_set_x(ui_twelveButtonFOB_ButtonEleven, 52);
    lv_obj_set_y(ui_twelveButtonFOB_ButtonEleven, 80);
    lv_obj_set_align(ui_twelveButtonFOB_ButtonEleven, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_twelveButtonFOB_ButtonEleven, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_twelveButtonFOB_ButtonEleven, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_twelveButtonFOB_ButtonEleven, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_twelveButtonFOB_ButtonEleven, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_LabelEleven = lv_label_create(ui_twelveButtonFOB_ButtonEleven);
    lv_obj_set_width(ui_twelveButtonFOB_LabelEleven, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_twelveButtonFOB_LabelEleven, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_twelveButtonFOB_LabelEleven, LV_ALIGN_CENTER);
    lv_label_set_text(ui_twelveButtonFOB_LabelEleven, "11");
    lv_obj_set_style_text_color(ui_twelveButtonFOB_LabelEleven, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_twelveButtonFOB_LabelEleven, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_ButtonTwleve = lv_btn_create(ui_twelveButtonFOB);
    lv_obj_set_width(ui_twelveButtonFOB_ButtonTwleve, 65);
    lv_obj_set_height(ui_twelveButtonFOB_ButtonTwleve, 70);
    lv_obj_set_x(ui_twelveButtonFOB_ButtonTwleve, 120);
    lv_obj_set_y(ui_twelveButtonFOB_ButtonTwleve, 80);
    lv_obj_set_align(ui_twelveButtonFOB_ButtonTwleve, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_twelveButtonFOB_ButtonTwleve, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_twelveButtonFOB_ButtonTwleve, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_twelveButtonFOB_ButtonTwleve, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_twelveButtonFOB_ButtonTwleve, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twelveButtonFOB_LabelTwleve = lv_label_create(ui_twelveButtonFOB_ButtonTwleve);
    lv_obj_set_width(ui_twelveButtonFOB_LabelTwleve, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_twelveButtonFOB_LabelTwleve, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_twelveButtonFOB_LabelTwleve, LV_ALIGN_CENTER);
    lv_label_set_text(ui_twelveButtonFOB_LabelTwleve, "12");
    lv_obj_set_style_text_color(ui_twelveButtonFOB_LabelTwleve, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_twelveButtonFOB_LabelTwleve, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_SplashScreen_ButtonBack1, ui_event_SplashScreen_ButtonBack1, LV_EVENT_ALL, NULL);

}
void ui_MainScreen_screen_init(void)
{
    ui_MainScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_MainScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_MainScreen, lv_color_hex(0x0E4613), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MainScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MainScreen_Dropdown1 = lv_dropdown_create(ui_MainScreen);
    lv_dropdown_set_options(ui_MainScreen_Dropdown1,
                            "3 Button FOB\n12 Button FOB\nColorwheel\nKeyboard\nColor Sliders\nChart");
    lv_dropdown_set_text(ui_MainScreen_Dropdown1, "Choose demo");
    lv_obj_set_width(ui_MainScreen_Dropdown1, 209);
    lv_obj_set_height(ui_MainScreen_Dropdown1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MainScreen_Dropdown1, 4);
    lv_obj_set_y(ui_MainScreen_Dropdown1, -51);
    lv_obj_set_align(ui_MainScreen_Dropdown1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MainScreen_Dropdown1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags

    lv_obj_add_event_cb(ui_MainScreen_Dropdown1, ui_event_MainScreen_Dropdown1, LV_EVENT_ALL, NULL);

}
void ui_colorwheel_screen_init(void)
{
    ui_colorwheel = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_colorwheel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_colorwheel, lv_color_hex(0x0E4613), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_colorwheel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SplashScreen_ButtonBack2 = lv_btn_create(ui_colorwheel);
    lv_obj_set_width(ui_SplashScreen_ButtonBack2, 50);
    lv_obj_set_height(ui_SplashScreen_ButtonBack2, 50);
    lv_obj_set_x(ui_SplashScreen_ButtonBack2, -130);
    lv_obj_set_y(ui_SplashScreen_ButtonBack2, -90);
    lv_obj_set_align(ui_SplashScreen_ButtonBack2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SplashScreen_ButtonBack2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_SplashScreen_ButtonBack2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_SplashScreen_ButtonBack2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SplashScreen_ButtonBack2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_LabelBack2 = lv_label_create(ui_SplashScreen_ButtonBack2);
    lv_obj_set_width(ui_Screen1_LabelBack2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_LabelBack2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen1_LabelBack2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_LabelBack2, "Back");
    lv_obj_set_style_text_color(ui_Screen1_LabelBack2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_LabelBack2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_colorwheel_Colorwheel1 = lv_colorwheel_create(ui_colorwheel, true);
    lv_obj_set_width(ui_colorwheel_Colorwheel1, 200);
    lv_obj_set_height(ui_colorwheel_Colorwheel1, 200);
    lv_obj_set_align(ui_colorwheel_Colorwheel1, LV_ALIGN_CENTER);

    ui_colorwheel_Image2 = lv_img_create(ui_colorwheel);
    lv_img_set_src(ui_colorwheel_Image2, &ui_img_222593973);
    lv_obj_set_width(ui_colorwheel_Image2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_colorwheel_Image2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_colorwheel_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_colorwheel_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_colorwheel_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_colorwheel_Image2, 127);

    lv_obj_add_event_cb(ui_SplashScreen_ButtonBack2, ui_event_SplashScreen_ButtonBack2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_colorwheel_Colorwheel1, ui_event_colorwheel_Colorwheel1, LV_EVENT_ALL, NULL);

}
void ui_keyboard_screen_init(void)
{
    ui_keyboard = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_keyboard, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_keyboard, lv_color_hex(0x0E4613), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_keyboard, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SplashScreen_ButtonBack3 = lv_btn_create(ui_keyboard);
    lv_obj_set_width(ui_SplashScreen_ButtonBack3, 50);
    lv_obj_set_height(ui_SplashScreen_ButtonBack3, 50);
    lv_obj_set_x(ui_SplashScreen_ButtonBack3, -130);
    lv_obj_set_y(ui_SplashScreen_ButtonBack3, -90);
    lv_obj_set_align(ui_SplashScreen_ButtonBack3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SplashScreen_ButtonBack3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_SplashScreen_ButtonBack3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_SplashScreen_ButtonBack3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SplashScreen_ButtonBack3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_LabelBack3 = lv_label_create(ui_SplashScreen_ButtonBack3);
    lv_obj_set_width(ui_Screen1_LabelBack3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_LabelBack3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen1_LabelBack3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_LabelBack3, "Back");
    lv_obj_set_style_text_color(ui_Screen1_LabelBack3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_LabelBack3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_keyboard_TextArea1 = lv_textarea_create(ui_keyboard);
    lv_obj_set_width(ui_keyboard_TextArea1, 225);
    lv_obj_set_height(ui_keyboard_TextArea1, 92);
    lv_obj_set_x(ui_keyboard_TextArea1, 27);
    lv_obj_set_y(ui_keyboard_TextArea1, -60);
    lv_obj_set_align(ui_keyboard_TextArea1, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_keyboard_TextArea1, "Placeholder...");

    ui_keyboard_Keyboard1 = lv_keyboard_create(ui_keyboard);
    lv_obj_set_width(ui_keyboard_Keyboard1, 320);
    lv_obj_set_height(ui_keyboard_Keyboard1, 120);
    lv_obj_set_x(ui_keyboard_Keyboard1, 0);
    lv_obj_set_y(ui_keyboard_Keyboard1, 60);
    lv_obj_set_align(ui_keyboard_Keyboard1, LV_ALIGN_CENTER);

    lv_obj_add_event_cb(ui_SplashScreen_ButtonBack3, ui_event_SplashScreen_ButtonBack3, LV_EVENT_ALL, NULL);
    lv_keyboard_set_textarea(ui_keyboard_Keyboard1, ui_keyboard_TextArea1);

}
void ui_colorsliders_screen_init(void)
{
    ui_colorsliders = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_colorsliders, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_colorsliders, lv_color_hex(0x0E4613), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_colorsliders, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_colorsliders_SliderRed = lv_slider_create(ui_colorsliders);
    lv_obj_set_width(ui_colorsliders_SliderRed, 273);
    lv_obj_set_height(ui_colorsliders_SliderRed, 10);
    lv_obj_set_x(ui_colorsliders_SliderRed, 0);
    lv_obj_set_y(ui_colorsliders_SliderRed, -33);
    lv_obj_set_align(ui_colorsliders_SliderRed, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_colorsliders_SliderRed, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_colorsliders_SliderRed, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_colorsliders_SliderRed, lv_color_hex(0xFF0000), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_colorsliders_SliderRed, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_colorsliders_SliderRed, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_colorsliders_SliderRed, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_colorsliders_SliderGreen = lv_slider_create(ui_colorsliders);
    lv_obj_set_width(ui_colorsliders_SliderGreen, 276);
    lv_obj_set_height(ui_colorsliders_SliderGreen, 10);
    lv_obj_set_x(ui_colorsliders_SliderGreen, 0);
    lv_obj_set_y(ui_colorsliders_SliderGreen, 24);
    lv_obj_set_align(ui_colorsliders_SliderGreen, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_colorsliders_SliderGreen, lv_color_hex(0x00FF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_colorsliders_SliderGreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_colorsliders_SliderGreen, lv_color_hex(0x00FF00), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_colorsliders_SliderGreen, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_colorsliders_SliderGreen, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_colorsliders_SliderGreen, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_colorsliders_SliderBlue = lv_slider_create(ui_colorsliders);
    lv_obj_set_width(ui_colorsliders_SliderBlue, 273);
    lv_obj_set_height(ui_colorsliders_SliderBlue, 10);
    lv_obj_set_x(ui_colorsliders_SliderBlue, 0);
    lv_obj_set_y(ui_colorsliders_SliderBlue, 82);
    lv_obj_set_align(ui_colorsliders_SliderBlue, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_colorsliders_SliderBlue, lv_color_hex(0x0000FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_colorsliders_SliderBlue, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_colorsliders_SliderBlue, lv_color_hex(0x0000FF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_colorsliders_SliderBlue, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_colorsliders_SliderBlue, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_colorsliders_SliderBlue, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_SplashScreen_ButtonBack4 = lv_btn_create(ui_colorsliders);
    lv_obj_set_width(ui_SplashScreen_ButtonBack4, 50);
    lv_obj_set_height(ui_SplashScreen_ButtonBack4, 50);
    lv_obj_set_x(ui_SplashScreen_ButtonBack4, -130);
    lv_obj_set_y(ui_SplashScreen_ButtonBack4, -90);
    lv_obj_set_align(ui_SplashScreen_ButtonBack4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SplashScreen_ButtonBack4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_SplashScreen_ButtonBack4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_SplashScreen_ButtonBack4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SplashScreen_ButtonBack4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_LabelBack4 = lv_label_create(ui_SplashScreen_ButtonBack4);
    lv_obj_set_width(ui_Screen1_LabelBack4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_LabelBack4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen1_LabelBack4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_LabelBack4, "Back");
    lv_obj_set_style_text_color(ui_Screen1_LabelBack4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_LabelBack4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_colorsliders_SliderRed, ui_event_colorsliders_SliderRed, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_colorsliders_SliderGreen, ui_event_colorsliders_SliderGreen, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_colorsliders_SliderBlue, ui_event_colorsliders_SliderBlue, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SplashScreen_ButtonBack4, ui_event_SplashScreen_ButtonBack4, LV_EVENT_ALL, NULL);

}
void ui_chart_screen_init(void)
{
    ui_chart = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_chart, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_chart, lv_color_hex(0x0E4613), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_chart, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SplashScreen_ButtonBack5 = lv_btn_create(ui_chart);
    lv_obj_set_width(ui_SplashScreen_ButtonBack5, 50);
    lv_obj_set_height(ui_SplashScreen_ButtonBack5, 50);
    lv_obj_set_x(ui_SplashScreen_ButtonBack5, -130);
    lv_obj_set_y(ui_SplashScreen_ButtonBack5, -90);
    lv_obj_set_align(ui_SplashScreen_ButtonBack5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SplashScreen_ButtonBack5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_SplashScreen_ButtonBack5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_SplashScreen_ButtonBack5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SplashScreen_ButtonBack5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_LabelBack5 = lv_label_create(ui_SplashScreen_ButtonBack5);
    lv_obj_set_width(ui_Screen1_LabelBack5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_LabelBack5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen1_LabelBack5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_LabelBack5, "Back");
    lv_obj_set_style_text_color(ui_Screen1_LabelBack5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_LabelBack5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_chart_Chart1 = lv_chart_create(ui_chart);
    lv_obj_set_width(ui_chart_Chart1, 299);
    lv_obj_set_height(ui_chart_Chart1, 152);
    lv_obj_set_x(ui_chart_Chart1, 0);
    lv_obj_set_y(ui_chart_Chart1, 34);
    lv_obj_set_align(ui_chart_Chart1, LV_ALIGN_CENTER);

    lv_obj_add_event_cb(ui_SplashScreen_ButtonBack5, ui_event_SplashScreen_ButtonBack5, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_SplashScreen_screen_init();
    ui_threeButtonFOB_screen_init();
    ui_twelveButtonFOB_screen_init();
    ui_MainScreen_screen_init();
    ui_colorwheel_screen_init();
    ui_keyboard_screen_init();
    ui_colorsliders_screen_init();
    ui_chart_screen_init();
    lv_disp_load_scr(ui_SplashScreen);
}
