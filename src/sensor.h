#ifndef _SENSOR_H
#define _SENSOR_H

#include <Arduino.h>
#include <AHT20.h>
#include "Seeed_BMP280.h"

// UI
#include "./lvgl_gui/ui.h"

void sensor_aht20_init(void);
void sensor_aht20_data(void);
void sensor_bmp280_init(void);
void sensor_bmp280_data(void);

#endif