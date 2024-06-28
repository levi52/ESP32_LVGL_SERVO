// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "ui.h"
#include <Arduino.h>

#define FREQ_BLK 2000 // 频率
#define CHANNEL_BLK 0 // 通道
#define RESOLUTION_BLK 8 // 分辨率
#define BLK_PIN 46 // LED背光引脚

#define FREQ_SERVO 50 // 频率
#define CHANNEL_SERVO 2 // 通道
#define RESOLUTION_SERVO 10 // 分辨率
#define SERVO_PIN 40 // 舵机引脚

/**
 * @brief 屏幕亮度调节
*/
void set_back_brightness(lv_event_t * e)
{
	// Your code here
	uint8_t brightness;
	ledcSetup(CHANNEL_BLK, FREQ_BLK, RESOLUTION_BLK);
	ledcAttachPin(BLK_PIN, CHANNEL_BLK);
	brightness = lv_slider_get_value(lv_event_get_target(e));
	brightness = brightness >= 0 ? (brightness <= 100 ? brightness : 100) : 0;
	uint32_t duty = brightness * 2;
	ledcWrite(CHANNEL_BLK, duty);
}

void servo_degree(lv_event_t * e)
{
	// Your code here
	pinMode(SERVO_PIN, OUTPUT);
	ledcSetup(CHANNEL_SERVO, FREQ_SERVO, RESOLUTION_SERVO);
	ledcAttachPin(SERVO_PIN, CHANNEL_SERVO);
	int degree = lv_arc_get_value(ui_degreearc);
	ledcWrite(CHANNEL_SERVO, (int)(0.56 * degree + 26));
}

