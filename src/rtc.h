#ifndef _RTC_H
#define _RTC_H

#include "I2C_BM8563.h"
#include <Arduino.h>

// UI
#include "./lvgl_gui/ui.h"

void rtc_init(void);
void date_set(int8_t weekDay,int8_t month,int8_t date,int16_t year);
void time_set(int8_t hours,int8_t minutes,int8_t seconds);
void date_get(void);
void time_get(void); 

#endif