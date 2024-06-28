#include "screen.h"

// GT911引脚
#define TOUCH_SDA  18
#define TOUCH_SCL  8
#define TOUCH_INT 45
#define TOUCH_RST 21
BBCapTouch bbct;
const char *szNames[] = {"Unknown", "FT6x36", "GT911", "CST820"};
// 屏幕大小
static const uint16_t screenWidth  = 320;
static const uint16_t screenHeight = 240;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[ screenWidth * 10 ];

TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); 

/**
 * @brief 触摸初始化
*/
void touch_init(void)
{
    bbct.init(TOUCH_SDA, TOUCH_SCL, TOUCH_RST, TOUCH_INT);  // 触摸初始化
    int iType = bbct.sensorType();  // 触摸芯片
    Serial.printf("Sensor type = %s\n", szNames[iType]);
}

/**
 * @brief 触摸读取
*/
void my_touchpad_read( lv_indev_drv_t * indev_driver, lv_indev_data_t * data )
{
    TOUCHINFO ti;
    if(bbct.getSamples(&ti))
    {
        data->state = LV_INDEV_STATE_PR;
        /*Set the coordinates*/
        data->point.x = ti.y[0];
        data->point.y = screenHeight - ti.x[0];
    }
    else
    {
        data->state = LV_INDEV_STATE_REL;
    }
}

/**
 * @brief 显示刷新
*/
void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p )
{
    uint32_t w = ( area->x2 - area->x1 + 1 );
    uint32_t h = ( area->y2 - area->y1 + 1 );

    tft.startWrite();
    tft.setAddrWindow( area->x1, area->y1, w, h );
    tft.pushColors( ( uint16_t * )&color_p->full, w * h, true );
    tft.endWrite();

    lv_disp_flush_ready( disp );
}

/**
 * @brief 屏幕初始化
*/
void screen_init(void)
{
    tft.begin();    // tft初始化
    tft.setRotation( 1 );   // 屏幕方向
    tft.fillScreen(TFT_BLACK);
    lv_disp_draw_buf_init( &draw_buf, buf, NULL, screenWidth * 10 );
    /*初始化显示*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init( &disp_drv );
    /*Change the following line to your display resolution*/
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register( &disp_drv );
    /*Initialize the (dummy) input device driver*/
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init( &indev_drv );
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = my_touchpad_read;
    lv_indev_drv_register( &indev_drv );
}