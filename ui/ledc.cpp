

#ifndef LEDC_CPP_
#define LEDC_CPP_

#include "driver/ledc.h"
#include "esp_err.h"


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
#endif