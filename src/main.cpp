#include <Arduino.h>
#include <lvgl.h>
#include <freertos/FreeRTOS.h>

// SCREEN
#include "./screen.h"

// UI
#include "./lvgl_gui/ui.h"

// SENSOR
#include "./sensor.h"

// WEATHER
#include "./weather.h"

// WIFI
#include "./network.h"

// RTC
#include "./rtc.h"

// 任务
void lvgl_task(void *pt);
void wifi_task(void *pt);
void time_task(void *pt);
void weather_task(void *pt);
void aht20_task(void *pt);
void bmp280_task(void *pt);


void setup()
{
    Serial.begin( 115200 ); // 串口初始化
    lv_init();  // lvgl初始化

    screen_init(); // 屏幕初始化
    ui_init();  // UI初始化
    touch_init(); // 触摸初始化
    sensor_aht20_init(); // aht20初始化
    sensor_bmp280_init(); // bmp280初始化
    rtc_init();
    wifi_init(); // wifi初始化
    time_init(); // ntp初始化

    xTaskCreatePinnedToCore(lvgl_task, "lvgl display", 1024 * 15, NULL, 2, NULL, 1);
    xTaskCreatePinnedToCore(time_task, "time update", 1024 * 2, NULL, 2, NULL, 0);
    xTaskCreatePinnedToCore(weather_task, "weather update", 1024 * 12, NULL, 2, NULL, 0);
    xTaskCreatePinnedToCore(wifi_task, "wifi update", 1024 * 3, NULL, 2, NULL, 0);
    xTaskCreatePinnedToCore(aht20_task, "aht update", 1024 * 3, NULL, 1, NULL, 0);
    xTaskCreatePinnedToCore(bmp280_task, "bmp update", 1024 * 3, NULL, 1, NULL, 0);
}

void loop()
{
    
}

void lvgl_task(void *pt)
{
    while(1)
    {
        lv_timer_handler(); /* let the GUI do its work */
        vTaskDelay(5);
    }
}

void wifi_task(void *pt)
{
    while(1)
    {
        wifi_check();
        vTaskDelay(1000 * 60);
    }
}

void time_task(void *pt)
{
    while(1)
    {
        if(WiFi.status() == WL_CONNECTED)
        {
            get_time();
        }
        vTaskDelay(1000);
    }
}

void weather_task(void *pt)
{
    while(1)
    {
        if(WiFi.status() == WL_CONNECTED)
        {
            get_weather_now();
            get_weather_future();
            get_air();
        }
        vTaskDelay(1000*60*5);
    }
}

void aht20_task(void *pt)
{
    while(1)
    {
        sensor_aht20_data();
        vTaskDelay(1000 * 60);
    }
}

void bmp280_task(void *pt)
{
    while(1)
    {
        sensor_bmp280_data();
        vTaskDelay(1000 * 60);
    }
}