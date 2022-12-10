// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: GAMA_Touchscreen

#include "ui.h"
#include "ledc.cpp"
#include <stdio.h>
#include <string.h>
//#include "esp_err.h"

void upPressed(lv_event_t * e)
{
	setChannelColor(LEDC_CHANNEL_2, 4000);
}

void upReleased(lv_event_t * e)
{
	setChannelColor(LEDC_CHANNEL_2, 0);
	//bsp_display_brightness_set(50);
}

void downPressed(lv_event_t * e)
{
	setChannelColor(LEDC_CHANNEL_0, 4000);
}

void downReleased(lv_event_t * e)
{
	setChannelColor(LEDC_CHANNEL_0, 0);
}

void gotoDemo(lv_event_t * e)
{
	
	lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * obj = lv_event_get_target(e);
	char buf[32];
	lv_dropdown_get_selected_str(obj, buf, sizeof(buf));
    switch(code) {
        case LV_EVENT_VALUE_CHANGED:
				changeScreen(buf);					
            break;
        default:
            break;
    }
}

void updateColorwheel(lv_event_t * e)
{
	lv_event_code_t code = lv_event_get_code(e);
	
    lv_obj_t * obj = lv_event_get_target(e);
	
    lv_color_t color = lv_colorwheel_get_rgb(obj);
	uint8_t red = color.ch.red;
	uint8_t blue = color.ch.blue;
	//uint8_t green = color.full - ( red + blue );
	uint8_t green = color.ch.green_h;
	

    switch(code) {
        case LV_EVENT_VALUE_CHANGED:
				updateRGB(red, green, blue);					
            break;
        default:
            break;
    }
}

void clearRGB(lv_event_t * e)
{
	updateRGB(0, 0, 0);
}

void updateRGB_Red(lv_event_t * e)
{
	lv_obj_t * slider = lv_event_get_target(e);
	int value = (int)lv_slider_get_value(slider);
	int output = (value * 8190) / 100;
	setChannelColor(LEDC_CHANNEL_0, output);
}

void updateRGB_Green(lv_event_t * e)
{
	lv_obj_t * slider = lv_event_get_target(e);
	int value = (int)lv_slider_get_value(slider);
	int output = (value * 8190) / 100;
	setChannelColor(LEDC_CHANNEL_2, output);
}

void updateRGB_Blue(lv_event_t * e)
{
	lv_obj_t * slider = lv_event_get_target(e);
	int value = (int)lv_slider_get_value(slider);
	int output = (value * 8190) / 100;
	setChannelColor(LEDC_CHANNEL_3, output);
}
