#include <weather.h>

// TIME
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "ntp.ntsc.ac.cn");//ntp.ntsc.ac.cn ntp.aliyun.com
time_t epochTime;
struct tm *ptm;
int currentWeek,currentHour,currentMinute,currentSecond;
int currentDay,currentMonth,currentYear; 
String wk[7] = {"周日","周一","周二","周三","周四","周五","周六"};

// WEATHER
const String key = "88602393a1334e9eb720fd2f0d075452";
const String cityURL = "https://geoapi.qweather.com/v2/city/lookup?key=";  //查询城市代码的接口
const String nowURL = "https://devapi.qweather.com/v7/weather/now?key="; // 实时天气接口
const String futureURL = "https://devapi.qweather.com/v7/weather/7d?key="; // 7日天气预报接口
const String airURL = "https://devapi.qweather.com/v7/air/now?key="; // 空气质量接口
String location = "101220109"; // 城市ID
String city;  // 城市
String adm; // 上级城市区划
String data = "";
uint8_t *outbuf;
int queryTimeout = 6000; // 查询天气超时时间(ms)
bool queryNowWeatherSuccess = false;
bool queryFutureWeatherSuccess;
bool queryAirSuccess;
static HTTPClient httpClient;
typedef struct {
    String text; // 天气类型
    int icon; // 天气图标
    int temp; // 温度
    String feelsLike; // 体感温度
    int pressure; // 压强
    String windDir; // 风力
    String windScale; // 风力
    int vis;  // 能见度
    int humidity; // 湿度
    int air; // 
    String category; // 空气质量指数级别
    String pm10; // PM10
    String pm2p5; // PM2.5
    String no2; // 二氧化氮
    String so2; // 二氧化硫
    String co; // 一氧化碳
    String o3; // 臭氧
} NowWeather; // 定义结构体

typedef struct {
    String day0wea;
    int day0wea_img;
    String day0date;
    int day0tem_day;
    int day0tem_night;
    String day1wea;
    int day1wea_img;
    String day1date;
    int day1tem_day;
    int day1tem_night;
    String day2wea;
    int day2wea_img;
    String day2date;
    int day2tem_day;
    int day2tem_night;
    String day3wea;
    int day3wea_img;
    String day3date;
    int day3tem_day;
    int day3tem_night;
    String day4wea;
    int day4wea_img;
    String day4date;
    int day4tem_day;
    int day4tem_night;
    String day5wea;
    int day5wea_img;
    String day5date;
    int day5tem_day;
    int day5tem_night;
    String day6wea;
    int day6wea_img;
    String day6date;
    int day6tem_day;
    int day6tem_night;
} FutureWeather;

NowWeather nowWeather; // 记录查询到的实况天气数据
FutureWeather futureWeather; // 未来天气

/**
 * @brief ntp初始化
*/
void time_init(void)
{
    timeClient.begin();
    timeClient.setTimeOffset(28800);  // 8区 8*3600
    timeClient.update();
    Serial.println( "Setup done" );
}

int prevMin = 0;
bool isFirstTime = true; 

/**
 * @brief NTP获取当前时间
*/
void get_time(void)
{
    timeClient.update();  // 更新时间
    epochTime = timeClient.getEpochTime();
    ptm = gmtime(&epochTime);//(time_t*)&epochTime
    currentYear = ptm->tm_year+1900;//-100
    currentMonth = ptm->tm_mon+1;
    currentDay = ptm->tm_mday;
    currentWeek = timeClient.getDay();
    currentHour = timeClient.getHours();
    currentMinute = timeClient.getMinutes();
    currentSecond = timeClient.getSeconds();

    if((currentMinute - prevMin) >= 10 || isFirstTime)
    {
        Serial.println("=====正在同步RTC=====");
        date_set(currentWeek, currentMonth, currentDay, currentYear);
        time_set(currentHour, currentMinute, currentSecond);
        isFirstTime = false;
        Serial.println("rtc done");
    }
    prevMin = currentMinute;

    lv_label_set_text_fmt(ui_time, "%02d:%02d", currentHour, currentMinute);
    lv_label_set_text_fmt(ui_week, "%s", wk[currentWeek]);
    lv_label_set_text_fmt(ui_date, "%04d/%02d/%02d", currentYear, currentMonth, currentDay);
}

