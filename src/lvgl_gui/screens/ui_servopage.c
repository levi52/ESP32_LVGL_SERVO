// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: SERVO

#include "../ui.h"

void ui_servopage_screen_init(void)
{
    ui_servopage = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_servopage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_servopage, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_servopage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_degreearc = lv_arc_create(ui_servopage);
    lv_obj_set_width(ui_degreearc, 150);
    lv_obj_set_height(ui_degreearc, 150);
    lv_obj_set_align(ui_degreearc, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_degreearc, 0, 180);
    lv_obj_set_style_arc_color(ui_degreearc, lv_color_hex(0x5192F7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_degreearc, 100, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_degreearc, lv_color_hex(0x406FFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_degreearc, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_degreearc, lv_color_hex(0x478EFC), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_degreearc, 160, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_servoback = lv_imgbtn_create(ui_servopage);
    lv_imgbtn_set_src(ui_servoback, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_icon_backward_png, NULL);
    lv_obj_set_height(ui_servoback, 32);
    lv_obj_set_width(ui_servoback, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_servoback, 10);
    lv_obj_set_y(ui_servoback, -10);
    lv_obj_set_align(ui_servoback, LV_ALIGN_BOTTOM_LEFT);

    ui_degreenum = lv_label_create(ui_servopage);
    lv_obj_set_width(ui_degreenum, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_degreenum, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_degreenum, 13);
    lv_obj_set_y(ui_degreenum, 0);
    lv_obj_set_align(ui_degreenum, LV_ALIGN_CENTER);
    lv_label_set_text(ui_degreenum, "0°");
    lv_obj_set_style_text_color(ui_degreenum, lv_color_hex(0x578EFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_degreenum, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_degreenum, &ui_font_PM30, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_degreearc, ui_event_degreearc, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_servoback, ui_event_servoback, LV_EVENT_ALL, NULL);

}