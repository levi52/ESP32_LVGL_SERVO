// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_mainpage_screen_init(void)
{
    ui_mainpage = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_mainpage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_mainpage, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_mainpage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_weather = lv_imgbtn_create(ui_mainpage);
    lv_imgbtn_set_src(ui_weather, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_icon_weather_png, NULL);
    lv_obj_set_width(ui_weather, 64);
    lv_obj_set_height(ui_weather, 64);
    lv_obj_set_x(ui_weather, lv_pct(0));
    lv_obj_set_y(ui_weather, lv_pct(-20));
    lv_obj_set_align(ui_weather, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_weather, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_weather, lv_color_hex(0xCCEDFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_weather, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_sensor = lv_imgbtn_create(ui_mainpage);
    lv_imgbtn_set_src(ui_sensor, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_icon_sensor_png, NULL);
    lv_obj_set_width(ui_sensor, 64);
    lv_obj_set_height(ui_sensor, 64);
    lv_obj_set_x(ui_sensor, lv_pct(-30));
    lv_obj_set_y(ui_sensor, lv_pct(-20));
    lv_obj_set_align(ui_sensor, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_sensor, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_sensor, lv_color_hex(0xCCEDFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_sensor, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_audio = lv_imgbtn_create(ui_mainpage);
    // lv_imgbtn_set_src(ui_audio, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_icon_audio_png, NULL);
    // lv_obj_set_width(ui_audio, 64);
    // lv_obj_set_height(ui_audio, 64);
    // lv_obj_set_x(ui_audio, lv_pct(30));
    // lv_obj_set_y(ui_audio, lv_pct(-20));
    // lv_obj_set_align(ui_audio, LV_ALIGN_CENTER);
    // lv_obj_set_style_radius(ui_audio, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_bg_color(ui_audio, lv_color_hex(0xCCEDFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_bg_opa(ui_audio, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_music = lv_imgbtn_create(ui_mainpage);
    lv_imgbtn_set_src(ui_music, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_icon_music_musicicon_png, NULL);
    lv_obj_set_width(ui_music, 64);
    lv_obj_set_height(ui_music, 64);
    lv_obj_set_x(ui_music, lv_pct(30));
    lv_obj_set_y(ui_music, lv_pct(-20));
    lv_obj_set_align(ui_music, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_music, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_music, lv_color_hex(0xCCEDFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_music, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_gravity = lv_imgbtn_create(ui_mainpage);
    lv_imgbtn_set_src(ui_gravity, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_icon_gravity_png, NULL);
    lv_obj_set_width(ui_gravity, 64);
    lv_obj_set_height(ui_gravity, 64);
    lv_obj_set_x(ui_gravity, lv_pct(-30));
    lv_obj_set_y(ui_gravity, lv_pct(20));
    lv_obj_set_align(ui_gravity, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_gravity, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_gravity, lv_color_hex(0xCCEDFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_gravity, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_direction = lv_imgbtn_create(ui_mainpage);
    lv_imgbtn_set_src(ui_direction, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_icon_direction_png, NULL);
    lv_obj_set_width(ui_direction, 64);
    lv_obj_set_height(ui_direction, 64);
    lv_obj_set_x(ui_direction, lv_pct(0));
    lv_obj_set_y(ui_direction, lv_pct(20));
    lv_obj_set_align(ui_direction, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_direction, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_direction, lv_color_hex(0xCCEDFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_direction, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_setting = lv_imgbtn_create(ui_mainpage);
    lv_imgbtn_set_src(ui_setting, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_icon_setting_png, NULL);
    lv_obj_set_width(ui_setting, 64);
    lv_obj_set_height(ui_setting, 64);
    lv_obj_set_x(ui_setting, lv_pct(30));
    lv_obj_set_y(ui_setting, lv_pct(20));
    lv_obj_set_align(ui_setting, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_setting, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_setting, lv_color_hex(0xCCEDFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_setting, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_weather, ui_event_weather, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_sensor, ui_event_sensor, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_music, ui_event_music, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_setting, ui_event_setting, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_mainpage, ui_event_mainpage, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_direction, ui_event_direction, LV_EVENT_ALL, NULL);

}