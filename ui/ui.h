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
void ui_event_SplashScreen_Button5(lv_event_t * e);
extern lv_obj_t * ui_SplashScreen_Button5;
extern lv_obj_t * ui_SplashScreen_Label5;
extern lv_obj_t * ui_threeButtonFOB;
void ui_event_SplashScreen_Button2(lv_event_t * e);
extern lv_obj_t * ui_SplashScreen_Button2;
extern lv_obj_t * ui_Screen1_Label2;
void ui_event_Screen1_Button3(lv_event_t * e);
extern lv_obj_t * ui_Screen1_Button3;
extern lv_obj_t * ui_Screen1_Label3;
void ui_event_SplashScreen_ButtonBack(lv_event_t * e);
extern lv_obj_t * ui_SplashScreen_ButtonBack;
extern lv_obj_t * ui_Screen1_LabelBack;
extern lv_obj_t * ui_twelveButtonFOB;
void ui_event_SplashScreen_ButtonBack1(lv_event_t * e);
extern lv_obj_t * ui_SplashScreen_ButtonBack1;
extern lv_obj_t * ui_Screen1_LabelBack1;
extern lv_obj_t * ui_twelveButtonFOB_ButtonOne;
extern lv_obj_t * ui_twelveButtonFOB_LabelOne;
extern lv_obj_t * ui_twelveButtonFOB_ButtonTwo;
extern lv_obj_t * ui_twelveButtonFOB_LabelTwo;
extern lv_obj_t * ui_twelveButtonFOB_ButtonThree;
extern lv_obj_t * ui_twelveButtonFOB_LabelThree;
extern lv_obj_t * ui_twelveButtonFOB_ButtonFour;
extern lv_obj_t * ui_twelveButtonFOB_LabelFour;
extern lv_obj_t * ui_twelveButtonFOB_ButtonFive;
extern lv_obj_t * ui_twelveButtonFOB_LabelFive;
extern lv_obj_t * ui_twelveButtonFOB_ButtonSix;
extern lv_obj_t * ui_twelveButtonFOB_LabelSix;
extern lv_obj_t * ui_twelveButtonFOB_ButtonSeven;
extern lv_obj_t * ui_twelveButtonFOB_LabelSeven;
extern lv_obj_t * ui_twelveButtonFOB_ButtonEight;
extern lv_obj_t * ui_twelveButtonFOB_LabelEight;
extern lv_obj_t * ui_twelveButtonFOB_ButtonNine;
extern lv_obj_t * ui_twelveButtonFOB_LabelNine;
extern lv_obj_t * ui_twelveButtonFOB_ButtonTen;
extern lv_obj_t * ui_twelveButtonFOB_LabelTen;
extern lv_obj_t * ui_twelveButtonFOB_ButtonEleven;
extern lv_obj_t * ui_twelveButtonFOB_LabelEleven;
extern lv_obj_t * ui_twelveButtonFOB_ButtonTwleve;
extern lv_obj_t * ui_twelveButtonFOB_LabelTwleve;
extern lv_obj_t * ui_MainScreen;
void ui_event_MainScreen_Dropdown1(lv_event_t * e);
extern lv_obj_t * ui_MainScreen_Dropdown1;
extern lv_obj_t * ui_colorwheel;
void ui_event_SplashScreen_ButtonBack2(lv_event_t * e);
extern lv_obj_t * ui_SplashScreen_ButtonBack2;
extern lv_obj_t * ui_Screen1_LabelBack2;
void ui_event_colorwheel_Colorwheel1(lv_event_t * e);
extern lv_obj_t * ui_colorwheel_Colorwheel1;
extern lv_obj_t * ui_colorwheel_Image2;
extern lv_obj_t * ui_keyboard;
void ui_event_SplashScreen_ButtonBack3(lv_event_t * e);
extern lv_obj_t * ui_SplashScreen_ButtonBack3;
extern lv_obj_t * ui_Screen1_LabelBack3;
extern lv_obj_t * ui_keyboard_TextArea1;
extern lv_obj_t * ui_keyboard_Keyboard1;
extern lv_obj_t * ui_colorsliders;
void ui_event_colorsliders_SliderRed(lv_event_t * e);
extern lv_obj_t * ui_colorsliders_SliderRed;
void ui_event_colorsliders_SliderGreen(lv_event_t * e);
extern lv_obj_t * ui_colorsliders_SliderGreen;
void ui_event_colorsliders_SliderBlue(lv_event_t * e);
extern lv_obj_t * ui_colorsliders_SliderBlue;
void ui_event_SplashScreen_ButtonBack4(lv_event_t * e);
extern lv_obj_t * ui_SplashScreen_ButtonBack4;
extern lv_obj_t * ui_Screen1_LabelBack4;
extern lv_obj_t * ui_chart;
void ui_event_SplashScreen_ButtonBack5(lv_event_t * e);
extern lv_obj_t * ui_SplashScreen_ButtonBack5;
extern lv_obj_t * ui_Screen1_LabelBack5;
extern lv_obj_t * ui_chart_Chart1;

void upPressed(lv_event_t * e);
void upReleased(lv_event_t * e);
void downPressed(lv_event_t * e);
void downReleased(lv_event_t * e);
void gotoDemo(lv_event_t * e);
void clearRGB(lv_event_t * e);
void updateColorwheel(lv_event_t * e);
void updateRGB_Red(lv_event_t * e);
void updateRGB_Green(lv_event_t * e);
void updateRGB_Blue(lv_event_t * e);
void clearRGB(lv_event_t * e);

LV_IMG_DECLARE(ui_img_222593973);    // assets\Logo-92.png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