/**
 * @brief 设置天气图标
 * @param obj: 部件
 * @param icon: 图标代码
*/
void set_weather_icon(lv_obj_t *obj, int icon)
{
    switch(icon)
    {
        case 100:
        case 150:
            lv_img_set_src(obj, &ui_img_icon_weather_sunny_png);
            break;
        case 101:
        case 102:
        case 103:
        case 151:
        case 152:
        case 153:
            lv_img_set_src(obj, &ui_img_icon_weather_cloudy_png);
            break;
        case 104:
            lv_img_set_src(obj, &ui_img_icon_weather_overcast_png);
            break;
        case 305:
        case 309:
        case 313:
        case 314:
        case 399:
            lv_img_set_src(obj, &ui_img_icon_weather_lightrain_png);
            break;
        case 300:
        case 301:
            lv_img_set_src(obj, &ui_img_icon_weather_shower_png);
            break;
        case 302:
        case 303:
        case 304:
            lv_img_set_src(obj, &ui_img_icon_weather_thunderrain_png);
            break;
        case 306:
        case 307:
        case 308:
        case 310:
        case 311:
        case 312:
        case 315:
        case 316:
        case 317:
        case 318:
        case 350:
        case 351:
            lv_img_set_src(obj, &ui_img_icon_weather_heavyrain_png);
            break;
        case 400:
        case 401:
        case 402:
        case 403:
        case 404:
        case 405:
        case 406:
        case 407:
        case 408:
        case 409:
        case 410:
        case 456:
        case 457:
        case 499:
            lv_img_set_src(obj, &ui_img_icon_weather_snow_png);
            break;
        case 500:
        case 501:
        case 509:
        case 510:
        case 514:
        case 515:
            lv_img_set_src(obj, &ui_img_icon_weather_foggy_png);
            break;
        case 502:
        case 511:
        case 512:
        case 513:
            lv_img_set_src(obj, &ui_img_icon_weather_mai_png);
            break;
        case 503:
        case 504:
            lv_img_set_src(obj, &ui_img_icon_weather_sand_png);
            break;
        case 507:
        case 508:
            lv_img_set_src(obj, &ui_img_icon_weather_sandstorm_png);
            break;
        case 900:
            lv_img_set_src(obj, &ui_img_icon_weather_hot_png);
            break;
        case 901:
            lv_img_set_src(obj, &ui_img_icon_weather_cold_png);
            break;
        case 999:
        default:
            lv_img_set_src(obj, &ui_img_icon_weather_na_png);
            break;
    }
}

