/*******************************************************************************
 * Size: 15 px
 * Bpp: 1
 * Opts: --bpp 1 --size 15 --font C:\Users\86152\Desktop\LEVI5\hardWare\LVGL\demo3\assets\FONT\思源宋体 CN-Bold.ttf -o C:\Users\86152\Desktop\LEVI5\hardWare\LVGL\demo3\assets\FONT\ui_font_SY15.c --format lvgl -r 0x20-0x7f --symbols ℃~合肥蜀山包河瑶海肥宿州庐江多云大雨小雪风雷暴晴天雾霾沙尘阴阵冰雹中特伴有冻楼浴室强扬级浮尘东南西北风号优良中差 --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_SY15
#define UI_FONT_SY15 1
#endif

#if UI_FONT_SY15

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xe8, 0x3c,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xb9, 0x0,

    /* U+0023 "#" */
    0x12, 0x9, 0x4, 0x8f, 0xf2, 0x21, 0x20, 0x91,
    0xfe, 0x24, 0x12, 0x9, 0x0,

    /* U+0024 "$" */
    0x10, 0xfb, 0x5e, 0xbd, 0x1e, 0x1f, 0xf, 0x17,
    0x2f, 0x5b, 0xe1, 0x2, 0x0,

    /* U+0025 "%" */
    0x70, 0x46, 0xc4, 0x36, 0x21, 0xb2, 0xd, 0xa6,
    0x6d, 0x49, 0xd6, 0x61, 0x33, 0x11, 0x98, 0x8c,
    0xc8, 0x3c,

    /* U+0026 "&" */
    0x3c, 0xc, 0xc1, 0x98, 0x32, 0x3, 0x8e, 0x70,
    0x93, 0x26, 0x34, 0xc7, 0x1c, 0x71, 0xf3, 0x80,

    /* U+0027 "'" */
    0xff, 0x80,

    /* U+0028 "(" */
    0x0, 0x88, 0xc4, 0x63, 0x18, 0xc6, 0x10, 0xc2,
    0x8, 0x0,

    /* U+0029 ")" */
    0x2, 0x8, 0x61, 0xc, 0x63, 0x18, 0xc4, 0x62,
    0x20, 0x0,

    /* U+002A "*" */
    0x30, 0x63, 0xb9, 0x82, 0x89, 0x80,

    /* U+002B "+" */
    0x8, 0x4, 0x2, 0x1, 0xf, 0xf8, 0x40, 0x20,
    0x10,

    /* U+002C "," */
    0x6c, 0x94, 0x0,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x4, 0x20, 0x82, 0x10, 0x41, 0x8, 0x20, 0x84,
    0x10, 0x42, 0x0,

    /* U+0030 "0" */
    0x38, 0x8b, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc6,
    0x88, 0xe0,

    /* U+0031 "1" */
    0x31, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xcf,
    0xc0,

    /* U+0032 "2" */
    0x3d, 0x8f, 0x18, 0x30, 0x61, 0x86, 0x10, 0x41,
    0xff, 0xf8,

    /* U+0033 "3" */
    0x3c, 0x8f, 0x18, 0x30, 0xc6, 0x3, 0x3, 0x87,
    0x8d, 0xf0,

    /* U+0034 "4" */
    0xc, 0xc, 0x3c, 0x2c, 0x4c, 0x4c, 0x8c, 0xff,
    0xc, 0xc, 0xc,

    /* U+0035 "5" */
    0x7e, 0xfd, 0x2, 0x7, 0x81, 0xc1, 0x83, 0x87,
    0x89, 0xe0,

    /* U+0036 "6" */
    0xc, 0x30, 0x60, 0x40, 0xdc, 0xe7, 0xc3, 0xc3,
    0xc3, 0x62, 0x3c,

    /* U+0037 "7" */
    0xff, 0xfc, 0x10, 0x20, 0x41, 0x6, 0x8, 0x30,
    0x61, 0x80,

    /* U+0038 "8" */
    0x7d, 0x8f, 0x1e, 0x36, 0x87, 0x13, 0x63, 0xc7,
    0x8d, 0xf0,

    /* U+0039 "9" */
    0x3c, 0x46, 0xc3, 0xc3, 0xc3, 0x63, 0x3f, 0x6,
    0x6, 0x8, 0x70,

    /* U+003A ":" */
    0xf0, 0xf,

    /* U+003B ";" */
    0x6c, 0x0, 0x1b, 0x29, 0x0,

    /* U+003C "<" */
    0x6, 0x10, 0xc6, 0x6, 0x2, 0x3, 0x1,

    /* U+003D "=" */
    0xfe, 0x0, 0x7, 0xf0,

    /* U+003E ">" */
    0xc0, 0x40, 0x60, 0x30, 0xc6, 0x10, 0x40,

    /* U+003F "?" */
    0xe7, 0x82, 0x13, 0xb2, 0x0, 0x6, 0x30,

    /* U+0040 "@" */
    0x7, 0xc0, 0xc1, 0x88, 0x4, 0x8f, 0x94, 0xc8,
    0xc4, 0x46, 0x62, 0x33, 0x11, 0x99, 0x94, 0x77,
    0x10, 0x0, 0x80, 0x2, 0x0, 0xf, 0xc0,

    /* U+0041 "A" */
    0x4, 0x1, 0xc0, 0x38, 0xb, 0x1, 0x30, 0x26,
    0x8, 0xc1, 0xfc, 0x21, 0x84, 0x33, 0xcf, 0x80,

    /* U+0042 "B" */
    0xfe, 0x31, 0x98, 0xcc, 0x66, 0x63, 0xe1, 0x8c,
    0xc3, 0x61, 0xb0, 0xff, 0x80,

    /* U+0043 "C" */
    0x1f, 0x18, 0x58, 0x38, 0xc, 0x6, 0x3, 0x1,
    0x80, 0x60, 0x90, 0x47, 0xc0,

    /* U+0044 "D" */
    0xfe, 0x18, 0x66, 0x19, 0x83, 0x60, 0xd8, 0x36,
    0xd, 0x83, 0x61, 0x98, 0x4f, 0xe0,

    /* U+0045 "E" */
    0xff, 0x30, 0x98, 0x4c, 0x46, 0x23, 0xf1, 0x88,
    0xc0, 0x61, 0xb0, 0xff, 0xe0,

    /* U+0046 "F" */
    0xff, 0x61, 0x61, 0x60, 0x62, 0x7e, 0x62, 0x62,
    0x60, 0x60, 0xf0,

    /* U+0047 "G" */
    0x1f, 0x8, 0x66, 0xb, 0x0, 0xc0, 0x30, 0xc,
    0x3f, 0x6, 0x61, 0x88, 0x61, 0xf0,

    /* U+0048 "H" */
    0xfb, 0xec, 0x19, 0x83, 0x30, 0x66, 0xc, 0xff,
    0x98, 0x33, 0x6, 0x60, 0xcc, 0x1b, 0xef, 0x80,

    /* U+0049 "I" */
    0xf6, 0x66, 0x66, 0x66, 0x66, 0xf0,

    /* U+004A "J" */
    0x7c, 0x61, 0x86, 0x18, 0x61, 0x86, 0x18, 0x61,
    0x84, 0xd3, 0x80,

    /* U+004B "K" */
    0xf3, 0xd8, 0x46, 0x21, 0x90, 0x6c, 0x1b, 0x87,
    0x61, 0x9c, 0x63, 0x18, 0xef, 0x3c,

    /* U+004C "L" */
    0xf8, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60,
    0x61, 0x61, 0xff,

    /* U+004D "M" */
    0xf8, 0x1c, 0xe0, 0xe3, 0x83, 0x8b, 0x16, 0x2c,
    0x58, 0x99, 0x62, 0x69, 0x89, 0xa6, 0x23, 0x18,
    0x8c, 0x6f, 0x93, 0xc0,

    /* U+004E "N" */
    0xf1, 0xee, 0x9, 0xe1, 0x2e, 0x24, 0xc4, 0x8c,
    0x91, 0xd2, 0x1e, 0x41, 0xc8, 0x1b, 0xc3, 0x0,

    /* U+004F "O" */
    0x1e, 0x18, 0x66, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0x41, 0x98, 0x61, 0xe0,

    /* U+0050 "P" */
    0xfe, 0x31, 0x98, 0x6c, 0x36, 0x1b, 0x19, 0xf0,
    0xc0, 0x60, 0x30, 0x3e, 0x0,

    /* U+0051 "Q" */
    0x1e, 0x8, 0x66, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xd8, 0x62, 0x10, 0x70, 0xc,
    0x1, 0x80, 0x38,

    /* U+0052 "R" */
    0xff, 0x18, 0x66, 0x19, 0x86, 0x63, 0x1f, 0x6,
    0x31, 0x8c, 0x63, 0x18, 0xef, 0x9c,

    /* U+0053 "S" */
    0x3e, 0xc2, 0xc2, 0xc0, 0xf0, 0x3e, 0xf, 0x3,
    0x83, 0x83, 0x7c,

    /* U+0054 "T" */
    0xff, 0xf3, 0x18, 0xc4, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x3, 0xf0,

    /* U+0055 "U" */
    0xf3, 0xec, 0x11, 0x82, 0x30, 0x46, 0x8, 0xc1,
    0x18, 0x23, 0x4, 0x60, 0x86, 0x20, 0x78, 0x0,

    /* U+0056 "V" */
    0xf9, 0xe6, 0x10, 0xc2, 0x18, 0x41, 0x90, 0x32,
    0x7, 0x40, 0x70, 0xe, 0x0, 0xc0, 0x10, 0x0,

    /* U+0057 "W" */
    0xfb, 0xef, 0x30, 0xc2, 0x31, 0xc4, 0x31, 0xc4,
    0x3a, 0x64, 0x1a, 0x68, 0x1a, 0x68, 0x1a, 0x38,
    0xc, 0x38, 0xc, 0x30, 0xc, 0x10,

    /* U+0058 "X" */
    0xf9, 0xc6, 0x20, 0x64, 0xf, 0x0, 0xc0, 0x1c,
    0x3, 0x80, 0xb8, 0x13, 0x4, 0x33, 0xcf, 0x80,

    /* U+0059 "Y" */
    0xf9, 0xdc, 0x43, 0x10, 0xe8, 0x1a, 0x7, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x3, 0xf0,

    /* U+005A "Z" */
    0xff, 0x86, 0x86, 0xc, 0x1c, 0x18, 0x30, 0x30,
    0x61, 0x61, 0xff,

    /* U+005B "[" */
    0xfc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcf,

    /* U+005C "\\" */
    0x81, 0x4, 0x10, 0x20, 0x82, 0x4, 0x10, 0x40,
    0x82, 0x8, 0x10,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3f,

    /* U+005E "^" */
    0x10, 0x51, 0x12, 0x28, 0x20,

    /* U+005F "_" */
    0xfe,

    /* U+0060 "`" */
    0xd8, 0x80,

    /* U+0061 "a" */
    0x3c, 0x66, 0x46, 0x1e, 0x66, 0xc6, 0xc6, 0x7f,

    /* U+0062 "b" */
    0x60, 0x70, 0x18, 0xc, 0x6, 0xe3, 0x99, 0x86,
    0xc3, 0x61, 0xb0, 0xd8, 0xdf, 0xc0,

    /* U+0063 "c" */
    0x3c, 0xcf, 0xe, 0xc, 0x18, 0x18, 0x9e,

    /* U+0064 "d" */
    0x3, 0x3, 0x80, 0xc0, 0x63, 0xb3, 0x3b, 0xd,
    0x86, 0xc3, 0x61, 0x98, 0xc7, 0xf0,

    /* U+0065 "e" */
    0x3c, 0x8f, 0x1f, 0xfc, 0x18, 0x18, 0x9e,

    /* U+0066 "f" */
    0x1c, 0x49, 0x83, 0xf, 0x8c, 0x18, 0x30, 0x60,
    0xc1, 0x87, 0x80,

    /* U+0067 "g" */
    0x3b, 0x64, 0x66, 0x66, 0x66, 0x38, 0x40, 0x7e,
    0x3f, 0xc3, 0xc3, 0x7c,

    /* U+0068 "h" */
    0x60, 0x70, 0x18, 0xc, 0x6, 0xe3, 0x99, 0x8c,
    0xc6, 0x63, 0x31, 0x98, 0xde, 0xf0,

    /* U+0069 "i" */
    0x66, 0x0, 0x6e, 0x66, 0x66, 0x6f,

    /* U+006A "j" */
    0x18, 0xc0, 0x1, 0x9c, 0x63, 0x18, 0xc6, 0x31,
    0x8f, 0x5c,

    /* U+006B "k" */
    0xe0, 0x30, 0x18, 0xc, 0x6, 0x73, 0x21, 0xa0,
    0xf8, 0x6c, 0x33, 0x19, 0x9e, 0x70,

    /* U+006C "l" */
    0x6e, 0x66, 0x66, 0x66, 0x66, 0x6f,

    /* U+006D "m" */
    0x6e, 0x73, 0xce, 0x66, 0x31, 0x98, 0xc6, 0x63,
    0x19, 0x8c, 0x66, 0x31, 0xbd, 0xef,

    /* U+006E "n" */
    0x6e, 0x79, 0x98, 0xcc, 0x66, 0x33, 0x19, 0x8d,
    0xef,

    /* U+006F "o" */
    0x3c, 0x42, 0xc3, 0xc3, 0xc3, 0xc3, 0x42, 0x3c,

    /* U+0070 "p" */
    0x6e, 0x79, 0x98, 0x6c, 0x36, 0x1b, 0xd, 0x8c,
    0xfc, 0x60, 0x30, 0x18, 0x1e, 0x0,

    /* U+0071 "q" */
    0x39, 0x33, 0xb0, 0xd8, 0x6c, 0x36, 0x19, 0x8c,
    0x7e, 0x3, 0x1, 0x80, 0xc0, 0xf0,

    /* U+0072 "r" */
    0x6d, 0xe9, 0x83, 0x6, 0xc, 0x18, 0x78,

    /* U+0073 "s" */
    0x7b, 0x2c, 0x3e, 0x3e, 0x38, 0xfe,

    /* U+0074 "t" */
    0x23, 0x19, 0xf6, 0x31, 0x8c, 0x63, 0xe,

    /* U+0075 "u" */
    0xe7, 0x31, 0x98, 0xcc, 0x66, 0x33, 0x19, 0x9c,
    0x77,

    /* U+0076 "v" */
    0xf3, 0x31, 0xc, 0x86, 0x83, 0x40, 0xe0, 0x60,
    0x10,

    /* U+0077 "w" */
    0xf7, 0xbb, 0x18, 0x99, 0x48, 0x6b, 0x43, 0x5a,
    0xc, 0x60, 0x63, 0x3, 0x18,

    /* U+0078 "x" */
    0xf3, 0x99, 0xf, 0x3, 0x1, 0xc1, 0x70, 0x99,
    0xcf,

    /* U+0079 "y" */
    0xf3, 0xb1, 0xc, 0x86, 0x41, 0x40, 0xe0, 0x70,
    0x10, 0x8, 0x8, 0x34, 0x1c, 0x0,

    /* U+007A "z" */
    0xff, 0x18, 0x70, 0xc3, 0xe, 0x58, 0xff,

    /* U+007B "{" */
    0x36, 0x66, 0x22, 0x4c, 0x22, 0x66, 0x63,

    /* U+007C "|" */
    0xff, 0xff,

    /* U+007D "}" */
    0xc6, 0x66, 0x44, 0x23, 0x44, 0x66, 0x6c,

    /* U+007E "~" */
    0x63, 0x26, 0x30,

    /* U+2103 "℃" */
    0x70, 0xf4, 0x4c, 0x62, 0xe3, 0x16, 0x17, 0x30,
    0x1, 0x80, 0xc, 0x0, 0x60, 0x3, 0x8, 0x18,
    0x40, 0x62, 0x1, 0xe0,

    /* U+4E1C "东" */
    0x4, 0x0, 0xc, 0x0, 0x30, 0x33, 0xff, 0xf0,
    0xc0, 0x3, 0x30, 0xc, 0x66, 0x1f, 0xfe, 0x11,
    0x80, 0x13, 0x60, 0x76, 0x61, 0x8c, 0x62, 0x18,
    0xc8, 0x70, 0x80, 0xc0, 0x0,

    /* U+4E2D "中" */
    0x6, 0x0, 0x30, 0x21, 0x89, 0xff, 0xec, 0x63,
    0x63, 0x1b, 0x18, 0xd8, 0xc6, 0xff, 0xf6, 0x31,
    0x81, 0x80, 0xc, 0x0, 0x60, 0x3, 0x0,

    /* U+4E91 "云" */
    0x0, 0x61, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x6f, 0xff, 0xc1, 0x80, 0x6, 0x0,
    0x32, 0x1, 0x86, 0xc, 0xc, 0x40, 0x39, 0xff,
    0x64, 0x1, 0x80,

    /* U+4F18 "优" */
    0x1d, 0xa0, 0x33, 0x60, 0xc6, 0x41, 0x8c, 0x63,
    0x7f, 0xce, 0x3c, 0x1c, 0x78, 0x58, 0xf0, 0x31,
    0xe0, 0x62, 0xc0, 0xcd, 0x81, 0x93, 0x23, 0x66,
    0x47, 0xf, 0xc0,

    /* U+4F34 "伴" */
    0x0, 0x0, 0x63, 0x1, 0xcd, 0xcc, 0xb6, 0x32,
    0xd0, 0xc3, 0x27, 0x7f, 0xdc, 0x30, 0xb0, 0xc0,
    0xc3, 0x33, 0xff, 0xcc, 0x30, 0x30, 0xc0, 0xc3,
    0x3, 0xc, 0x0,

    /* U+51B0 "冰" */
    0x0, 0xc1, 0x81, 0x81, 0x83, 0x21, 0x96, 0x61,
    0xfc, 0x84, 0x7e, 0x8, 0xb8, 0x13, 0x70, 0x46,
    0xd1, 0x89, 0xb1, 0x23, 0x33, 0x86, 0x66, 0x7c,
    0x8, 0x38, 0x0,

    /* U+51BB "冻" */
    0x0, 0x3, 0xe, 0x6, 0x30, 0x9b, 0xff, 0x12,
    0x0, 0x5b, 0x2, 0xcd, 0xb, 0xfe, 0x20, 0xc1,
    0x1b, 0xc, 0x4d, 0x93, 0x33, 0x70, 0xcd, 0x7,
    0x0,

    /* U+5305 "包" */
    0x0, 0x0, 0x70, 0x1, 0x82, 0xf, 0xfc, 0x30,
    0x31, 0x84, 0xc7, 0xfb, 0x2c, 0x6c, 0x31, 0xb0,
    0xfe, 0xc3, 0x6, 0xc, 0x1a, 0x30, 0x8, 0xc0,
    0x63, 0xff, 0xc0,

    /* U+5317 "北" */
    0xc, 0xc0, 0x19, 0x80, 0x33, 0x20, 0x66, 0x6f,
    0xcd, 0x81, 0x9a, 0x3, 0x38, 0x6, 0x60, 0xc,
    0xc0, 0x39, 0x83, 0xb3, 0x6, 0x66, 0x20, 0xcf,
    0xe1, 0x80, 0x0,

    /* U+5357 "南" */
    0x3, 0x0, 0xc, 0x6f, 0xff, 0xc0, 0xc0, 0x43,
    0x11, 0xff, 0xe6, 0x89, 0x99, 0x26, 0x6f, 0xf9,
    0x8c, 0x67, 0xff, 0x98, 0xc6, 0x63, 0x19, 0x8c,
    0xc0,

    /* U+53F7 "号" */
    0x10, 0x20, 0x3f, 0xe0, 0x60, 0xc0, 0xc1, 0x81,
    0xff, 0x3, 0x1, 0x9f, 0xff, 0x86, 0x0, 0x18,
    0x10, 0x3f, 0xf0, 0x0, 0xc0, 0x1, 0x80, 0xf,
    0x0, 0xc, 0x0,

    /* U+5408 "合" */
    0x3, 0x0, 0xc, 0x0, 0x6c, 0x1, 0x18, 0x8,
    0x3c, 0x41, 0x76, 0xfe, 0x80, 0x8, 0x1f, 0xf0,
    0x60, 0xc1, 0x83, 0x6, 0xc, 0x1f, 0xf0, 0x60,
    0xc0,

    /* U+591A "多" */
    0x6, 0x0, 0x71, 0x3, 0xfc, 0x30, 0xc2, 0xcc,
    0x23, 0xc0, 0x3c, 0xe, 0x7e, 0x4, 0x38, 0xf3,
    0x98, 0xb8, 0x7, 0x80, 0xf0, 0x38, 0x0,

    /* U+5927 "大" */
    0x3, 0x0, 0xc, 0x0, 0x30, 0x0, 0xc2, 0xff,
    0xfc, 0xc, 0x0, 0x30, 0x1, 0xa0, 0x6, 0x80,
    0x11, 0x0, 0xc6, 0x6, 0xe, 0x30, 0x1d, 0x0,
    0x20,

    /* U+5929 "天" */
    0x0, 0x10, 0xff, 0xe0, 0x30, 0x0, 0xc0, 0x3,
    0x9, 0xff, 0xf0, 0x30, 0x0, 0xa0, 0x6, 0x80,
    0x19, 0x0, 0xc6, 0x6, 0xf, 0x20, 0x1b, 0x0,
    0x0,

    /* U+5BA4 "室" */
    0x3, 0x0, 0xc, 0x23, 0xff, 0xd0, 0xa, 0xff,
    0xf0, 0x1c, 0x1, 0x83, 0xf, 0xf6, 0x23, 0x0,
    0xc, 0xc3, 0xff, 0x80, 0xc0, 0x3, 0xb, 0xff,
    0xf0,

    /* U+5BBF "宿" */
    0x3, 0x0, 0x6, 0x0, 0xff, 0xf3, 0xc0, 0xcd,
    0x7f, 0xc6, 0x18, 0xd, 0x24, 0x3b, 0xfc, 0xf6,
    0x18, 0x6f, 0xf0, 0xd8, 0x61, 0xb0, 0xc3, 0x7f,
    0x86, 0xc3, 0x0,

    /* U+5C0F "小" */
    0x2, 0x0, 0xc, 0x0, 0x30, 0x0, 0xc0, 0x3b,
    0x40, 0xcc, 0x83, 0x33, 0x8, 0xc6, 0x63, 0x19,
    0xc, 0x68, 0x30, 0x80, 0xc0, 0xf, 0x0, 0x1c,
    0x0,

    /* U+5C18 "尘" */
    0x3, 0x0, 0x4c, 0x3, 0xb6, 0xc, 0xcc, 0x63,
    0x19, 0xc, 0x60, 0x0, 0x0, 0xc0, 0x3, 0x11,
    0xff, 0xe0, 0x30, 0x0, 0xc0, 0x3, 0xb, 0xff,
    0xf0,

    /* U+5C71 "山" */
    0x3, 0x0, 0xc, 0x0, 0x30, 0x1c, 0xc7, 0x63,
    0x19, 0x8c, 0x66, 0x31, 0x98, 0xc6, 0x63, 0x19,
    0x8c, 0x66, 0x31, 0x98, 0xc6, 0x7f, 0xf8, 0x80,
    0x60,

    /* U+5DDE "州" */
    0x19, 0x98, 0x66, 0x61, 0x99, 0x86, 0x66, 0x5d,
    0xd9, 0xff, 0xed, 0xff, 0x86, 0x66, 0x19, 0x98,
    0xc6, 0x63, 0x19, 0x88, 0x66, 0x41, 0x98,

    /* U+5DEE "差" */
    0x10, 0x0, 0x33, 0x80, 0xc8, 0x9f, 0xff, 0x7,
    0x11, 0xff, 0xe0, 0x60, 0xbf, 0xff, 0xc, 0x0,
    0x3f, 0xe1, 0x18, 0x8, 0x60, 0x41, 0x88, 0xff,
    0xf0,

    /* U+5E90 "庐" */
    0x1, 0x0, 0x83, 0x19, 0xff, 0xfb, 0xc, 0x6,
    0x89, 0xd, 0xff, 0x1b, 0x6, 0x36, 0xc, 0x6f,
    0xf8, 0xd8, 0x31, 0xb0, 0x2, 0x40, 0xd, 0x80,
    0x12, 0x0, 0x8, 0x0, 0x0,

    /* U+5F3A "强" */
    0x9, 0x8, 0xfb, 0xf8, 0x34, 0x30, 0x68, 0x64,
    0xdf, 0xcf, 0x8c, 0x10, 0x7f, 0x20, 0xb6, 0x7d,
    0x6c, 0x1b, 0xf8, 0x35, 0x80, 0x63, 0x63, 0xff,
    0x63, 0x0, 0xc0,

    /* U+626C "扬" */
    0x30, 0x10, 0x67, 0xf0, 0xc0, 0xc1, 0xc3, 0xf,
    0xcc, 0x6, 0x30, 0xd, 0xff, 0x1c, 0x5e, 0xf1,
    0xad, 0x62, 0xd8, 0xc9, 0x31, 0xa4, 0xe7, 0x13,
    0x8c, 0x6, 0x0,

    /* U+6674 "晴" */
    0x0, 0x42, 0x1, 0x2f, 0xbf, 0xf6, 0x12, 0xd9,
    0xfb, 0x7f, 0xff, 0x81, 0x36, 0xfe, 0xdb, 0x1b,
    0x6f, 0xef, 0xbf, 0xb0, 0xc6, 0x3, 0x18, 0xc,
    0xe0,

    /* U+66B4 "暴" */
    0x10, 0x20, 0x3f, 0xe0, 0x60, 0xc0, 0xff, 0x81,
    0xff, 0x0, 0xca, 0xf, 0xfe, 0x3, 0x24, 0x7f,
    0xfc, 0x1b, 0x40, 0x77, 0xf3, 0x2e, 0x60, 0xff,
    0x3, 0x36, 0x0, 0xe0, 0x0,

    /* U+6709 "有" */
    0x0, 0x0, 0x18, 0x0, 0x60, 0xbf, 0xff, 0xc,
    0x0, 0x60, 0x81, 0xff, 0xe, 0xc, 0x5f, 0xf2,
    0x60, 0xc1, 0x83, 0x7, 0xfc, 0x18, 0x30, 0x63,
    0xc1, 0x86, 0x0,

    /* U+697C "楼" */
    0x38, 0x60, 0x66, 0xd8, 0xc5, 0xa1, 0xcb, 0xaf,
    0xff, 0xe6, 0x1f, 0xe, 0x5b, 0xbf, 0x32, 0x74,
    0xc5, 0x6f, 0xfe, 0xc6, 0x61, 0x98, 0x83, 0xf,
    0xc6, 0x61, 0xc0,

    /* U+6C5F "江" */
    0x30, 0x8, 0x2f, 0xf8, 0x23, 0x2, 0x46, 0x7,
    0xc, 0x6, 0x18, 0x4, 0x30, 0x10, 0x60, 0x60,
    0xc0, 0x41, 0x80, 0x83, 0x31, 0xff, 0xf2, 0x0,
    0x0,

    /* U+6C99 "沙" */
    0x60, 0xc0, 0xc3, 0x0, 0xce, 0x5, 0xb6, 0xd6,
    0xcd, 0x93, 0x32, 0x8c, 0xa, 0x36, 0x40, 0xd9,
    0x0, 0xc4, 0x6, 0x10, 0x30, 0x63, 0x81, 0x38,
    0x0,

    /* U+6CB3 "河" */
    0x40, 0x1, 0x80, 0x63, 0xff, 0xc8, 0xc, 0xdf,
    0xb1, 0xb6, 0xc2, 0xdb, 0xb, 0x6c, 0x2f, 0xb1,
    0x36, 0xcc, 0xdb, 0x12, 0xc, 0x40, 0x31, 0x3,
    0x80,

    /* U+6D6E "浮" */
    0x60, 0x70, 0xdf, 0xe2, 0x1, 0x1, 0x6e, 0x96,
    0xa1, 0x81, 0x42, 0xff, 0x8, 0x18, 0x40, 0x99,
    0x7f, 0xfc, 0x8, 0x10, 0x20, 0x63, 0x81, 0x86,
    0x0,

    /* U+6D74 "浴" */
    0x63, 0x60, 0x88, 0xe0, 0x61, 0xa6, 0x62, 0xe1,
    0x41, 0x8c, 0x82, 0x63, 0x89, 0xf, 0x5f, 0xf9,
    0x18, 0xc4, 0x63, 0x11, 0x8c, 0x67, 0xf1, 0x18,
    0xc0,

    /* U+6D77 "海" */
    0x23, 0x0, 0x66, 0x18, 0x4f, 0xf8, 0x70, 0xf,
    0x7f, 0x8f, 0x53, 0x5, 0x97, 0xf, 0xff, 0x26,
    0x98, 0xcd, 0xb0, 0x99, 0x71, 0x7f, 0xf3, 0x1,
    0x84, 0xe, 0x0,

    /* U+7279 "特" */
    0x18, 0x60, 0xf0, 0xd9, 0xe7, 0xf2, 0xf3, 0x7,
    0x86, 0x4b, 0x7f, 0xc6, 0x87, 0x3f, 0xff, 0x78,
    0x18, 0xb3, 0x30, 0x63, 0x60, 0xc0, 0xc1, 0x87,
    0x83, 0x6, 0x0,

    /* U+7476 "瑶" */
    0x0, 0x8, 0x10, 0x7b, 0xff, 0x81, 0x8a, 0x63,
    0x1e, 0x87, 0x33, 0x1f, 0x7f, 0x19, 0x30, 0x33,
    0xfe, 0x60, 0xc1, 0xed, 0xb3, 0x1b, 0x64, 0x3f,
    0xc0, 0x21, 0x80,

    /* U+7EA7 "级" */
    0x10, 0x0, 0x37, 0xf0, 0xc6, 0x63, 0x6c, 0xc7,
    0xdb, 0x4f, 0x37, 0xcc, 0x73, 0x10, 0xe6, 0x7d,
    0xcc, 0xc2, 0x70, 0x1c, 0xc3, 0xd1, 0xc6, 0x25,
    0xe8, 0xb0, 0x80,

    /* U+80A5 "肥" */
    0x49, 0x8, 0xff, 0xf9, 0xb6, 0xb3, 0x6d, 0x67,
    0xda, 0xcd, 0xb5, 0x9b, 0x6b, 0x36, 0xee, 0x7d,
    0x88, 0xdb, 0x1, 0xb6, 0x2, 0x6c, 0x24, 0xd8,
    0x53, 0xbf, 0xc0,

    /* U+826F "良" */
    0xc, 0x2, 0x34, 0x1f, 0xf0, 0xc1, 0x86, 0xc,
    0x3f, 0xe1, 0x83, 0xf, 0xf8, 0x68, 0xc3, 0x27,
    0x98, 0xc0, 0xc2, 0x7, 0x9e, 0x30, 0x38, 0x0,
    0x0,

    /* U+8700 "蜀" */
    0x20, 0x8, 0x7f, 0xf8, 0xdb, 0x31, 0xb6, 0x63,
    0xff, 0xc1, 0xff, 0x84, 0x83, 0x1f, 0xf6, 0x52,
    0x6c, 0x3f, 0xd8, 0x4a, 0x31, 0xff, 0x63, 0x87,
    0xc0, 0x3, 0x0,

    /* U+897F "西" */
    0x0, 0x1b, 0xff, 0xf0, 0x6c, 0x1, 0xb0, 0x7f,
    0xf9, 0x9b, 0x66, 0x6d, 0x99, 0xb6, 0x6c, 0xd9,
    0xa3, 0xe7, 0x1, 0x98, 0x6, 0x7f, 0xf9, 0x80,
    0x60,

    /* U+9634 "阴" */
    0x88, 0x13, 0xf7, 0xed, 0xd1, 0xb6, 0x46, 0xd1,
    0xfb, 0x84, 0x6d, 0x91, 0xb2, 0x46, 0xcd, 0xfb,
    0x3c, 0x6d, 0xf1, 0xb6, 0x86, 0xc4, 0x7b, 0x20,
    0xc0,

    /* U+9635 "阵" */
    0x91, 0x83, 0xf4, 0x4d, 0x7f, 0xbc, 0xc0, 0xe2,
    0xc3, 0x8b, 0xe, 0x6d, 0x35, 0xfe, 0xd8, 0xc3,
    0x63, 0x2f, 0xff, 0xfc, 0x30, 0xc0, 0xc3, 0x3,
    0x0,

    /* U+96E8 "雨" */
    0x0, 0x1b, 0xff, 0xf0, 0x30, 0x10, 0xc4, 0x7f,
    0xf9, 0x8c, 0x67, 0xbd, 0x9b, 0xde, 0x63, 0x19,
    0xef, 0x66, 0xf7, 0x98, 0xc6, 0x63, 0x79, 0x8c,
    0x60,

    /* U+96EA "雪" */
    0x0, 0x21, 0xff, 0xc4, 0x20, 0x1f, 0xfe, 0x42,
    0x1b, 0xeb, 0xc0, 0x20, 0x4, 0x98, 0x3f, 0xf0,
    0x0, 0xc3, 0xff, 0x0, 0xc, 0x0, 0x31, 0xff,
    0xc0,

    /* U+96F7 "雷" */
    0x0, 0x31, 0xff, 0xe0, 0x30, 0x8f, 0xff, 0x43,
    0xb, 0xd, 0x1, 0xbe, 0x0, 0xc8, 0x3f, 0xf0,
    0xcc, 0xc3, 0xff, 0xc, 0xcc, 0x33, 0x30, 0xff,
    0xc0,

    /* U+96F9 "雹" */
    0x0, 0x10, 0xff, 0xe4, 0x30, 0x9f, 0xff, 0xfb,
    0x6a, 0xed, 0xc1, 0x30, 0xf, 0xfc, 0x60, 0x92,
    0xfe, 0x43, 0xff, 0xc, 0x6e, 0x30, 0x8, 0xff,
    0xe0,

    /* U+96FE "雾" */
    0x0, 0x10, 0x3f, 0xf0, 0xff, 0xf3, 0xef, 0xe4,
    0x18, 0x83, 0xbe, 0x3, 0xfc, 0xa, 0x30, 0x63,
    0xfc, 0x38, 0xf8, 0xff, 0xc0, 0x30, 0x80, 0xc3,
    0x6, 0xe, 0x0,

    /* U+973E "霾" */
    0x0, 0x18, 0x7f, 0xf8, 0x84, 0x13, 0xff, 0xf7,
    0xdf, 0x83, 0xbe, 0x6, 0x7f, 0x36, 0xb6, 0x2f,
    0xfc, 0x72, 0xd8, 0x67, 0xf3, 0xe3, 0x67, 0xcf,
    0x41, 0x7f, 0xc0,

    /* U+98CE "风" */
    0x20, 0x20, 0x7f, 0xe0, 0xc0, 0xc1, 0x85, 0x83,
    0x9b, 0x6, 0xb6, 0xc, 0xcc, 0x19, 0x98, 0x33,
    0xb0, 0x6f, 0x60, 0xd3, 0xe1, 0x46, 0xe7, 0x1,
    0xc8, 0x1, 0xe0, 0x1, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 60, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 84, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 106, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 8, .adv_w = 147, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 140, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 34, .adv_w = 233, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 193, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 55, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 70, .adv_w = 96, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 80, .adv_w = 96, .box_w = 5, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 90, .adv_w = 117, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 96, .adv_w = 144, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 105, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 108, .adv_w = 88, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 109, .adv_w = 80, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 96, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 121, .adv_w = 140, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 140, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 140, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 140, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 140, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 140, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 140, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 140, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 140, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 140, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 80, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 80, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 230, .adv_w = 144, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 237, .adv_w = 144, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 241, .adv_w = 144, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 248, .adv_w = 114, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 232, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 278, .adv_w = 179, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 170, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 307, .adv_w = 168, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 190, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 334, .adv_w = 160, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 155, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 182, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 208, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 102, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 103, .box_w = 6, .box_h = 14, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 405, .adv_w = 183, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 419, .adv_w = 156, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 240, .box_w = 14, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 196, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 189, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 480, .adv_w = 161, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 189, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 512, .adv_w = 179, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 142, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 166, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 551, .adv_w = 196, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 567, .adv_w = 177, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 261, .box_w = 16, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 174, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 621, .adv_w = 168, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 635, .adv_w = 150, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 646, .adv_w = 89, .box_w = 4, .box_h = 14, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 653, .adv_w = 96, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 664, .adv_w = 89, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 671, .adv_w = 144, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 676, .adv_w = 142, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 677, .adv_w = 107, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 679, .adv_w = 140, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 687, .adv_w = 160, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 701, .adv_w = 135, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 708, .adv_w = 157, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 722, .adv_w = 138, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 729, .adv_w = 96, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 740, .adv_w = 142, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 752, .adv_w = 164, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 766, .adv_w = 83, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 772, .adv_w = 79, .box_w = 5, .box_h = 16, .ofs_x = -2, .ofs_y = -4},
    {.bitmap_index = 782, .adv_w = 155, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 796, .adv_w = 84, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 802, .adv_w = 242, .box_w = 14, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 816, .adv_w = 164, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 825, .adv_w = 149, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 833, .adv_w = 160, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 847, .adv_w = 153, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 861, .adv_w = 119, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 868, .adv_w = 119, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 874, .adv_w = 93, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 881, .adv_w = 161, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 890, .adv_w = 138, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 899, .adv_w = 209, .box_w = 13, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 912, .adv_w = 144, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 921, .adv_w = 140, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 935, .adv_w = 124, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 942, .adv_w = 91, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 949, .adv_w = 70, .box_w = 1, .box_h = 16, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 951, .adv_w = 91, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 958, .adv_w = 144, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 961, .adv_w = 240, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 981, .adv_w = 240, .box_w = 15, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1010, .adv_w = 240, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1033, .adv_w = 240, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1060, .adv_w = 240, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1087, .adv_w = 240, .box_w = 14, .box_h = 15, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1114, .adv_w = 240, .box_w = 15, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1141, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1166, .adv_w = 240, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1193, .adv_w = 240, .box_w = 15, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1220, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1245, .adv_w = 240, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1272, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1297, .adv_w = 240, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1320, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1345, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1370, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1395, .adv_w = 240, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1422, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1447, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1472, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1497, .adv_w = 240, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1520, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1545, .adv_w = 240, .box_w = 15, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1574, .adv_w = 240, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1601, .adv_w = 240, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1628, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1653, .adv_w = 240, .box_w = 15, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1682, .adv_w = 240, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1709, .adv_w = 240, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1736, .adv_w = 240, .box_w = 15, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1761, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1786, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1811, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1836, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1861, .adv_w = 240, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1888, .adv_w = 240, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1915, .adv_w = 240, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1942, .adv_w = 240, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1969, .adv_w = 240, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1996, .adv_w = 240, .box_w = 13, .box_h = 15, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 2021, .adv_w = 240, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2048, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2073, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2098, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2123, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2148, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2173, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2198, .adv_w = 240, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2223, .adv_w = 240, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2250, .adv_w = 240, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2277, .adv_w = 240, .box_w = 15, .box_h = 15, .ofs_x = 0, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x2d19, 0x2d2a, 0x2d8e, 0x2e15, 0x2e31, 0x30ad, 0x30b8,
    0x3202, 0x3214, 0x3254, 0x32f4, 0x3305, 0x3817, 0x3824, 0x3826,
    0x3aa1, 0x3abc, 0x3b0c, 0x3b15, 0x3b6e, 0x3cdb, 0x3ceb, 0x3d8d,
    0x3e37, 0x4169, 0x4571, 0x45b1, 0x4606, 0x4879, 0x4b5c, 0x4b96,
    0x4bb0, 0x4c6b, 0x4c71, 0x4c74, 0x5176, 0x5373, 0x5da4, 0x5fa2,
    0x616c, 0x65fd, 0x687c, 0x7531, 0x7532, 0x75e5, 0x75e7, 0x75f4,
    0x75f6, 0x75fb, 0x763b, 0x77cb
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 8451, .range_length = 30668, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 52, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 2, 0, 0, 3,
    1, 4, 5, 6, 0, 7, 8, 7,
    9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 10, 0, 0, 0,
    11, 12, 13, 14, 15, 16, 17, 18,
    19, 20, 20, 21, 22, 23, 20, 24,
    25, 26, 25, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 4, 36, 5, 0,
    37, 0, 38, 39, 40, 41, 42, 43,
    44, 45, 46, 47, 48, 41, 45, 45,
    39, 39, 49, 50, 51, 52, 53, 54,
    54, 55, 54, 56, 4, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 3, 0, 0, 4,
    2, 5, 6, 7, 0, 8, 9, 10,
    11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 12, 13, 0, 0, 0,
    14, 15, 16, 17, 18, 17, 17, 17,
    18, 17, 17, 19, 17, 17, 20, 20,
    18, 17, 18, 17, 21, 22, 23, 24,
    25, 26, 27, 28, 5, 29, 6, 0,
    30, 0, 31, 32, 33, 33, 33, 34,
    35, 32, 36, 37, 32, 32, 38, 38,
    33, 39, 33, 38, 40, 41, 42, 43,
    43, 44, 45, 46, 5, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, -3, 0, 0, -33,
    0, -33, -21, 0, 0, 0, 0, -35,
    0, -4, -3, 0, -4, 6, -2, 0,
    0, -1, 0, 0, 0, 0, -10, 0,
    -12, -6, -13, -2, 0, -3, -6, -10,
    -2, -2, 0, -2, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, -10, 0, 4,
    0, 0, 2, 0, 0, -3, -3, -2,
    -3, 0, 0, 0, 0, 0, 0, -1,
    -1, 0, 0, 0, 0, 0, 1, 0,
    4, 0, 4, 0, 0, 0, 0, 0,
    0, -9, 0, -1, -5, -1, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -16, -8, -18, -17, 0, -17, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, -8, -17, 3,
    0, 0, -11, 0, 0, -8, -8, 0,
    0, -7, 0, -5, 18, 0, -4, 0,
    -1, 0, 0, 0, -1, 0, 0, 0,
    -3, 0, -7, -3, 0, 0, 31, -3,
    0, -5, -3, -6, -5, -4, 3, -4,
    0, 0, 0, 0, -2, -17, 0, -11,
    0, -11, -5, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, -5, -5, -8,
    -8, -5, -8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -27, 0, -27,
    0, 0, 0, 0, 0, -33, 0, -4,
    -4, 0, 0, 5, 0, 0, 0, -1,
    0, 0, 0, 0, -10, 0, -10, -5,
    -12, 0, 0, -1, -1, -7, 0, -2,
    0, -3, 0, -4, 0, -21, 0, 0,
    -11, -10, -32, 0, -8, 0, 0, 0,
    0, 0, 0, 0, 0, -12, 2, 0,
    0, -24, -17, -35, -33, 0, -28, 0,
    -32, 0, -5, -1, -7, -2, -3, 0,
    6, 0, -8, -2, -10, -11, -23, 0,
    -11, -3, 0, 0, 0, 0, 0, -11,
    0, -8, 0, -8, -8, 0, 0, 0,
    0, -7, 0, 3, -5, -3, -1, -17,
    -3, -15, -14, -12, -16, -1, -8, 0,
    0, -2, 1, -1, 1, 0, 0, 0,
    0, 0, 0, 0, -1, -5, -2, 0,
    0, 0, -5, -9, -9, 0, 0, -35,
    -16, -35, -27, -6, -6, 0, -8, -21,
    0, 0, 0, 0, 0, 1, 0, 2,
    2, 0, 0, 0, 0, 0, -12, 0,
    -9, -1, -11, 0, 0, -6, -5, -8,
    0, -6, 0, -5, 0, -8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, 0, -1, -4, -8, -8, -1,
    -11, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -12, 0, -27, 0, -27, -18, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, -8, 0, 0, 0, 0,
    0, -9, -2, 3, -4, -3, 0, -2,
    -5, -6, -6, -6, -6, 0, 0, -21,
    0, -3, 0, -2, -1, 0, 0, 0,
    -2, 0, 0, 0, 0, -1, 1, 0,
    0, -33, 0, 0, 0, -7, -30, 0,
    -7, 0, 0, 0, 0, -1, 0, 1,
    -1, -7, -4, -1, 0, -18, -16, -29,
    -24, 0, -24, 0, -16, 0, -1, 0,
    -5, 0, -2, -1, -3, 0, -7, 0,
    -6, -8, -14, 0, -13, 0, 0, -6,
    0, 0, 0, -4, -4, -5, 2, -5,
    -7, 0, 0, 0, 2, -9, -5, -1,
    -3, -3, 0, -5, -7, -12, -9, -8,
    -12, -1, -4, -11, 0, -3, 1, -3,
    -1, 0, 0, 0, -3, 0, 0, -3,
    -2, -4, -2, 0, 0, 5, 0, 0,
    0, 2, 2, 0, 0, 0, 0, 1,
    1, 0, 1, -1, 0, -1, 0, 0,
    0, 0, -4, -1, -1, 0, -3, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, -4, -3, -1,
    -3, 0, 0, -3, 0, -2, 0, -5,
    -1, -11, 2, -11, -8, 0, 0, 0,
    2, -15, -6, 4, -4, -5, 0, -5,
    -6, -10, -11, -11, -13, -2, -4, -22,
    -2, -3, 0, 0, -3, 0, 0, 0,
    -3, -3, 0, 0, 0, -3, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, -1, 0, 0, 0, -5, -3,
    -3, -1, -3, 0, 0, 0, 0, 0,
    -1, 0, -1, 0, 0, 0, -5, 0,
    -2, -4, -7, 0, -6, 0, 0, 3,
    0, -8, -5, 0, 2, -26, -6, -26,
    -19, -3, -3, 0, -10, -24, -2, -2,
    -1, -1, 0, 3, -1, 0, 0, -1,
    0, -1, 4, -35, -13, -2, -13, -8,
    -15, -4, -3, -8, -12, -13, -2, -8,
    -8, -10, -8, -9, 0, -2, 0, 0,
    0, 0, -2, -3, 3, -3, -5, 0,
    0, 0, 2, -6, -2, 3, -2, -2,
    0, -6, -6, -10, -10, -5, -10, -4,
    -2, -10, 0, -1, 0, 0, 0, 0,
    0, 0, -3, 0, 0, -1, -3, -5,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, -7, -2, -3, 0, -1, 0,
    -8, -4, -4, -8, -9, 0, -7, 0,
    0, 0, 0, -6, -5, 0, 0, -16,
    -3, -16, -12, -6, -6, 0, -6, -12,
    -1, -4, -1, -2, -3, 0, -2, 0,
    0, -2, 0, -2, 0, -22, -9, 0,
    -7, -9, -9, -3, -3, -6, -10, -7,
    -6, -9, -9, -8, -7, -8, 0, -2,
    0, 0, -2, 0, -3, 0, -8, 0,
    0, 0, 0, -1, 0, 3, 0, -7,
    -3, 1, 0, -2, -5, -2, -2, 0,
    -3, 2, 0, 0, -2, 0, -6, 0,
    -1, 0, -2, 0, -7, 0, -8, -8,
    -13, 0, -13, 0, 0, -35, 0, 0,
    0, -4, -27, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, -3, -3, -1,
    -2, -19, -12, -27, -24, -2, -22, -1,
    -12, 0, 0, 0, 0, -1, 0, 0,
    0, 0, -3, 0, -2, -4, -12, 0,
    -10, 0, 0, 0, 0, -6, -2, 0,
    0, -12, -3, -12, -13, -4, -4, 0,
    -3, -12, -2, -4, -1, 0, -2, 0,
    -3, 0, 0, -4, 0, -3, 0, -16,
    -8, 0, -7, -6, -8, -5, -5, -6,
    -10, -7, -6, -8, -8, -8, -8, -8,
    0, -4, 0, 0, 0, -5, -4, -10,
    3, -10, -3, 0, 0, 0, 5, -10,
    -4, 4, -3, -4, 0, -3, -5, -8,
    -6, -8, -8, 0, -1, -16, 0, -1,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 3,
    0, -7, -2, -3, 5, -31, -1, -31,
    -17, 2, 2, -1, -2, -21, -3, 1,
    -3, -1, 1, 1, -4, -3, -3, -6,
    -5, 0, 1, -43, -3, -3, -5, 0,
    -4, 0, 0, -1, 0, -3, 2, 0,
    3, 0, 4, 0, 0, -12, 0, 0,
    -2, -2, -6, 0, -5, 0, 0, 0,
    0, -1, 0, 3, 0, -5, -4, 1,
    0, -10, -12, -15, -13, 1, -13, 1,
    -8, 3, -1, 0, -4, 0, -1, 0,
    0, 0, -4, 0, -4, -6, -6, 0,
    -6, 0, 0, -2, 0, 0, 0, -4,
    0, -4, 0, -4, -3, 0, 0, 0,
    1, -6, -1, 0, -2, -1, -1, -4,
    -6, -6, -6, -4, -7, -2, 0, -13,
    0, -1, 0, -2, -1, 0, 0, 0,
    -3, 0, -3, -3, -5, -3, -5, 0,
    0, 6, 0, -9, -5, 0, 5, -24,
    -17, -24, -18, -1, -1, 0, -9, -19,
    0, -3, -1, -1, -1, 1, -3, 0,
    0, -2, 0, 0, 6, -26, -14, 0,
    -19, -5, -13, -2, -2, -9, -16, -13,
    -2, -12, -12, -14, -12, -16, 0, -1,
    0, -10, -5, -3, 0, -22, -4, -22,
    -19, -6, -6, -1, -6, -21, -5, -7,
    -4, -3, -5, -3, -4, -2, -1, -3,
    0, -2, 0, -25, -13, -1, -12, -8,
    -13, -7, -4, -7, -12, -11, -8, -12,
    -8, -12, -10, -12, 0, 0, 0, -17,
    -11, 0, 0, -39, -17, -39, -24, -11,
    -11, 0, -17, -30, 0, -11, 0, 0,
    -5, 0, -1, 1, 1, 0, 1, -3,
    3, -45, -21, -1, -22, -11, -23, -8,
    -8, -17, -18, -22, -10, -17, -13, -19,
    -15, -18, 0, 0, 0, -16, -11, 0,
    0, -35, -16, -35, -23, -11, -11, 0,
    -19, -28, 0, -10, 0, -1, -5, 0,
    -1, 1, 1, 0, 1, -3, 3, -40,
    -22, -1, -22, -11, -24, -8, -6, -13,
    -16, -19, -8, -16, -12, -17, -12, -18,
    0, -1, 0, -2, -5, 0, -1, 0,
    -12, 0, 0, -1, -1, 0, 0, 0,
    0, -8, -1, 0, -2, -3, -3, 0,
    0, 0, 0, 1, 2, 0, -3, 0,
    -8, 0, 0, -1, -2, 0, -8, -1,
    -8, -11, -18, 0, -14, 0, 0, 0,
    0, -15, -11, -1, 0, -25, -19, -25,
    -23, -13, -13, 0, -16, -25, 0, -12,
    0, 0, -8, 1, 0, 1, 1, 0,
    0, 0, 6, -28, -21, -1, -24, -13,
    -23, -11, -8, -16, -21, -22, -15, -19,
    -16, -19, -16, -22, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, -1, 0, 0,
    -1, -3, -4, -1, -1, 0, -1, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, -3, 0, -1, -4, -6, 0,
    -6, 0, 0, -21, 0, 0, 0, 0,
    0, 2, -8, 2, 0, 0, 0, 0,
    0, 0, 0, -7, 22, -2, -2, -18,
    -17, -24, -21, -2, -19, -2, -27, 0,
    -2, 0, -2, -2, 3, 0, 29, 0,
    0, -2, -5, -4, -9, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -17, 17, 0, -5, -26, -27, -42,
    -40, 0, -29, 0, 0, 0, -7, 0,
    -14, 0, 0, 0, 12, 0, -6, -6,
    -16, -13, -23, 0, -11, 0, -1, -17,
    0, 0, 0, -3, -12, 0, -1, 0,
    0, 0, 0, -2, 0, 1, -1, -4,
    -5, 0, 0, -16, -11, -23, -22, 0,
    -20, 0, -12, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, -5, 0, 0, -2,
    -5, 0, -4, 0, -1, -13, 0, 0,
    0, -6, -10, -6, 1, -6, -5, -2,
    -2, -3, 1, -12, -6, 0, -6, -4,
    -1, -16, -10, -20, -19, -8, -20, -1,
    -8, -14, -1, -1, 1, 0, 0, 0,
    0, 0, -2, 0, -1, -1, -1, -5,
    -3, 0, 0, -2, 0, 0, 0, -5,
    -2, -3, 0, -3, -2, 0, 0, -1,
    -1, -5, -6, 0, -8, -2, -1, -12,
    -9, -18, -17, -6, -17, -1, -6, -9,
    -1, -5, -1, 0, 0, 0, 0, 0,
    -3, 0, -1, -1, -2, -3, -1, 0,
    0, -6, 0, -3, 0, -2, -5, -1,
    -2, -1, 0, 0, 0, -4, -1, 0,
    0, -1, -2, 0, 0, -6, -6, -8,
    -9, 0, -11, 0, -1, 0, -2, 0,
    0, 0, -2, 0, 0, 0, -3, 0,
    0, -1, -3, 0, -3, 0, 0, -8,
    0, 0, 0, -5, -6, -4, 0, -4,
    -2, 0, 0, -2, 0, -5, -3, 0,
    -6, -2, -1, -14, -8, -18, -15, -5,
    -18, -1, -8, -11, -1, -4, 0, -1,
    0, 0, 0, 0, -2, 0, 0, 0,
    -1, -1, -1, 0, 12, 25, 0, 0,
    0, 25, 19, -8, -6, -8, -2, 0,
    0, 12, -1, -3, 13, 1, 14, 15,
    6, 19, 16, 21, 21, 17, 21, 15,
    28, -3, 0, -3, -4, 0, -1, 8,
    8, 0, 0, 0, 0, -2, 3, 0,
    3, 0, -1, 0, 0, -6, 0, -1,
    -1, 0, -4, 0, 6, 0, 0, -1,
    -1, 0, -3, 0, 19, -1, 0, -5,
    -8, -11, -12, 0, -15, 0, -6, 0,
    -4, -2, -3, 0, -2, 0, 14, 0,
    -1, 0, 0, 0, 2, 0, 3, 0,
    -1, -16, 0, -1, 0, -6, -15, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    -1, -2, -5, 0, 0, -17, -10, -23,
    -21, 0, -20, 0, -13, 0, -1, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    -1, -1, -7, 0, -7, 0, -1, -1,
    0, -2, 0, 0, -2, 0, 0, 0,
    0, 0, 0, -1, 0, 0, -1, 0,
    0, 0, 0, -6, -6, -7, -6, 0,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    -3, 0, -3, 0, 0, -1, 0, -3,
    0, 2, -2, -6, -1, -6, -2, -4,
    -4, -2, 0, -4, -3, -2, 6, -2,
    0, -2, -6, -6, -6, -3, -6, 0,
    0, -11, -1, -2, 0, 0, -2, 0,
    5, 0, -2, 0, 0, 0, 0, -1,
    0, -1, -2, -5, 0, -2, 0, -6,
    -4, -1, -9, -1, 0, -3, -3, -3,
    0, 3, -1, -2, -8, 1, 0, -14,
    -11, -17, -14, 0, -18, 2, -5, 0,
    0, 0, -5, 0, 0, 0, 0, 0,
    -4, -1, -1, -2, 0, 0, 0, 1,
    0, -7, 0, -3, 0, 1, -5, 1,
    -1, -2, 4, -1, 8, -2, 0, -4,
    -6, -1, 13, -4, 0, -13, -11, -19,
    -16, -3, -19, -1, -6, -3, -3, -1,
    -1, 0, 0, 0, 17, -1, 0, 0,
    0, 0, 0, -1, 3, -1, -1, 1,
    0, -10, 0, -8, 0, -25, -7, -25,
    -14, -2, -2, -3, -4, -17, -7, 0,
    -7, -5, 0, -2, -7, -12, -11, -15,
    -14, -2, -3, -24, -5, -5, -4, 0,
    -4, 0, 0, 0, 0, -2, 2, 0,
    4, 0, 4, 0, -1, -9, 0, 0,
    0, -6, -4, -5, 0, -5, -2, 0,
    0, -2, 0, -4, -4, 0, -7, -4,
    0, -10, -7, -18, -15, -1, -21, -1,
    -9, -11, -1, -4, 0, 0, -1, 0,
    0, 0, -2, 0, 0, -1, -1, -1,
    -1, 0, 0, -2, 0, 0, 0, 0,
    0, 0, -6, 0, 0, 0, 0, -2,
    0, 2, -1, 0, -4, 0, 0, -3,
    -5, -10, -8, 0, -11, 1, -2, 1,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 1, 0, -1, 1, 0, 0, 1,
    0, -10, 0, -1, 0, -2, -8, 0,
    0, 0, 0, -1, -1, -2, 0, 0,
    0, -2, -6, 0, 0, -13, -8, -17,
    -15, 0, -16, 0, -6, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, -2, 1,
    0, 0, -4, 0, -4, 0, -1, -2,
    0, -11, 0, -11, -2, -27, -6, -27,
    -14, -3, -3, -6, -6, -21, -9, 0,
    -11, -8, -1, -11, -9, -13, -11, -14,
    -16, -7, 0, -28, -6, -6, -6, 0,
    -6, 0, 0, 0, 0, -3, 1, 0,
    2, 0, 0, 0, 0, -2, 0, -2,
    0, -4, -5, 0, -9, 0, 0, 0,
    0, -2, -1, 1, 0, -3, -7, 0,
    0, -14, -10, -18, -16, 0, -19, 0,
    -2, 0, -1, 0, -5, 0, -2, 0,
    -2, 0, -5, 0, -1, -2, 0, 1,
    0, 0, 0, -1, 0, 0, 0, -4,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, -10,
    -8, -16, -14, 0, -17, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 1, 0, 1, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 56,
    .right_class_cnt     = 46,
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
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 1,
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
const lv_font_t ui_font_SY15 = {
#else
lv_font_t ui_font_SY15 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_SY15*/

