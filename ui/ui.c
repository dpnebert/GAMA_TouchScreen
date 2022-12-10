// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: GAMA_Touchscreen

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_SplashScreen;
lv_obj_t * ui_SplashScreen_Image1;
void ui_event_SplashScreen_Button1(lv_event_t * e);
lv_obj_t * ui_SplashScreen_Button1;
lv_obj_t * ui_SplashScreen_Label1;
lv_obj_t * ui_Screen1;
void ui_event_SplashScreen_Button2(lv_event_t * e);
lv_obj_t * ui_SplashScreen_Button2;
lv_obj_t * ui_Screen1_Label2;
void ui_event_Screen1_Button3(lv_event_t * e);
lv_obj_t * ui_Screen1_Button3;
lv_obj_t * ui_Screen1_Label3;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_SplashScreen_Button1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_OVER_LEFT, 500, 0);
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

    ui_SplashScreen_Button1 = lv_btn_create(ui_SplashScreen);
    lv_obj_set_width(ui_SplashScreen_Button1, 172);
    lv_obj_set_height(ui_SplashScreen_Button1, 50);
    lv_obj_set_x(ui_SplashScreen_Button1, 0);
    lv_obj_set_y(ui_SplashScreen_Button1, 55);
    lv_obj_set_align(ui_SplashScreen_Button1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SplashScreen_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_SplashScreen_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_SplashScreen_Button1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SplashScreen_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SplashScreen_Label1 = lv_label_create(ui_SplashScreen_Button1);
    lv_obj_set_width(ui_SplashScreen_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SplashScreen_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_SplashScreen_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SplashScreen_Label1, "Try 3 button FOB");
    lv_obj_set_style_text_color(ui_SplashScreen_Label1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SplashScreen_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_SplashScreen_Button1, ui_event_SplashScreen_Button1, LV_EVENT_ALL, NULL);

}
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x0E4613), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SplashScreen_Button2 = lv_btn_create(ui_Screen1);
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

    ui_Screen1_Button3 = lv_btn_create(ui_Screen1);
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

    lv_obj_add_event_cb(ui_SplashScreen_Button2, ui_event_SplashScreen_Button2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen1_Button3, ui_event_Screen1_Button3, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_SplashScreen_screen_init();
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_SplashScreen);
}
