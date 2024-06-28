// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_airqpage_screen_init(void)
{
    ui_airqpage = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_airqpage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_airqpage, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_airqpage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_airqualitylist = lv_roller_create(ui_airqpage);
    lv_roller_set_options(ui_airqualitylist,
                          "颗粒物  PM10  29\n颗粒物  PM2.5  5\n二氧化氮  NO2  3\n二氧化硫  SO2  1\n一氧化碳  CO  0.3\n臭氧  O3  75",
                          LV_ROLLER_MODE_INFINITE);
    lv_obj_set_height(ui_airqualitylist, 222);
    lv_obj_set_width(ui_airqualitylist, lv_pct(98));
    lv_obj_set_x(ui_airqualitylist, 0);
    lv_obj_set_y(ui_airqualitylist, 58);
    lv_obj_set_align(ui_airqualitylist, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_airqualitylist, lv_color_hex(0x00CEFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_airqualitylist, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_airqualitylist, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_airqualitylist, &ui_font_PM30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_airqualitylist, lv_color_hex(0x202C39), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_airqualitylist, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_airqualitylist, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_airqualitylist, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_airqualitylist, lv_color_hex(0x00CEFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_airqualitylist, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_airqualitylist, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_airqualitylist, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(ui_airqualitylist, lv_color_hex(0xFFFFFF), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_airqualitylist, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_airqualitylist, 10, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_airqualitylist, lv_color_hex(0x4A89FC), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_airqualitylist, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);

    ui_aairlabel = lv_label_create(ui_airqpage);
    lv_obj_set_width(ui_aairlabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_aairlabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_aairlabel, 0);
    lv_obj_set_y(ui_aairlabel, -87);
    lv_obj_set_align(ui_aairlabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_aairlabel, "空气质量指数");
    lv_obj_set_style_text_color(ui_aairlabel, lv_color_hex(0x51E3FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_aairlabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_aairlabel, &ui_font_PM30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_airback = lv_imgbtn_create(ui_airqpage);
    lv_imgbtn_set_src(ui_airback, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_icon_backward_png, NULL);
    lv_obj_set_height(ui_airback, 32);
    lv_obj_set_width(ui_airback, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_airback, 10);
    lv_obj_set_y(ui_airback, 10);
    lv_obj_set_align(ui_airback, LV_ALIGN_TOP_LEFT);

    ui_airfor = lv_imgbtn_create(ui_airqpage);
    lv_imgbtn_set_src(ui_airfor, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_icon_forward_png, NULL);
    lv_obj_set_height(ui_airfor, 32);
    lv_obj_set_width(ui_airfor, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_airfor, -10);
    lv_obj_set_y(ui_airfor, 10);
    lv_obj_set_align(ui_airfor, LV_ALIGN_TOP_RIGHT);

    lv_obj_add_event_cb(ui_airfor, ui_event_airfor, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_airback, ui_event_airback, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_airqpage, ui_event_airqpage, LV_EVENT_ALL, NULL);

}