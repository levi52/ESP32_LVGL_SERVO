#ifndef _NETWORK_H
#define _NETWORK_H

#include <WiFi.h>
#include <Arduino.h>

// UI
#include "./lvgl_gui/ui.h"

void wifi_init(void);
void wifi_check(void);
void wifi_scan(void); 
void wifi_connect(void);

#endif