// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: MUSIC

#include "../ui.h"

void ui_musicpage_screen_init(void)
{
    ui_musicpage = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_musicpage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_musicpage, lv_color_hex(0x59738B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_musicpage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_playdisc = lv_img_create(ui_musicpage);
    lv_img_set_src(ui_playdisc, &ui_img_icon_music_music1_png);
    lv_obj_set_width(ui_playdisc, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_playdisc, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_playdisc, 0);
    lv_obj_set_y(ui_playdisc, -48);
    lv_obj_set_align(ui_playdisc, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_playdisc, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_playdisc, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_prevmusic = lv_imgbtn_create(ui_musicpage);
    lv_imgbtn_set_src(ui_prevmusic, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_icon_music_prevm_png, NULL);
    lv_obj_set_height(ui_prevmusic, 32);
    lv_obj_set_width(ui_prevmusic, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_prevmusic, -80);
    lv_obj_set_y(ui_prevmusic, 90);
    lv_obj_set_align(ui_prevmusic, LV_ALIGN_CENTER);

    ui_playtype = lv_imgbtn_create(ui_musicpage);
    lv_imgbtn_set_src(ui_playtype, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_icon_music_cirm_png, NULL);
    lv_obj_set_height(ui_playtype, 32);
    lv_obj_set_width(ui_playtype, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_playtype, -130);
    lv_obj_set_y(ui_playtype, 90);
    lv_obj_set_align(ui_playtype, LV_ALIGN_CENTER);

    ui_musicstate = lv_imgbtn_create(ui_musicpage);
    lv_imgbtn_set_src(ui_musicstate, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_icon_music_pause_png, NULL);
    lv_obj_set_height(ui_musicstate, 32);
    lv_obj_set_width(ui_musicstate, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_musicstate, 0);
    lv_obj_set_y(ui_musicstate, 90);
    lv_obj_set_align(ui_musicstate, LV_ALIGN_CENTER);

    ui_nextmusic = lv_imgbtn_create(ui_musicpage);
    lv_imgbtn_set_src(ui_nextmusic, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_icon_music_nextm_png, NULL);
    lv_obj_set_height(ui_nextmusic, 32);
    lv_obj_set_width(ui_nextmusic, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_nextmusic, 80);
    lv_obj_set_y(ui_nextmusic, 90);
    lv_obj_set_align(ui_nextmusic, LV_ALIGN_CENTER);

    ui_musicline = lv_slider_create(ui_musicpage);
    lv_obj_set_width(ui_musicline, 200);
    lv_obj_set_height(ui_musicline, 10);
    lv_obj_set_x(ui_musicline, 0);
    lv_obj_set_y(ui_musicline, 52);
    lv_obj_set_align(ui_musicline, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_musicline, lv_color_hex(0xCDCDCD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_musicline, 100, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_musicline, lv_color_hex(0xAC99FF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_musicline, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_musicline, lv_color_hex(0xAC99FF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_musicline, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_musicback = lv_imgbtn_create(ui_musicpage);
    lv_imgbtn_set_src(ui_musicback, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_icon_music_musicback_png, NULL);
    lv_obj_set_height(ui_musicback, 32);
    lv_obj_set_width(ui_musicback, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_musicback, 10);
    lv_obj_set_y(ui_musicback, 10);

    ui_musiclist = lv_imgbtn_create(ui_musicpage);
    lv_imgbtn_set_src(ui_musiclist, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_icon_music_musiclist_png, NULL);
    lv_obj_set_height(ui_musiclist, 32);
    lv_obj_set_width(ui_musiclist, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_musiclist, 130);
    lv_obj_set_y(ui_musiclist, 90);
    lv_obj_set_align(ui_musiclist, LV_ALIGN_CENTER);

    ui_musicinfo = lv_label_create(ui_musicpage);
    lv_obj_set_width(ui_musicinfo, 240);
    lv_obj_set_height(ui_musicinfo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_musicinfo, 0);
    lv_obj_set_y(ui_musicinfo, 32);
    lv_obj_set_align(ui_musicinfo, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_musicinfo, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_label_set_text(ui_musicinfo, "Something Just Like This - Coldplay");
    lv_obj_set_style_text_color(ui_musicinfo, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_musicinfo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_musicinfo, &ui_font_SY15, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_listpanel = lv_obj_create(ui_musicpage);
    lv_obj_set_width(ui_listpanel, 300);
    lv_obj_set_height(ui_listpanel, 200);
    lv_obj_set_x(ui_listpanel, 0);
    lv_obj_set_y(ui_listpanel, 250);
    lv_obj_set_align(ui_listpanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_listpanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_listpanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_listpanel, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_listpanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_listpanel, 100, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_listplay = lv_imgbtn_create(ui_listpanel);
    lv_imgbtn_set_src(ui_listplay, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_icon_music_play_png, NULL);
    lv_obj_set_height(ui_listplay, 32);
    lv_obj_set_width(ui_listplay, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_listplay, 125);
    lv_obj_set_y(ui_listplay, -80);
    lv_obj_set_align(ui_listplay, LV_ALIGN_CENTER);

    ui_musicname = lv_label_create(ui_listpanel);
    lv_obj_set_width(ui_musicname, 200);
    lv_obj_set_height(ui_musicname, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_musicname, -40);
    lv_obj_set_y(ui_musicname, -76);
    lv_obj_set_align(ui_musicname, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_musicname, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_label_set_text(ui_musicname, "Something Just Like This - Coldplay");
    lv_obj_set_style_text_color(ui_musicname, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_musicname, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_musicname, &ui_font_SY20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_listroller = lv_roller_create(ui_listpanel);
    lv_roller_set_options(ui_listroller, "Option 1\nOption 2\nOption 3", LV_ROLLER_MODE_INFINITE);
    lv_obj_set_width(ui_listroller, 290);
    lv_obj_set_height(ui_listroller, 150);
    lv_obj_set_x(ui_listroller, 0);
    lv_obj_set_y(ui_listroller, 20);
    lv_obj_set_align(ui_listroller, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_listroller, lv_color_hex(0xC0C0C0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_listroller, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_listroller, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_listroller, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_listroller, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_listroller, 100, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(ui_listroller, lv_color_hex(0x8F75FF), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_listroller, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_listroller, lv_color_hex(0x000000), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_listroller, 120, LV_PART_SELECTED | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_musicstate, ui_event_musicstate, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_musicback, ui_event_musicback, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_musiclist, ui_event_musiclist, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_listplay, ui_event_listplay, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_musicpage, ui_event_musicpage, LV_EVENT_ALL, NULL);

}