/**
 * @brief 获取当前天气
*/
void get_weather_now(void)
{
    data = "";
    queryNowWeatherSuccess = false; // 先置为false
    String url = nowURL + key + "&location=" + location;
    httpClient.setConnectTimeout(queryTimeout);
    httpClient.begin(url);
    //启动连接并发送HTTP请求
    int httpCode = httpClient.GET();
    // Serial.println(ESP.getFreeHeap());
    Serial.println("正在获取天气数据");
    //如果服务器响应OK则从服务器获取响应体信息并通过串口输出
    if (httpCode == HTTP_CODE_OK) {
        // 解压Gzip数据流
        int len = httpClient.getSize();
        uint8_t buff[2048] = { 0 };
        WiFiClient *stream = httpClient.getStreamPtr();
        while (httpClient.connected() && (len > 0 || len == -1)) {
            size_t size = stream->available();  // 还剩下多少数据没有读完？
            // Serial.println(size);
            if (size) {
            size_t realsize = ((size > sizeof(buff)) ? sizeof(buff) : size);
            // Serial.println(realsize);
            size_t readBytesSize = stream->readBytes(buff, realsize);
            // Serial.write(buff,readBytesSize);
            if (len > 0) len -= readBytesSize;
            outbuf = (uint8_t *)malloc(sizeof(uint8_t) * 5120);
            uint32_t outprintsize = 0;
            int result = ArduinoZlib::libmpq__decompress_zlib(buff, readBytesSize, outbuf, 5120, outprintsize);
            // Serial.write(outbuf, outprintsize);
            for (int i = 0; i < outprintsize; i++) {
                data += (char)outbuf[i];
            }
            free(outbuf);
            Serial.println(data);
            }
            delay(1);
        }
        // 解压完，转换json数据
        StaticJsonDocument<2048> doc; //声明一个静态JsonDocument对象
        DeserializationError error = deserializeJson(doc, data); //反序列化JSON数据
        if(!error){ //检查反序列化是否成功
            //读取json节点
            String code = doc["code"].as<const char*>();
            if(code.equals("200")){
                queryNowWeatherSuccess = true;       
                //读取json节点
                nowWeather.text = doc["now"]["text"].as<const char*>(); // 天气类型
                nowWeather.icon = doc["now"]["icon"].as<int>(); // 天气图标
                nowWeather.temp = doc["now"]["temp"].as<int>(); // 温度
                String feelslikes = doc["now"]["feelsLike"]; // 体感温度
                nowWeather.feelsLike = feelslikes  + "℃";
                String windDirs = doc["now"]["windDir"]; // 风向
                nowWeather.windDir = windDirs;
                String windScales = doc["now"]["windScale"]; // 风力等级
                nowWeather.windScale = windScales + "级";
                nowWeather.humidity = doc["now"]["humidity"].as<int>(); // 湿度
                nowWeather.vis = doc["now"]["vis"].as<int>(); // 能见度
                nowWeather.pressure = doc["now"]["pressure"].as<int>(); // 大气压强
                Serial.println("获取成功");
                lv_label_set_text_fmt(ui_weatherstate, "%s", nowWeather.text);
                lv_label_set_text_fmt(ui_feeltemp, "%s", nowWeather.feelsLike);
                lv_label_set_text_fmt(ui_outtemp, "%d℃", nowWeather.temp);
                lv_label_set_text_fmt(ui_outhumi, "%d%%", nowWeather.humidity);
                lv_label_set_text_fmt(ui_outpress, "%dhPa", nowWeather.pressure);
                lv_label_set_text_fmt(ui_winddir, "%s", nowWeather.windDir );
                lv_label_set_text_fmt(ui_windscale, "%s", nowWeather.windScale);
                lv_label_set_text_fmt(ui_vis, "%d KM", nowWeather.vis);
                set_weather_icon(ui_weathericon, nowWeather.icon);
            }
        }  
    }
    if(!queryNowWeatherSuccess){
    Serial.print("请求实时天气错误：");
    Serial.println(httpCode);
    }
    //关闭与服务器连接
    httpClient.end();
}

