// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: GAMA_Touchscreen

#include "ui.h"
#include "ledc.cpp"

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
