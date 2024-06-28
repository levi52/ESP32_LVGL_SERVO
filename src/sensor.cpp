#include "sensor.h"

BMP280 bmp280;
AHT20 aht20;

/**
 * @brief 初始化aht20
*/
void sensor_aht20_init(void)
{
    if (aht20.begin() == false)
    {
        Serial.println("AHT20 not detected. Please check wiring. Freezing.");
        while (1);
    }
    Serial.println("AHT20 acknowledged.");
}

/**
 * @brief 获取aht20数据：温度，湿度
*/
void sensor_aht20_data(void)
{
    if (aht20.available() == true)
        {
            // 获取温湿度
            float temperature = aht20.getTemperature();
            float humidity = aht20.getHumidity();
            // 串口打印结果
            Serial.print("Temperature: ");
            Serial.print(temperature, 2);
            Serial.print(" C\t");
            Serial.print("Humidity: ");
            Serial.print(humidity, 2);
            Serial.print("% RH");
            Serial.println();
            lv_label_set_text_fmt(ui_aht20tempnum, "%.2f℃", temperature);
            lv_label_set_text_fmt(ui_aht20huminum, "%.2f%%", humidity);
        }
}

/**
 * @brief 初始化bmp280
*/
void sensor_bmp280_init(void)
{
    if(!bmp280.init()){
        Serial.println("bmp280 Device error!");
    }
    Serial.println("bmp280 acknowledged.");
}
/**
 * @brief 获取bmp280数据：温度，压强，海拔
*/
void sensor_bmp280_data(void)
{
    float pressure;
    float temp;
    float alti;
    temp = bmp280.getTemperature();
    pressure = bmp280.getPressure();
    alti = bmp280.calcAltitude(pressure);
    // 温度
    Serial.print("Temp: ");
    Serial.print(temp);
    Serial.println("C");
    // 压强
    Serial.print("Pressure: ");
    Serial.print(pressure);
    Serial.println("Pa");
    // 海拔
    Serial.print("Altitude: ");
    Serial.print(alti);
    Serial.println("m");
    Serial.println("\n");
    lv_label_set_text_fmt(ui_bmptempnum, "%.2f℃", temp);
    lv_label_set_text_fmt(ui_bmppressnum, "%.0fhPa", pressure/100);
    lv_label_set_text_fmt(ui_bmpaltnum, "%.1fm", alti);
}