/**
 * @brief 获取未来天气
*/
void get_weather_future(void)
{
    data = "";
    queryFutureWeatherSuccess = false; // 先置为false
    String url = futureURL + key + "&location=" + location;
    httpClient.setConnectTimeout(queryTimeout);
    httpClient.begin(url);
    //启动连接并发送HTTP请求
    int httpCode = httpClient.GET();
    Serial.println("正在获取一周天气数据");
    //如果服务器响应OK则从服务器获取响应体信息并通过串口输出
    if (httpCode == HTTP_CODE_OK) 
    {
        // 解压Gzip数据流
        int len = httpClient.getSize();
        uint8_t buff[2048] = { 0 };
        WiFiClient *stream = httpClient.getStreamPtr();
        while (httpClient.connected() && (len > 0 || len == -1)) 
        {
            size_t size = stream->available();  // 还剩下多少数据没有读完？
            // Serial.println(size);
            if (size) 
            {
                size_t realsize = ((size > sizeof(buff)) ? sizeof(buff) : size);
                // Serial.println(realsize);
                size_t readBytesSize = stream->readBytes(buff, realsize);
                // Serial.write(buff,readBytesSize);
                if (len > 0) len -= readBytesSize;
                outbuf = (uint8_t *)malloc(sizeof(uint8_t) * 5120);
                uint32_t outprintsize = 0;
                int result = ArduinoZlib::libmpq__decompress_zlib(buff, readBytesSize, outbuf, 5120, outprintsize);
                // Serial.write(outbuf, outprintsize);
                for (int i = 0; i < outprintsize; i++) 
                {
                    data += (char)outbuf[i];
                }
                free(outbuf);
                Serial.println(data);
            }
            delay(1);
        }
        // 解压完，转换json数据
        StaticJsonDocument<2048> doc; //声明一个静态JsonDocument对象
        DeserializationError error = deserializeJson(doc, data); //反序列化JSON数据
        if(!error)
        { //检查反序列化是否成功
            //读取json节点
            String code = doc["code"].as<const char*>();
            if(code.equals("200"))
            {
                queryFutureWeatherSuccess = true;
                //读取json节点
                futureWeather.day0wea = doc["daily"][0]["textDay"].as<const char*>();
                futureWeather.day0wea_img = doc["daily"][0]["iconDay"].as<int>();
                futureWeather.day0date = doc["daily"][0]["fxDate"].as<const char*>();
                futureWeather.day0tem_day = doc["daily"][0]["tempMax"].as<int>();
                futureWeather.day0tem_night = doc["daily"][0]["tempMin"].as<int>();

                futureWeather.day1wea = doc["daily"][1]["textDay"].as<const char*>();
                futureWeather.day1wea_img = doc["daily"][1]["iconDay"].as<int>();
                futureWeather.day1date = doc["daily"][1]["fxDate"].as<const char*>();
                futureWeather.day1tem_day = doc["daily"][1]["tempMax"].as<int>();
                futureWeather.day1tem_night = doc["daily"][1]["tempMin"].as<int>();

                futureWeather.day2wea = doc["daily"][2]["textDay"].as<const char*>();
                futureWeather.day2wea_img = doc["daily"][2]["iconDay"].as<int>();
                futureWeather.day2date = doc["daily"][2]["fxDate"].as<const char*>();
                futureWeather.day2tem_day = doc["daily"][2]["tempMax"].as<int>();
                futureWeather.day2tem_night = doc["daily"][2]["tempMin"].as<int>();

                futureWeather.day3wea = doc["daily"][3]["textDay"].as<const char*>();
                futureWeather.day3wea_img = doc["daily"][3]["iconDay"].as<int>();
                futureWeather.day3date = doc["daily"][3]["fxDate"].as<const char*>();
                futureWeather.day3tem_day = doc["daily"][3]["tempMax"].as<int>();
                futureWeather.day3tem_night = doc["daily"][3]["tempMin"].as<int>();

                futureWeather.day4wea = doc["daily"][4]["textDay"].as<const char*>();
                futureWeather.day4wea_img = doc["daily"][4]["iconDay"].as<int>();
                futureWeather.day4date = doc["daily"][4]["fxDate"].as<const char*>();
                futureWeather.day4tem_day = doc["daily"][4]["tempMax"].as<int>();
                futureWeather.day4tem_night = doc["daily"][4]["tempMin"].as<int>();

                futureWeather.day5wea = doc["daily"][5]["textDay"].as<const char*>();
                futureWeather.day5wea_img = doc["daily"][5]["iconDay"].as<int>();
                futureWeather.day5date = doc["daily"][5]["fxDate"].as<const char*>();
                futureWeather.day5tem_day = doc["daily"][5]["tempMax"].as<int>();
                futureWeather.day5tem_night = doc["daily"][5]["tempMin"].as<int>();

                futureWeather.day6wea = doc["daily"][6]["textDay"].as<const char*>();
                futureWeather.day6wea_img = doc["daily"][6]["iconDay"].as<int>();
                futureWeather.day6date = doc["daily"][6]["fxDate"].as<const char*>();
                futureWeather.day6tem_day = doc["daily"][6]["tempMax"].as<int>();
                futureWeather.day6tem_night = doc["daily"][6]["tempMin"].as<int>();

                Serial.println("获取成功");
                set_weather_icon(ui_day1icon, futureWeather.day0wea_img);
                lv_label_set_text_fmt(ui_day1label, "%s", futureWeather.day0wea);
                lv_label_set_text_fmt(ui_day1temp, "%d~%d℃", futureWeather.day0tem_night, futureWeather.day0tem_day);
                
                set_weather_icon(ui_day2icon, futureWeather.day1wea_img);
                lv_label_set_text_fmt(ui_day2label, "%s", futureWeather.day1wea);
                lv_label_set_text_fmt(ui_day2temp, "%d~%d℃", futureWeather.day1tem_night, futureWeather.day1tem_day);
                
                set_weather_icon(ui_day3icon, futureWeather.day2wea_img);
                lv_label_set_text_fmt(ui_day2label, "%s", futureWeather.day2wea);
                lv_label_set_text_fmt(ui_day2temp, "%d~%d℃", futureWeather.day2tem_night, futureWeather.day2tem_day);
                
                set_weather_icon(ui_day4icon, futureWeather.day3wea_img);
                lv_label_set_text_fmt(ui_day4label, "%s", futureWeather.day3wea);
                lv_label_set_text_fmt(ui_day4temp, "%d~%d℃", futureWeather.day3tem_night, futureWeather.day3tem_day);
                
                set_weather_icon(ui_day5icon, futureWeather.day4wea_img);
                lv_label_set_text_fmt(ui_day5label, "%s", futureWeather.day4wea);
                lv_label_set_text_fmt(ui_day5temp, "%d~%d℃", futureWeather.day4tem_night, futureWeather.day4tem_day);
                
                set_weather_icon(ui_day6icon, futureWeather.day5wea_img);
                lv_label_set_text_fmt(ui_day6label, "%s", futureWeather.day5wea);
                lv_label_set_text_fmt(ui_day6temp, "%d~%d℃", futureWeather.day5tem_night, futureWeather.day5tem_day);
                
                set_weather_icon(ui_day7icon, futureWeather.day6wea_img);
                lv_label_set_text_fmt(ui_day7label, "%s", futureWeather.day6wea);
                lv_label_set_text_fmt(ui_day7temp, "%d~%d℃", futureWeather.day6tem_night, futureWeather.day6tem_day);
            }
        }  
    } 
    if(!queryFutureWeatherSuccess)
    {
        Serial.print("请求一周天气错误：");
        Serial.println(httpCode);
    }
    //关闭与服务器连接
    httpClient.end();
}

