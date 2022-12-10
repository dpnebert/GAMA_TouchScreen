// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: GAMA_Touchscreen

#ifndef _GAMA_TOUCHSCREEN_UI_H
#define _GAMA_TOUCHSCREEN_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

extern lv_obj_t * ui_SplashScreen;
extern lv_obj_t * ui_SplashScreen_Image1;
void ui_event_SplashScreen_Button1(lv_event_t * e);
extern lv_obj_t * ui_SplashScreen_Button1;
extern lv_obj_t * ui_SplashScreen_Label1;
extern lv_obj_t * ui_Screen1;
void ui_event_SplashScreen_Button2(lv_event_t * e);
extern lv_obj_t * ui_SplashScreen_Button2;
extern lv_obj_t * ui_Screen1_Label2;
void ui_event_Screen1_Button3(lv_event_t * e);
extern lv_obj_t * ui_Screen1_Button3;
extern lv_obj_t * ui_Screen1_Label3;

void upPressed(lv_event_t * e);
void upReleased(lv_event_t * e);
void downPressed(lv_event_t * e);
void downReleased(lv_event_t * e);

LV_IMG_DECLARE(ui_img_222593973);    // assets\Logo-92.png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
