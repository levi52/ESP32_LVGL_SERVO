#include "rtc.h"

// #define BM8563_I2C_SDA 18
// #define BM8563_I2C_SCL 8

I2C_BM8563 rtc(I2C_BM8563_DEFAULT_ADDRESS, Wire);

/**
 * @brief RTC初始化
*/
void rtc_init(void)
{
    // Wire.begin(BM8563_I2C_SDA, BM8563_I2C_SCL); // 在主程序中已有Wire
    // Init RTC
    rtc.begin();
}

/**
 * @brief 设置日期
 * @param weekDay: 周
 * @param month: 月
 * @param date: 日
 * @param year: 年
*/
void date_set(int8_t weekDay, int8_t month, int8_t date, int16_t year)
{
    // Set RTC Date
    I2C_BM8563_DateTypeDef dateStruct;
    dateStruct.weekDay = weekDay;
    dateStruct.month = month;
    dateStruct.date = date;
    dateStruct.year = year;
    rtc.setDate(&dateStruct);
}

/**
 * @brief 设置时间
 * @param hours: 时
 * @param minutes: 分
 * @param seconds: 秒
*/
void time_set(int8_t hours, int8_t minutes, int8_t seconds)
{
    // Set RTC Time
    I2C_BM8563_TimeTypeDef timeStruct;
    timeStruct.hours = hours;
    timeStruct.minutes = minutes;
    timeStruct.seconds = seconds;
    rtc.setTime(&timeStruct);
}

/**
 * @brief 获取日期
*/
void date_get(void)
{
    I2C_BM8563_DateTypeDef dateStruct;
    rtc.getDate(&dateStruct);
    Serial.printf("%04d/%02d/%02d\n",
                    dateStruct.year,
                    dateStruct.month,
                    dateStruct.date);
}

/**
 * @brief 获取时间
*/
void time_get(void)
{
    I2C_BM8563_TimeTypeDef timeStruct;
    rtc.getTime(&timeStruct);
    Serial.printf("%02d:%02d:%02d\n",
                    timeStruct.hours,
                    timeStruct.minutes,
                    timeStruct.seconds);
}