/**
 * @brief 获取空气质量
*/
void get_air(void)
{
    data = "";
    queryAirSuccess = false; // 先置为false
    String url = airURL + key + "&location=" + location;
    httpClient.setConnectTimeout(queryTimeout);
    httpClient.begin(url);
    //启动连接并发送HTTP请求
    int httpCode = httpClient.GET();
    Serial.println("正在获取空气质量数据");
    //如果服务器响应OK则从服务器获取响应体信息并通过串口输出
    if (httpCode == HTTP_CODE_OK) 
    {
        // 解压Gzip数据流
        int len = httpClient.getSize();
        uint8_t buff[2048] = { 0 };
        WiFiClient *stream = httpClient.getStreamPtr();
        while (httpClient.connected() && (len > 0 || len == -1)) 
        {
            size_t size = stream->available();  // 还剩下多少数据没有读完？
            // Serial.println(size);
            if (size) 
            {
                size_t realsize = ((size > sizeof(buff)) ? sizeof(buff) : size);
                // Serial.println(realsize);
                size_t readBytesSize = stream->readBytes(buff, realsize);
                // Serial.write(buff,readBytesSize);
                if (len > 0) len -= readBytesSize;
                outbuf = (uint8_t *)malloc(sizeof(uint8_t) * 5120);
                uint32_t outprintsize = 0;
                int result = ArduinoZlib::libmpq__decompress_zlib(buff, readBytesSize, outbuf, 5120, outprintsize);
                // Serial.write(outbuf, outprintsize);
                for (int i = 0; i < outprintsize; i++) 
                {
                    data += (char)outbuf[i];
                }
                free(outbuf);
                Serial.println(data);
            }
            delay(1);
        }
        // 解压完，转换json数据
        StaticJsonDocument<2048> doc; //声明一个静态JsonDocument对象
        DeserializationError error = deserializeJson(doc, data); //反序列化JSON数据
        if(!error)
        { //检查反序列化是否成功
            //读取json节点
            String code = doc["code"].as<const char*>();
            if(code.equals("200"))
            {
                queryAirSuccess = true;
                //读取json节点
                nowWeather.air = doc["now"]["aqi"].as<int>();
                nowWeather.category = doc["now"]["category"].as<const char*>();
                nowWeather.pm10 = doc["now"]["pm10"].as<const char*>();
                nowWeather.pm2p5 = doc["now"]["pm2p5"].as<const char*>();
                nowWeather.no2 = doc["now"]["no2"].as<const char*>();
                nowWeather.so2 = doc["now"]["so2"].as<const char*>();
                nowWeather.co = doc["now"]["co"].as<const char*>();
                nowWeather.o3 = doc["now"]["o3"].as<const char*>();
                Serial.println("获取成功");
                String pm10t = "颗粒物  PM10  " + nowWeather.pm10 + "\n";
                String pm25t = "颗粒物  PM2.5  " + nowWeather.pm2p5 + "\n";
                String no2t = "二氧化氮  NO2  " + nowWeather.no2 + "\n";
                String so2t = "二氧化硫  SO2  " + nowWeather.so2 + "\n";
                String cot = "一氧化碳  CO  " + nowWeather.co + "\n";
                String o3t = "臭氧  O3  " + nowWeather.o3;
                String airoption = pm10t + pm25t + no2t + so2t + cot + o3t; 
                Serial.println(airoption);
                lv_label_set_text_fmt(ui_category, "%s", nowWeather.category);
                lv_roller_set_options(ui_airqualitylist, airoption.c_str(), LV_ROLLER_MODE_INFINITE);
            }
        }
    } 
    if(!queryAirSuccess)
    {
        Serial.print("请求空气质量错误：");
        Serial.println(httpCode);
    }
    //关闭与服务器连接
    httpClient.end();
}

