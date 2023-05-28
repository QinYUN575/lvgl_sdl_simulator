// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: 3d_Printer_2

#include "../ui.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

// IMAGE DATA: assets/nozzle.png
const LV_ATTRIBUTE_MEM_ALIGN uint8_t ui_img_nozzle_png_data[] = {
0xA8,0xA1,0xA1,0x7E,0xDE,0xDE,0xDE,0xEE,0xDE,0xDE,0xDE,0xEE,0x96,0x8E,0x8E,0xEE,0x81,0x76,0x76,0xDF,0x8F,0x86,0x86,0xDD,0x94,0x8B,0x8B,0xDD,0x9B,0x92,0x92,0xD9,0x9A,0x91,0x91,0xCC,0x98,0x90,0x90,0xCC,0x94,0x8B,0x8B,0xCC,0x89,0x7F,0x7F,0xC2,0x82,0x77,0x78,0xBB,0x67,0x5A,0x5A,0xBB,0xAC,0xA6,0xA6,0xBB,0xD9,0xD9,0xD9,0xAB,0xCD,0xCB,0xCB,0xAA,0x87,0x7D,0x7D,0x34,0x41,0x30,0x31,0x18,0xBD,0xB9,0xB9,0xF6,0xE0,0xE0,0xE0,0xFF,0x8D,0x84,0x85,0xFF,0x3C,0x2B,0x2B,0xFF,0x3C,0x2C,0x2C,0xFF,0x3C,0x2B,0x2C,0xFF,0x3C,0x2C,0x2C,0xFF,0x3C,0x2C,0x2C,0xFF,0x3C,0x2B,0x2B,0xFF,0x3C,0x2B,0x2B,0xFF,0x3C,0x2B,0x2B,0xFF,0x3C,0x2C,0x2C,0xFF,0x3C,0x2B,0x2B,0xFF,0xC8,0xC5,0xC5,0xFF,0xE0,0xE0,0xE0,0xFF,0x83,0x79,0x79,0xDD,0x3C,0x2C,0x2C,0x04,0x3C,0x2C,0x2B,0x00,0x6E,0x63,0x64,0x8F,0xE1,0xE1,0xE1,0xFF,0xD5,0xD4,0xD4,0xFF,0x49,0x3A,0x3A,0xFF,0x3C,0x2C,0x2B,0xFF,0x3C,0x2C,0x2B,0xFF,0x3C,0x2C,0x2C,0xFF,0x3C,0x2B,0x2B,0xFF,0x3C,0x2C,0x2C,0xFF,0x3C,0x2B,0x2C,0xFF,0x3C,0x2C,0x2B,0xFF,0x3C,0x2B,0x2C,0xFF,0x7E,0x74,0x74,0xFF,0xE0,0xE0,0xE0,0xFF,0xCC,0xCA,0xCA,0xFF,0x42,0x33,0x33,0x60,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2B,0x1A,0xC0,0xBD,0xBD,0xF7,0xE1,0xE1,0xE1,0xFF,0x97,0x90,0x90,0xFF,0x3C,0x2B,0x2C,0xFF,0x3C,0x2C,0x2C,0xFF,0x3C,0x2C,0x2C,0xFF,0x3C,0x2C,0x2B,0xFF,0x3C,0x2C,0x2B,0xFF,
    0x3C,0x2B,0x2C,0xFF,0x3C,0x2C,0x2B,0xFF,0x44,0x34,0x34,0xFF,0xD1,0xCF,0xCF,0xFF,0xE1,0xE1,0xE1,0xFF,0x7D,0x73,0x73,0xDB,0x3C,0x2C,0x2B,0x04,0x3C,0x2B,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x6E,0x63,0x63,0x93,0xE1,0xE1,0xE1,0xFF,0xD7,0xD6,0xD6,0xFF,0x4A,0x3C,0x3C,0xFF,0x3C,0x2B,0x2C,0xFF,0x3C,0x2C,0x2C,0xFF,0x3C,0x2C,0x2C,0xFF,0x3C,0x2B,0x2B,0xFF,0x3C,0x2C,0x2C,0xFF,0x3C,0x2B,0x2B,0xFF,0x85,0x7C,0x7C,0xFF,0xE1,0xE1,0xE1,0xFF,0xCC,0xCA,0xCA,0xFF,0x41,0x31,0x31,0x5C,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2B,0x00,0x3C,0x2C,0x2C,0x1C,0xBF,0xBC,0xBC,0xF8,0xE1,0xE1,0xE1,0xFF,0x93,0x8B,0x8B,0xFF,0x3D,0x2C,0x2C,0xFF,0x3C,0x2C,0x2B,0xFF,0x3C,0x2C,0x2C,0xFF,0x3C,0x2C,0x2C,0xFF,0x3C,0x2C,0x2B,0xFF,0x45,0x35,0x35,0xFF,0xD0,0xCE,0xCE,0xFF,0xE1,0xE1,0xE1,0xFF,0x79,0x6F,0x6F,0xD8,0x3C,0x2C,0x2C,0x03,0x3C,0x2C,0x2C,0x00,0x3C,0x2D,0x2B,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2B,0x00,0x70,0x65,0x65,0x96,0xE1,0xE1,0xE1,0xFF,0xD9,0xD8,0xD8,0xFF,0x4B,0x3C,0x3C,0xFF,0x3C,0x2C,0x2C,0xFF,0x3C,0x2C,0x2C,0xFF,0x3C,0x2C,0x2C,0xFF,0x3C,0x2C,0x2B,0xFF,0x81,0x78,0x77,0xFF,0xE1,0xE1,0xE1,0xFF,0xCA,0xC8,0xC8,0xFF,0x41,0x31,0x31,0x5A,0x3C,0x2C,0x2C,0x00,0x3C,0x2D,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2B,0x00,0x3C,0x2C,0x2C,0x00,
    0x3C,0x2C,0x2B,0x00,0x3C,0x2C,0x2C,0x1F,0xBE,0xBB,0xBB,0xF9,0xE1,0xE1,0xE1,0xFF,0x98,0x90,0x90,0xFF,0x3C,0x2C,0x2C,0xFF,0x3D,0x2C,0x2C,0xFF,0x3C,0x2C,0x2C,0xFF,0x43,0x35,0x34,0xFF,0xD3,0xD2,0xD2,0xFF,0xE1,0xE1,0xE1,0xFF,0x7E,0x74,0x74,0xD5,0x3C,0x2C,0x2C,0x02,0x3C,0x2C,0x2C,0x00,0x3D,0x2C,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x6C,0x61,0x61,0x99,0xE1,0xE1,0xE1,0xFF,0xD7,0xD6,0xD6,0xFF,0x4C,0x3E,0x3E,0xFF,0x3C,0x2C,0x2C,0xFF,0x3C,0x2C,0x2C,0xFF,0x84,0x7B,0x7B,0xFF,0xE1,0xE1,0xE1,0xFF,0xCA,0xC8,0xC7,0xFF,0x3F,0x31,0x30,0x56,0x3C,0x2C,0x2B,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3D,0x2D,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2D,0x2C,0x21,0xBF,0xBB,0xBB,0xFB,0xE1,0xE1,0xE1,0xFF,0x91,0x8A,0x8A,0xFF,0x3C,0x2C,0x2C,0xFF,0x43,0x32,0x32,0xFF,0xD0,0xCE,0xCE,0xFF,0xE1,0xE1,0xE1,0xFF,0x7B,0x70,0x70,0xD2,0x3C,0x2D,0x2C,0x02,0x3D,0x2C,0x2C,0x00,0x3D,0x2C,0x2C,0x00,0x3C,0x2D,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3D,0x2C,0x2C,0x00,0x3D,0x2C,0x2C,0x00,0x3C,0x2D,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3D,0x2C,0x2C,0x00,0x70,0x65,0x65,0x9D,0xE1,0xE1,0xE1,0xFF,0xDA,0xD9,0xD9,0xFF,0x3C,0x2C,0x2C,0xFF,0x79,0x6F,0x6F,0xFF,0xE1,0xE1,0xE1,0xFF,0xC9,0xC7,0xC7,0xFF,
    0x41,0x32,0x31,0x54,0x3D,0x2C,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2D,0x2C,0x00,0x3C,0x2D,0x2D,0x00,0x3D,0x2C,0x2C,0x00,0x3D,0x2C,0x2C,0x00,0x3D,0x2C,0x2C,0x00,0x3D,0x2C,0x2C,0x23,0xBF,0xBC,0xBB,0xFB,0xE1,0xE1,0xE1,0xFF,0xA1,0x9B,0x9B,0xFF,0xC6,0xC4,0xC4,0xFF,0xE1,0xE1,0xE1,0xFF,0x81,0x77,0x77,0xD0,0x3C,0x2C,0x2C,0x01,0x3D,0x2D,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2D,0x2C,0x00,0x3C,0x2D,0x2C,0x00,0x3C,0x2D,0x2C,0x00,0x3D,0x2D,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2D,0x2C,0x00,0x3C,0x2D,0x2C,0x00,0x3C,0x2D,0x2C,0x00,0x3D,0x2D,0x2C,0x00,0x6C,0x61,0x60,0xA1,0xE1,0xE1,0xE1,0xFF,0xE1,0xE1,0xE1,0xFF,0xE1,0xE1,0xE1,0xFF,0xCA,0xC8,0xC8,0xFF,0x40,0x2F,0x2F,0x4F,0x3C,0x2D,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2D,0x2C,0x00,0x3D,0x2C,0x2C,0x00,0x3C,0x2D,0x2C,0x00,0x3D,0x2C,0x2D,0x00,0x3C,0x2D,0x2C,0x00,0x3D,0x2D,0x2C,0x00,0x3D,0x2C,0x2C,0x00,0x3D,0x2D,0x2C,0x00,0x3C,0x2D,0x2C,0x00,0x3C,0x2D,0x2C,0x00,0x3D,0x2D,0x2C,0x26,0xBF,0xBC,0xBB,0xFC,0xE1,0xE1,0xE1,0xFF,0xE1,0xE1,0xE1,0xFF,0x7D,0x74,0x74,0xCD,0x3D,0x2D,0x2C,0x01,0x3D,0x2C,0x2C,0x00,0x3D,0x2D,0x2C,0x00,0x3D,0x2D,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3D,0x2D,0x2C,0x00,0x3D,0x2D,0x2C,0x00,0x3D,0x2D,0x2C,0x00,0x3D,0x2C,0x2C,0x00,0x3C,0x2D,0x2C,0x00,0x3C,0x2D,0x2C,0x00,
    0x3D,0x2D,0x2C,0x00,0x3D,0x2C,0x2C,0x00,0x3D,0x2D,0x2D,0x00,0x70,0x65,0x64,0xA5,0xE1,0xE1,0xE1,0xFF,0xCA,0xC8,0xC8,0xFF,0x40,0x30,0x2F,0x4D,0x3C,0x2D,0x2C,0x00,0x3D,0x2D,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3C,0x2D,0x2C,0x00,0x3C,0x2D,0x2C,0x00,0x3C,0x2C,0x2C,0x00,0x3D,0x2D,0x2C,0x00,0x3D,0x2D,0x2D,0x00,0x3D,0x2D,0x2D,0x00,0x3D,0x2D,0x2C,0x00,0x3D,0x2D,0x2C,0x00,0x3D,0x2D,0x2C,0x00,0x3E,0x2D,0x2C,0x00,0x3C,0x2D,0x2C,0x00,0x3D,0x2C,0x2C,0x28,0x72,0x68,0x68,0xE3,0x59,0x4B,0x4B,0x83,0x3C,0x2D,0x2C,0x01,0x3D,0x2D,0x2C,0x00,0x3C,0x2D,0x2D,0x00,0x3C,0x2D,0x2D,0x00,0x3D,0x2D,0x2C,0x00,0x3D,0x2D,0x2D,0x00,0x3C,0x2D,0x2C,0x00,0x3D,0x2D,0x2C,0x00,0x3E,0x2D,0x2C,0x00,0x3D,0x2D,0x2C,0x00,0x3E,0x2D,0x2C,0x00,0x3E,0x2D,0x2C,0x00,0x3D,0x2D,0x2C,0x00,0x3E,0x2D,0x2C,0x00,0x3D,0x2D,0x2D,0x00,0x3E,0x2D,0x2C,0x00,0x3D,0x2D,0x2C,0x02,0x3D,0x2D,0x2D,0x00,0x3C,0x2D,0x2D,0x00,0x3D,0x2D,0x2C,0x00,0x3D,0x2D,0x2C,0x00,0x3C,0x2D,0x2C,0x00,0x3D,0x2D,0x2C,0x00,0x3C,0x2D,0x2D,0x00,0x3D,0x2D,0x2C,0x00,0x3C,0x2D,0x2D,0x00,};
const lv_img_dsc_t ui_img_nozzle_png = {
   .header.always_zero = 0,
   .header.w = 18,
   .header.h = 17,
   .data_size = sizeof(ui_img_nozzle_png_data),
   .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
   .data = ui_img_nozzle_png_data};

