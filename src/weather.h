#ifndef _WEATHER_H
#define _WEATHER_H

#include <Arduino.h>
#include <ArduinoJson.h>
#include <HTTPClient.h>
#include <WiFiUdp.h>
#include <NTPClient.h>
#include "ArduinoZlib.h"

// UI
#include "./lvgl_gui/ui.h"

// RTC
#include "./rtc.h"

void time_init(void); // ntp
void get_time(void); // 获取当前时间
void get_weather_now(void); // 获取当前天气
void get_weather_future(void); // 获取未来天气
void get_air(void); // 获取空气质量
void set_weather_icon(lv_obj_t *obj, int icon); // 设置天气图标
String urlEncode(const String& text);

#endif