/**
 * @brief 查询城市ID
*/
void getCityID()
{
    bool flag = false; // 是否成功获取到城市id的标志
    String url = cityURL + key + "&location=" + urlEncode(city) + "&adm=" + urlEncode(adm);
    // Serial.println(url);
    httpClient.setConnectTimeout(queryTimeout * 5);
    httpClient.begin(url);
    //启动连接并发送HTTP请求
    int httpCode = httpClient.GET();
    Serial.println("正在获取城市id");
    // 处理服务器答复
    if (httpCode == HTTP_CODE_OK) 
    {
        // 解压Gzip数据流
        int len = httpClient.getSize();
        uint8_t buff[2048] = { 0 };
        WiFiClient *stream = httpClient.getStreamPtr();
        while (httpClient.connected() && (len > 0 || len == -1)) 
        {
            size_t size = stream->available();  // 还剩下多少数据没有读完？
            // Serial.println(size);
            if (size) 
            {
                size_t realsize = ((size > sizeof(buff)) ? sizeof(buff) : size);
                // Serial.println(realsize);
                size_t readBytesSize = stream->readBytes(buff, realsize);
                // Serial.write(buff,readBytesSize);
                if (len > 0) len -= readBytesSize;
                outbuf = (uint8_t *)malloc(sizeof(uint8_t) * 5120);
                uint32_t outprintsize = 0;
                int result = ArduinoZlib::libmpq__decompress_zlib(buff, readBytesSize, outbuf, 5120, outprintsize);
                // Serial.write(outbuf, outprintsize);
                for (int i = 0; i < outprintsize; i++) 
                {
                    data += (char)outbuf[i];
                }
                free(outbuf);
                Serial.println(data);
            }
            delay(1);
        }
        // 解压完，转换json数据
        StaticJsonDocument<2048> doc; //声明一个静态JsonDocument对象
        DeserializationError error = deserializeJson(doc, data); //反序列化JSON数据
        if(!error)
        { //检查反序列化是否成功
            //读取json节点
            String code = doc["code"].as<const char*>();
            if(code.equals("200"))
            {
                flag = true;
                // 多结果的情况下，取第一个
                city = doc["location"][0]["name"].as<const char*>();
                location = doc["location"][0]["id"].as<const char*>();
                Serial.println("城市id :" + location);
                // 将信息存入nvs中
                // setWiFiCity();
            }
        }
    }
    if(!flag)
    {
        Serial.print("获取城市id错误: ");
        Serial.println(httpCode);
        Serial.print("城市错误，即将重启系统");
        // clearWiFiCity(); // 清除配置好的信息
        // restartSystem("城市名称无效", false);
    }
    Serial.println("获取成功");
    //关闭与服务器连接
    httpClient.end();
}

String urlEncode(const String& text) 
{
    String encodedText = "";
    for (size_t i = 0; i < text.length(); i++) 
    {
        char c = text[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '-' || c == '_' || c == '.' || c == '~') 
        {
            encodedText += c;
        } 
        else if (c == ' ') 
        {
            encodedText += '+';
        } 
        else 
        {
            encodedText += '%';
            char hex[4];
            sprintf(hex, "%02X", (uint8_t)c);
            encodedText += hex;
        }
    }
    return encodedText;
}