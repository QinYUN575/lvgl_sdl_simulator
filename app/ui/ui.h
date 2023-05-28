// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: 3d_Printer_2

#ifndef _3D_PRINTER_2_UI_H
#define _3D_PRINTER_2_UI_H

#ifdef __cplusplus
extern "C" {
#endif

    #include "lvgl/lvgl.h"

#include "ui_helpers.h"
#include "components/ui_comp.h"
#include "components/ui_comp_hook.h"
#include "ui_events.h"
void topon_Animation( lv_obj_t *TargetObject, int delay);
void topoff_Animation( lv_obj_t *TargetObject, int delay);
void lefton_Animation( lv_obj_t *TargetObject, int delay);
void leftoff_Animation( lv_obj_t *TargetObject, int delay);
void opaon_Animation( lv_obj_t *TargetObject, int delay);
void opaoff_Animation( lv_obj_t *TargetObject, int delay);
void arrow_Animation( lv_obj_t *TargetObject, int delay);
void buttonon_Animation( lv_obj_t *TargetObject, int delay);
void buttonoff_Animation( lv_obj_t *TargetObject, int delay);
void bed_Animation( lv_obj_t *TargetObject, int delay);
void printer_in_Animation( lv_obj_t *TargetObject, int delay);
// SCREEN: ui_welcome
void ui_welcome_screen_init(void);
void ui_event_welcome( lv_event_t * e);
extern lv_obj_t *ui_welcome;
extern lv_obj_t *ui_printer_in;
extern lv_obj_t *ui_header_group5;
extern lv_obj_t *ui_Label9;
extern lv_obj_t *ui_content_group5;
extern lv_obj_t *ui_content_text_group3;
extern lv_obj_t *ui_Label10;
extern lv_obj_t *ui_content_temp_group1;
extern lv_obj_t *ui_footer_group4;
void ui_event_Button3_Button( lv_event_t * e);
extern lv_obj_t *ui_Button3;
// SCREEN: ui_step1
void ui_step1_screen_init(void);
void ui_event_step1( lv_event_t * e);
extern lv_obj_t *ui_step1;
extern lv_obj_t *ui_header_group;
extern lv_obj_t *ui_wizard_group;
extern lv_obj_t *ui_dot1;
extern lv_obj_t *ui_line1;
extern lv_obj_t *ui_dot2;
extern lv_obj_t *ui_line2;
extern lv_obj_t *ui_dot3;
extern lv_obj_t *ui_content_group;
extern lv_obj_t *ui_content_text_group;
extern lv_obj_t *ui_Label1;
extern lv_obj_t *ui_Label2;
extern lv_obj_t *ui_content_temp_group;
extern lv_obj_t *ui_text_bg_group;
extern lv_obj_t *ui_text_bg_group1;
extern lv_obj_t *ui_separator;
extern lv_obj_t *ui_footer_group;
void ui_event_Button_Button( lv_event_t * e);
extern lv_obj_t *ui_Button;
// SCREEN: ui_step2
void ui_step2_screen_init(void);
void ui_event_step2( lv_event_t * e);
extern lv_obj_t *ui_step2;
extern lv_obj_t *ui_step2_bg;
extern lv_obj_t *ui_bed;
extern lv_obj_t *ui_nozzle;
extern lv_obj_t *ui_header_group1;
extern lv_obj_t *ui_wizard_group1;
extern lv_obj_t *ui_dot4;
extern lv_obj_t *ui_line3;
extern lv_obj_t *ui_dot5;
extern lv_obj_t *ui_line4;
extern lv_obj_t *ui_dot6;
extern lv_obj_t *ui_content_group1;
extern lv_obj_t *ui_content_text_group1;
extern lv_obj_t *ui_Label3;
extern lv_obj_t *ui_Label4;
extern lv_obj_t *ui_label_calibration;
extern lv_obj_t *ui_footer_group1;
void ui_event_Button1_Button( lv_event_t * e);
extern lv_obj_t *ui_Button1;
// SCREEN: ui_step3
void ui_step3_screen_init(void);
void ui_event_step3( lv_event_t * e);
extern lv_obj_t *ui_step3;
extern lv_obj_t *ui_step3_bg;
extern lv_obj_t *ui_arrow;
extern lv_obj_t *ui_header_group2;
extern lv_obj_t *ui_wizard_group2;
extern lv_obj_t *ui_dot7;
extern lv_obj_t *ui_line5;
extern lv_obj_t *ui_dot8;
extern lv_obj_t *ui_line6;
extern lv_obj_t *ui_dot9;
extern lv_obj_t *ui_content_group2;
extern lv_obj_t *ui_content_text_group2;
extern lv_obj_t *ui_Label5;
extern lv_obj_t *ui_Label6;
extern lv_obj_t *ui_footer_group2;
void ui_event_Button2_Button( lv_event_t * e);
extern lv_obj_t *ui_Button2;
// SCREEN: ui_final
void ui_final_screen_init(void);
void ui_event_final( lv_event_t * e);
extern lv_obj_t *ui_final;
extern lv_obj_t *ui_image_printer;
void ui_event_Button4_Button( lv_event_t * e);
extern lv_obj_t *ui_Button4;
extern lv_obj_t *ui_label_ready;
extern lv_obj_t *ui_ok_group;
extern lv_obj_t *ui_image_ok_big;
// SCREEN: ui_main_menu
void ui_main_menu_screen_init(void);
void ui_event_main_menu( lv_event_t * e);
extern lv_obj_t *ui_main_menu;
extern lv_obj_t *ui_header_group3;
extern lv_obj_t *ui_Label7;
extern lv_obj_t *ui_pos_group;
extern lv_obj_t *ui_posx;
extern lv_obj_t *ui_label_x;
extern lv_obj_t *ui_label_x1;
extern lv_obj_t *ui_posy;
extern lv_obj_t *ui_label_y;
extern lv_obj_t *ui_label_y2;
extern lv_obj_t *ui_posz;
extern lv_obj_t *ui_label_z1;
extern lv_obj_t *ui_label_z2;
extern lv_obj_t *ui_content_group3;
void ui_event_button_menu_print_button_menu( lv_event_t * e);
extern lv_obj_t *ui_button_menu_print;
void ui_event_button_menu_settings_button_menu( lv_event_t * e);
extern lv_obj_t *ui_button_menu_settings;
void ui_event_button_control_control_button_menu( lv_event_t * e);
extern lv_obj_t *ui_button_control_control;
extern lv_obj_t *ui_footer_group3;
extern lv_obj_t *ui_text_bg_group3;
extern lv_obj_t *ui_text_bg_group2;
extern lv_obj_t *ui_text_bg_group4;
// SCREEN: ui_printing
void ui_printing_screen_init(void);
void ui_event_printing( lv_event_t * e);
extern lv_obj_t *ui_printing;
extern lv_obj_t *ui_header_group4;
extern lv_obj_t *ui_Label8;
extern lv_obj_t *ui_pos_group1;
extern lv_obj_t *ui_posx1;
extern lv_obj_t *ui_label_x2;
extern lv_obj_t *ui_label_x3;
extern lv_obj_t *ui_posy1;
extern lv_obj_t *ui_label_y1;
extern lv_obj_t *ui_label_y3;
extern lv_obj_t *ui_posz1;
extern lv_obj_t *ui_label_z3;
extern lv_obj_t *ui_label_z4;
extern lv_obj_t *ui_content_group4;
extern lv_obj_t *ui_print_preview;
extern lv_obj_t *ui_separetor_left;
extern lv_obj_t *ui_separator_right;
extern lv_obj_t *ui_printing_percent_group;
extern lv_obj_t *ui_printing_percent;
extern lv_obj_t *ui_printing_percent1;
void ui_event_Slider2( lv_event_t * e);
extern lv_obj_t *ui_Slider2;
extern lv_obj_t *ui_temp_group;
extern lv_obj_t *ui_bar_group;
extern lv_obj_t *ui_bar_group1;
extern lv_obj_t *ui_printing_group;
extern lv_obj_t *ui_printing_btn_group;
extern lv_obj_t *ui_button_print;
void ui_event_button_print1_button_print( lv_event_t * e);
extern lv_obj_t *ui_button_print1;
extern lv_obj_t *ui_printing_params_group;
extern lv_obj_t *ui_text_bg_group6;
extern lv_obj_t *ui_text_bg_group5;
// SCREEN: ui_settings
void ui_settings_screen_init(void);
void ui_event_settings( lv_event_t * e);
extern lv_obj_t *ui_settings;
extern lv_obj_t *ui_settings_bg;
extern lv_obj_t *ui_header_group6;
extern lv_obj_t *ui_settings_label;
void ui_event_back_button( lv_event_t * e);
extern lv_obj_t *ui_back_button;
extern lv_obj_t *ui_back;
extern lv_obj_t *ui_content_group6;
extern lv_obj_t *ui_content_text_group4;
extern lv_obj_t *ui_list;
extern lv_obj_t *ui_list1;
extern lv_obj_t *ui_list2;
extern lv_obj_t *ui_list3;
extern lv_obj_t *ui_list4;
extern lv_obj_t *ui_list5;
void ui_event____initial_actions0( lv_event_t * e);
extern lv_obj_t *ui____initial_actions0;

LV_IMG_DECLARE( ui_img_bg1_png);   // assets/bg1.png
LV_IMG_DECLARE( ui_img_anim_printer_in_01_png);   // assets/anim/printer_in_01.png
LV_IMG_DECLARE( ui_img_btn1_png);   // assets/btn1.png
LV_IMG_DECLARE( ui_img_btn1_press_png);   // assets/btn1_press.png
LV_IMG_DECLARE( ui_img_ok_small_png);   // assets/ok_small.png
LV_IMG_DECLARE( ui_img_text_bg_left_png);   // assets/text_bg_left.png
LV_IMG_DECLARE( ui_img_text_bg_center_png);   // assets/text_bg_center.png
LV_IMG_DECLARE( ui_img_text_bg_right_png);   // assets/text_bg_right.png
LV_IMG_DECLARE( ui_img_separetor_png);   // assets/separetor.png
LV_IMG_DECLARE( ui_img_step2_bg_png);   // assets/step2_bg.png
LV_IMG_DECLARE( ui_img_bed_png);   // assets/bed.png
LV_IMG_DECLARE( ui_img_nozzle_png);   // assets/nozzle.png
LV_IMG_DECLARE( ui_img_step3_bg_png);   // assets/step3_bg.png
LV_IMG_DECLARE( ui_img_arrow_png);   // assets/arrow.png
LV_IMG_DECLARE( ui_img_print_ready_png);   // assets/print_ready.png
LV_IMG_DECLARE( ui_img_ok_big_png);   // assets/ok_big.png
LV_IMG_DECLARE( ui_img_bg2_png);   // assets/bg2.png
LV_IMG_DECLARE( ui_img_btn2_png);   // assets/btn2.png
LV_IMG_DECLARE( ui_img_btn2_press_png);   // assets/btn2_press.png
LV_IMG_DECLARE( ui_img_icn_print_png);   // assets/icn_print.png
LV_IMG_DECLARE( ui_img_icn_settings_png);   // assets/icn_settings.png
LV_IMG_DECLARE( ui_img_icn_control_png);   // assets/icn_control.png
LV_IMG_DECLARE( ui_img_separetor2_png);   // assets/separetor2.png
LV_IMG_DECLARE( ui_img_print_bar1_png);   // assets/print_bar1.png
LV_IMG_DECLARE( ui_img_print_bar2_png);   // assets/print_bar2.png
LV_IMG_DECLARE( ui_img_headtemp_png);   // assets/headtemp.png
LV_IMG_DECLARE( ui_img_bedtemp_png);   // assets/bedtemp.png
LV_IMG_DECLARE( ui_img_btn3_png);   // assets/btn3.png
LV_IMG_DECLARE( ui_img_btn3_press_png);   // assets/btn3_press.png
LV_IMG_DECLARE( ui_img_bg_settings_png);   // assets/bg_settings.png
LV_IMG_DECLARE( ui_img_icn_back_png);   // assets/icn_back.png
LV_IMG_DECLARE( ui_img_icn_move_png);   // assets/icn_move.png
LV_IMG_DECLARE( ui_img_icn_disable_png);   // assets/icn_disable.png
LV_IMG_DECLARE( ui_img_icn_home_png);   // assets/icn_home.png
LV_IMG_DECLARE( ui_img_icn_zoffset_png);   // assets/icn_zoffset.png
LV_IMG_DECLARE( ui_img_icn_filament_png);   // assets/icn_filament.png
LV_IMG_DECLARE( ui_img_anim_printer_in_02_png);   // assets/anim/printer_in_02.png
LV_IMG_DECLARE( ui_img_anim_printer_in_03_png);   // assets/anim/printer_in_03.png
LV_IMG_DECLARE( ui_img_anim_printer_in_04_png);   // assets/anim/printer_in_04.png
LV_IMG_DECLARE( ui_img_anim_printer_in_05_png);   // assets/anim/printer_in_05.png
LV_IMG_DECLARE( ui_img_anim_printer_in_06_png);   // assets/anim/printer_in_06.png
LV_IMG_DECLARE( ui_img_anim_printer_in_07_png);   // assets/anim/printer_in_07.png
LV_IMG_DECLARE( ui_img_anim_printer_in_08_png);   // assets/anim/printer_in_08.png
LV_IMG_DECLARE( ui_img_anim_printer_in_09_png);   // assets/anim/printer_in_09.png
LV_IMG_DECLARE( ui_img_anim_printer_in_10_png);   // assets/anim/printer_in_10.png
LV_IMG_DECLARE( ui_img_anim_printer_in_11_png);   // assets/anim/printer_in_11.png

LV_FONT_DECLARE( ui_font_H1);
LV_FONT_DECLARE( ui_font_Subtitle);
LV_FONT_DECLARE( ui_font_Title);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
