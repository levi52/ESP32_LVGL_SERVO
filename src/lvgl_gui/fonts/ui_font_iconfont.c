/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:\Users\86152\Desktop\LEVI5\hardWare\LVGL\demo3\assets\FONT\iconfont.ttf -o C:\Users\86152\Desktop\LEVI5\hardWare\LVGL\demo3\assets\FONT\ui_font_iconfont.c --format lvgl -r 0xe65f -r 0xe669 -r 0xe62f -r 0xe630 -r 0xe7c1 --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_ICONFONT
#define UI_FONT_ICONFONT 1
#endif

#if UI_FONT_ICONFONT

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+E62F "" */
    0x3, 0x0, 0x33, 0x3, 0x3, 0x18, 0x6, 0x80,
    0x6, 0x1e, 0x18, 0xcc, 0x62, 0x11, 0x88, 0x46,
    0x33, 0x18, 0x78, 0x60, 0x1, 0x60, 0x18, 0xc0,
    0xc0, 0xcc, 0x0, 0xc0,

    /* U+E630 "" */
    0x7, 0xe0, 0x18, 0x18, 0x30, 0xc, 0x60, 0x6,
    0x40, 0x82, 0x80, 0x81, 0x80, 0x81, 0x80, 0x81,
    0x81, 0x1, 0x86, 0x1, 0x80, 0x1, 0x40, 0x2,
    0x60, 0x6, 0x30, 0xc, 0x18, 0x18, 0x7, 0xe0,

    /* U+E65F "" */
    0xf, 0xfc, 0xf, 0xff, 0xc7, 0x80, 0x7b, 0x8f,
    0xc7, 0x4f, 0xfc, 0x87, 0x87, 0x81, 0x80, 0x60,
    0xf, 0xc0, 0x7, 0xf8, 0x0, 0x84, 0x0, 0xc,
    0x0, 0x3, 0x0,

    /* U+E669 "" */
    0xc0, 0x3e, 0xf7, 0xbf, 0xd7, 0xfe, 0x7f, 0xe7,
    0xfe, 0x7f, 0xe5, 0xfa, 0xbf, 0xe7, 0xfc, 0x2e,
    0x87, 0x1c,

    /* U+E7C1 "" */
    0x7, 0x0, 0x78, 0x84, 0xee, 0x43, 0x30, 0x61,
    0x8c, 0x1, 0x80, 0x30, 0x6, 0x0, 0xcc, 0x18,
    0x67, 0x2, 0xc4, 0x68, 0x4c, 0x7, 0x80, 0x60
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 256, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 28, .adv_w = 256, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 60, .adv_w = 281, .box_w = 18, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 256, .box_w = 12, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 256, .box_w = 12, .box_h = 16, .ofs_x = 2, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x1, 0x30, 0x3a, 0x192
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 58927, .range_length = 403, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 5, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_iconfont = {
#else
lv_font_t ui_font_iconfont = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_ICONFONT*/

