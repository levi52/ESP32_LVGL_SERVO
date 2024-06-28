#ifndef _SCREEN_H
#define _SCREEN_H

#include <Arduino.h>
#include <bb_captouch.h>
#include <TFT_eSPI.h> 
#include <SPI.h>

// UI
#include "./lvgl_gui/ui.h"

void touch_init(void);
void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p );
void my_touchpad_read( lv_indev_drv_t * indev_driver, lv_indev_data_t * data );
void screen_init(void);

#endif