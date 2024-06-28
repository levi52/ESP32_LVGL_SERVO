#include "network.h"

// WIFI
const char *ssid     = "2号楼北楼浴室"; // iPhone Mate60 Pro
const char *password = "hgd12345678."; // dashataranlove1.
bool wifiFlag = 0; // 是否连接Wi-Fi 1是0否
bool wifiScanFlag = 0; // 是否扫描Wi-Fi 1是0否
bool wifiSelectFlag = 1; // 是否选择Wi-Fi 1是0否
bool firstFlag = 1;
String wifi_name;
String wifi_names; // 扫描Wi-Fi名称
String wifi_list[10];

/**
 * @brief 初始化Wi-Fi连接
*/
void wifi_init(void)
{
    WiFi.begin(ssid, password);
    int j=0;
    while ( WiFi.status() != WL_CONNECTED ) {
        delay ( 500 );
        Serial.print ( "." );
        j++;
        if(j >= 20)
        {
            Serial.println("error");
            wifiFlag = 0;
            WiFi.disconnect();
            break;
        }
    }
    if(WiFi.status() == WL_CONNECTED)
    {
        Serial.println("WiFi Connected!");
        Serial.println(WiFi.localIP());
        wifiFlag = 1;
    }
}

/**
 * @brief 检查网络
*/
void wifi_check(void)
{
    lv_obj_add_flag(ui_load, LV_OBJ_FLAG_HIDDEN);
    if(firstFlag)
    {
        // wifi_init(); // wifi初始化
        wifi_scan();
        firstFlag = 0;
    }
	if(WiFi.status() != WL_CONNECTED && wifiSelectFlag)
	{
		WiFi.disconnect();
        wifi_scan();
        wifiSelectFlag = 0;
	}
	else
	{
		// wifiFlag = 1;
	}
}

/**
 * @brief 扫描网络
*/
void wifi_scan(void)//lv_event_t * e
{
	// Your code here
	// lv_obj_clear_flag(ui_load, LV_OBJ_FLAG_HIDDEN);
	// vTaskDelay(2000);
	Serial.println("scan wifi");
	int n = WiFi.scanNetworks();
	Serial.println("done");
	if(n == 0)
	{
		lv_dropdown_set_options(ui_wifilist, "No network available\n");
	}
	else
	{
		for(int i = 0; i < n; i++)
		{
			wifi_name += (WiFi.SSID(i) + "\n");
            if(i<10) wifi_list[i] = WiFi.SSID(i);
		}
        wifi_names = wifi_name;
        wifi_name = "";
		Serial.println(wifi_names);
        for(int i = 0; i < 10; i++)
        {
            Serial.println(wifi_list[i]);
        }
		lv_dropdown_set_options(ui_wifilist, wifi_names.c_str());
	}
	wifiScanFlag = 1;
    // wifiSelectFlag = 0;
	// vTaskDelay(2000);
	// lv_obj_set_style_opa(ui_load, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	// lv_obj_add_flag(ui_load, LV_OBJ_FLAG_HIDDEN);
}

/**
 * @brief WIFI连接
*/
void wifi_connect(void)
{
	// Your code here
	char nssid[32];
	lv_dropdown_get_selected_str(ui_wifilist, nssid, sizeof(nssid));
	password = lv_textarea_get_text(ui_pwdarea);
	Serial.println(nssid);
	Serial.println(password);
	WiFi.begin(nssid, password);
    int j=0;
    while ( WiFi.status() != WL_CONNECTED ) {
        delay ( 500 );
        Serial.print ( "." );
        j++;
        if(j >= 10)
        {
            Serial.println("error");
            wifiFlag = 0;
			lv_obj_set_style_text_color(ui_wifilist, lv_color_hex(0xfa4f11), LV_PART_MAIN | LV_STATE_DEFAULT);
            break;
        }
    }
	if(WiFi.status() == WL_CONNECTED)
    {
        Serial.println("WiFi Connected!");
		Serial.println(WiFi.localIP());
		lv_obj_set_style_text_color(ui_wifilist, lv_color_hex(0x00CA83), LV_PART_MAIN | LV_STATE_DEFAULT);
		wifiFlag = 1;
        // lv_dropdown_set_selected(ui_wifilist, );
    }
    wifiSelectFlag = 1;
    lv_obj_clear_flag(ui_load, LV_OBJ_FLAG_HIDDEN);
    Serial.println("spinner");
}