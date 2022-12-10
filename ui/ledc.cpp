

#ifndef LEDC_CPP_
#define LEDC_CPP_

#include "driver/ledc.h"
#include "esp_err.h"
#include "ui.h"
#include "ui_helpers.h"

#define TAG "DEMO_Ledc"

#define LEDC_TIMER              LEDC_TIMER_1
#define LEDC_MODE               LEDC_LOW_SPEED_MODE
#define LEDC_OUTPUT_IO_RED      39 // Define the output GPIO
#define LEDC_CHANNEL_RED        LEDC_CHANNEL_0
#define LEDC_OUTPUT_IO_GREEN    40 // Define the output GPIO
#define LEDC_CHANNEL_GREEN      LEDC_CHANNEL_2
#define LEDC_OUTPUT_IO_BLUE     41 // Define the output GPIO
#define LEDC_CHANNEL_BLUE       LEDC_CHANNEL_3
#define LEDC_DUTY_RES           LEDC_TIMER_13_BIT // Set duty resolution to 13 bits
#define LEDC_DUTY               (4095) // Set duty to 50%. ((2 ** 13) - 1) * 50% = 4095
#define LEDC_FREQUENCY          (5000) // Frequency in Hertz. Set frequency at 5 kHz


void initLedc(void)
{
    // Prepare and then apply the LEDC PWM timer configuration
    ledc_timer_config_t ledc_timer = {
        .speed_mode       = LEDC_MODE,
        .timer_num        = LEDC_TIMER,
        .duty_resolution  = LEDC_DUTY_RES,
        .freq_hz          = LEDC_FREQUENCY,  // Set output frequency at 5 kHz
        .clk_cfg          = LEDC_AUTO_CLK
    };
    ESP_ERROR_CHECK(ledc_timer_config(&ledc_timer));

    // Prepare and then apply the LEDC PWM channel configuration
    ledc_channel_config_t ledc_channels[] = {
		{
        .speed_mode     = LEDC_MODE,
        .channel        = LEDC_CHANNEL_RED,
        .timer_sel      = LEDC_TIMER,
        .intr_type      = LEDC_INTR_DISABLE,
        .gpio_num       = LEDC_OUTPUT_IO_RED,
        .duty           = 0, // Set duty to 0%
        .hpoint         = 0
		}
		
		, {
        .speed_mode     = LEDC_MODE,
        .channel        = LEDC_CHANNEL_GREEN,
        .timer_sel      = LEDC_TIMER,
        .intr_type      = LEDC_INTR_DISABLE,
        .gpio_num       = LEDC_OUTPUT_IO_GREEN,
        .duty           = 0, // Set duty to 0%
        .hpoint         = 0
		}
		
		, {
        .speed_mode     = LEDC_MODE,
        .channel        = LEDC_CHANNEL_BLUE,
        .timer_sel      = LEDC_TIMER,
        .intr_type      = LEDC_INTR_DISABLE,
        .gpio_num       = LEDC_OUTPUT_IO_BLUE,
        .duty           = 0, // Set duty to 0%
        .hpoint         = 0
		}
		
    };
	for (uint8_t ch = 0; ch < 3; ch++) {
        ledc_channel_config(&ledc_channels[ch]);
		ledc_set_duty(LEDC_MODE, ch, 0);
		ledc_update_duty(LEDC_MODE, ch);
		vTaskDelay(10);
    }
}



void setChannelColor(uint8_t channel, uint32_t duty) {
	ESP_LOGI(TAG, "Updating channel.");
	ledc_set_duty(LEDC_MODE, channel, duty);
	ledc_update_duty(LEDC_MODE, channel);
}
void changeScreen(char* screen) {
	char threeButtonFOB[] = "3 Button FOB";
	char twelveButtonFOB[] = "12 Button FOB";
	char colorwheel[] = "Colorwheel";
	char keyboard[] = "Keyboard";
	char colorSliders[] = "Color Sliders";
	char chart[] = "Chart";
	if(strcmp(screen, threeButtonFOB) == 0) {
		_ui_screen_change(ui_threeButtonFOB, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
	} else if(strcmp(screen, twelveButtonFOB) == 0) {
		_ui_screen_change(ui_twelveButtonFOB, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
	} else if(strcmp(screen, colorwheel) == 0) {
		_ui_screen_change(ui_colorwheel, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
	} else if(strcmp(screen, keyboard) == 0) {
		_ui_screen_change(ui_keyboard, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
	} else if(strcmp(screen, colorSliders) == 0) {
		_ui_screen_change(ui_colorsliders, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
	} else if(strcmp(screen, chart) == 0) {
		
		lv_chart_set_type(ui_chart_Chart1, LV_CHART_TYPE_LINE);   /*Show lines and points too*/

		/*Add two data series*/
		lv_chart_series_t * ser1 = lv_chart_add_series(ui_chart_Chart1, lv_palette_main(LV_PALETTE_RED), LV_CHART_AXIS_PRIMARY_Y);
		lv_chart_series_t * ser2 = lv_chart_add_series(ui_chart_Chart1, lv_palette_main(LV_PALETTE_GREEN), LV_CHART_AXIS_SECONDARY_Y);

		/*Set the next points on 'ser1'*/
		lv_chart_set_next_value(ui_chart_Chart1, ser1, 10);
		lv_chart_set_next_value(ui_chart_Chart1, ser1, 10);
		lv_chart_set_next_value(ui_chart_Chart1, ser1, 10);
		lv_chart_set_next_value(ui_chart_Chart1, ser1, 10);
		lv_chart_set_next_value(ui_chart_Chart1, ser1, 10);
		lv_chart_set_next_value(ui_chart_Chart1, ser1, 10);
		lv_chart_set_next_value(ui_chart_Chart1, ser1, 10);
		lv_chart_set_next_value(ui_chart_Chart1, ser1, 30);
		lv_chart_set_next_value(ui_chart_Chart1, ser1, 70);
		lv_chart_set_next_value(ui_chart_Chart1, ser1, 90);

		/*Directly set points on 'ser2'*/
		ser2->y_points[0] = 90;
		ser2->y_points[1] = 70;
		ser2->y_points[2] = 65;
		ser2->y_points[3] = 65;
		ser2->y_points[4] = 65;
		ser2->y_points[5] = 65;
		ser2->y_points[6] = 65;
		ser2->y_points[7] = 65;
		ser2->y_points[8] = 65;
		ser2->y_points[9] = 65;

		lv_chart_refresh(ui_chart_Chart1); /*Required after direct set*/
		_ui_screen_change(ui_chart, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
	}
	
}
void updateRGB(uint8_t red, uint8_t green, uint8_t blue) {
	
	
	
	setChannelColor(LEDC_CHANNEL_RED, (red<<5));
	setChannelColor(LEDC_CHANNEL_GREEN, (green<<5));
	setChannelColor(LEDC_CHANNEL_BLUE, (blue<<5));
}
#endif