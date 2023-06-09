// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: 3d_Printer_2

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
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
lv_obj_t *ui_welcome;
lv_obj_t *ui_printer_in;
lv_obj_t *ui_header_group5;
lv_obj_t *ui_Label9;
lv_obj_t *ui_content_group5;
lv_obj_t *ui_content_text_group3;
lv_obj_t *ui_Label10;
lv_obj_t *ui_content_temp_group1;
lv_obj_t *ui_footer_group4;
void ui_event_Button3_Button( lv_event_t * e);
lv_obj_t *ui_Button3;

// SCREEN: ui_step1
void ui_step1_screen_init(void);
void ui_event_step1( lv_event_t * e);
lv_obj_t *ui_step1;
lv_obj_t *ui_header_group;
lv_obj_t *ui_wizard_group;
lv_obj_t *ui_dot1;
lv_obj_t *ui_line1;
lv_obj_t *ui_dot2;
lv_obj_t *ui_line2;
lv_obj_t *ui_dot3;
lv_obj_t *ui_content_group;
lv_obj_t *ui_content_text_group;
lv_obj_t *ui_Label1;
lv_obj_t *ui_Label2;
lv_obj_t *ui_content_temp_group;
lv_obj_t *ui_text_bg_group;
lv_obj_t *ui_text_bg_group1;
lv_obj_t *ui_separator;
lv_obj_t *ui_footer_group;
void ui_event_Button_Button( lv_event_t * e);
lv_obj_t *ui_Button;

// SCREEN: ui_step2
void ui_step2_screen_init(void);
void ui_event_step2( lv_event_t * e);
lv_obj_t *ui_step2;
lv_obj_t *ui_step2_bg;
lv_obj_t *ui_bed;
lv_obj_t *ui_nozzle;
lv_obj_t *ui_header_group1;
lv_obj_t *ui_wizard_group1;
lv_obj_t *ui_dot4;
lv_obj_t *ui_line3;
lv_obj_t *ui_dot5;
lv_obj_t *ui_line4;
lv_obj_t *ui_dot6;
lv_obj_t *ui_content_group1;
lv_obj_t *ui_content_text_group1;
lv_obj_t *ui_Label3;
lv_obj_t *ui_Label4;
lv_obj_t *ui_label_calibration;
lv_obj_t *ui_footer_group1;
void ui_event_Button1_Button( lv_event_t * e);
lv_obj_t *ui_Button1;

// SCREEN: ui_step3
void ui_step3_screen_init(void);
void ui_event_step3( lv_event_t * e);
lv_obj_t *ui_step3;
lv_obj_t *ui_step3_bg;
lv_obj_t *ui_arrow;
lv_obj_t *ui_header_group2;
lv_obj_t *ui_wizard_group2;
lv_obj_t *ui_dot7;
lv_obj_t *ui_line5;
lv_obj_t *ui_dot8;
lv_obj_t *ui_line6;
lv_obj_t *ui_dot9;
lv_obj_t *ui_content_group2;
lv_obj_t *ui_content_text_group2;
lv_obj_t *ui_Label5;
lv_obj_t *ui_Label6;
lv_obj_t *ui_footer_group2;
void ui_event_Button2_Button( lv_event_t * e);
lv_obj_t *ui_Button2;

// SCREEN: ui_final
void ui_final_screen_init(void);
void ui_event_final( lv_event_t * e);
lv_obj_t *ui_final;
lv_obj_t *ui_image_printer;
void ui_event_Button4_Button( lv_event_t * e);
lv_obj_t *ui_Button4;
lv_obj_t *ui_label_ready;
lv_obj_t *ui_ok_group;
lv_obj_t *ui_image_ok_big;

// SCREEN: ui_main_menu
void ui_main_menu_screen_init(void);
void ui_event_main_menu( lv_event_t * e);
lv_obj_t *ui_main_menu;
lv_obj_t *ui_header_group3;
lv_obj_t *ui_Label7;
lv_obj_t *ui_pos_group;
lv_obj_t *ui_posx;
lv_obj_t *ui_label_x;
lv_obj_t *ui_label_x1;
lv_obj_t *ui_posy;
lv_obj_t *ui_label_y;
lv_obj_t *ui_label_y2;
lv_obj_t *ui_posz;
lv_obj_t *ui_label_z1;
lv_obj_t *ui_label_z2;
lv_obj_t *ui_content_group3;
void ui_event_button_menu_print_button_menu( lv_event_t * e);
lv_obj_t *ui_button_menu_print;
void ui_event_button_menu_settings_button_menu( lv_event_t * e);
lv_obj_t *ui_button_menu_settings;
void ui_event_button_control_control_button_menu( lv_event_t * e);
lv_obj_t *ui_button_control_control;
lv_obj_t *ui_footer_group3;
lv_obj_t *ui_text_bg_group3;
lv_obj_t *ui_text_bg_group2;
lv_obj_t *ui_text_bg_group4;

// SCREEN: ui_printing
void ui_printing_screen_init(void);
void ui_event_printing( lv_event_t * e);
lv_obj_t *ui_printing;
lv_obj_t *ui_header_group4;
lv_obj_t *ui_Label8;
lv_obj_t *ui_pos_group1;
lv_obj_t *ui_posx1;
lv_obj_t *ui_label_x2;
lv_obj_t *ui_label_x3;
lv_obj_t *ui_posy1;
lv_obj_t *ui_label_y1;
lv_obj_t *ui_label_y3;
lv_obj_t *ui_posz1;
lv_obj_t *ui_label_z3;
lv_obj_t *ui_label_z4;
lv_obj_t *ui_content_group4;
lv_obj_t *ui_print_preview;
lv_obj_t *ui_separetor_left;
lv_obj_t *ui_separator_right;
lv_obj_t *ui_printing_percent_group;
lv_obj_t *ui_printing_percent;
lv_obj_t *ui_printing_percent1;
void ui_event_Slider2( lv_event_t * e);
lv_obj_t *ui_Slider2;
lv_obj_t *ui_temp_group;
lv_obj_t *ui_bar_group;
lv_obj_t *ui_bar_group1;
lv_obj_t *ui_printing_group;
lv_obj_t *ui_printing_btn_group;
lv_obj_t *ui_button_print;
void ui_event_button_print1_button_print( lv_event_t * e);
lv_obj_t *ui_button_print1;
lv_obj_t *ui_printing_params_group;
lv_obj_t *ui_text_bg_group6;
lv_obj_t *ui_text_bg_group5;

// SCREEN: ui_settings
void ui_settings_screen_init(void);
void ui_event_settings( lv_event_t * e);
lv_obj_t *ui_settings;
lv_obj_t *ui_settings_bg;
lv_obj_t *ui_header_group6;
lv_obj_t *ui_settings_label;
void ui_event_back_button( lv_event_t * e);
lv_obj_t *ui_back_button;
lv_obj_t *ui_back;
lv_obj_t *ui_content_group6;
lv_obj_t *ui_content_text_group4;
lv_obj_t *ui_list;
lv_obj_t *ui_list1;
lv_obj_t *ui_list2;
lv_obj_t *ui_list3;
lv_obj_t *ui_list4;
lv_obj_t *ui_list5;
void ui_event____initial_actions0( lv_event_t * e);
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_printer_in_[11] = {&ui_img_anim_printer_in_01_png, &ui_img_anim_printer_in_02_png, &ui_img_anim_printer_in_03_png, &ui_img_anim_printer_in_04_png, &ui_img_anim_printer_in_05_png, &ui_img_anim_printer_in_06_png, &ui_img_anim_printer_in_07_png, &ui_img_anim_printer_in_08_png, &ui_img_anim_printer_in_09_png, &ui_img_anim_printer_in_10_png, &ui_img_anim_printer_in_11_png};
const lv_img_dsc_t *ui_imgset_bg[2] = {&ui_img_bg1_png, &ui_img_bg2_png};
const lv_img_dsc_t *ui_imgset_btn[3] = {&ui_img_btn1_png, &ui_img_btn2_png, &ui_img_btn3_png};
const lv_img_dsc_t *ui_imgset_print_bar[2] = {&ui_img_print_bar1_png, &ui_img_print_bar2_png};
const lv_img_dsc_t *ui_imgset_separetor[1] = {&ui_img_separetor2_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void topon_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 300);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y );
lv_anim_set_values(&PropertyAnimation_0, -20, 0 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_overshoot);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, true );
lv_anim_start(&PropertyAnimation_0);
ui_anim_user_data_t *PropertyAnimation_1_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_1_user_data->target = TargetObject;
PropertyAnimation_1_user_data->val = -1;
lv_anim_t PropertyAnimation_1;
lv_anim_init(&PropertyAnimation_1);
lv_anim_set_time(&PropertyAnimation_1, 100);
lv_anim_set_user_data(&PropertyAnimation_1, PropertyAnimation_1_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity );
lv_anim_set_values(&PropertyAnimation_1, 0, 255 );
lv_anim_set_path_cb( &PropertyAnimation_1, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_1, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_1, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_1, 0);
lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
lv_anim_set_early_apply( &PropertyAnimation_1, true );
lv_anim_start(&PropertyAnimation_1);

}
void topoff_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 200);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y );
lv_anim_set_values(&PropertyAnimation_0, 0, -50 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
lv_anim_start(&PropertyAnimation_0);
ui_anim_user_data_t *PropertyAnimation_1_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_1_user_data->target = TargetObject;
PropertyAnimation_1_user_data->val = -1;
lv_anim_t PropertyAnimation_1;
lv_anim_init(&PropertyAnimation_1);
lv_anim_set_time(&PropertyAnimation_1, 200);
lv_anim_set_user_data(&PropertyAnimation_1, PropertyAnimation_1_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity );
lv_anim_set_values(&PropertyAnimation_1, 255, 0 );
lv_anim_set_path_cb( &PropertyAnimation_1, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_1, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_1, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_1, 0);
lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
lv_anim_set_early_apply( &PropertyAnimation_1, false );
lv_anim_start(&PropertyAnimation_1);

}
void lefton_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 500);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x );
lv_anim_set_values(&PropertyAnimation_0, -50, 0 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_overshoot);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
lv_anim_start(&PropertyAnimation_0);
ui_anim_user_data_t *PropertyAnimation_1_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_1_user_data->target = TargetObject;
PropertyAnimation_1_user_data->val = -1;
lv_anim_t PropertyAnimation_1;
lv_anim_init(&PropertyAnimation_1);
lv_anim_set_time(&PropertyAnimation_1, 200);
lv_anim_set_user_data(&PropertyAnimation_1, PropertyAnimation_1_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity );
lv_anim_set_values(&PropertyAnimation_1, 0, 255 );
lv_anim_set_path_cb( &PropertyAnimation_1, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_1, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_1, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_1, 0);
lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
lv_anim_set_early_apply( &PropertyAnimation_1, true );
lv_anim_start(&PropertyAnimation_1);

}
void leftoff_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 200);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x );
lv_anim_set_values(&PropertyAnimation_0, 0, -100 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
lv_anim_start(&PropertyAnimation_0);
ui_anim_user_data_t *PropertyAnimation_1_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_1_user_data->target = TargetObject;
PropertyAnimation_1_user_data->val = -1;
lv_anim_t PropertyAnimation_1;
lv_anim_init(&PropertyAnimation_1);
lv_anim_set_time(&PropertyAnimation_1, 200);
lv_anim_set_user_data(&PropertyAnimation_1, PropertyAnimation_1_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity );
lv_anim_set_values(&PropertyAnimation_1, 255, 0 );
lv_anim_set_path_cb( &PropertyAnimation_1, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_1, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_1, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_1, 0);
lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
lv_anim_set_early_apply( &PropertyAnimation_1, false );
lv_anim_start(&PropertyAnimation_1);

}
void opaon_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 300);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity );
lv_anim_set_values(&PropertyAnimation_0, 0, 255 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, true );
lv_anim_start(&PropertyAnimation_0);

}
void opaoff_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 300);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity );
lv_anim_set_values(&PropertyAnimation_0, 255, 0 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity );
lv_anim_start(&PropertyAnimation_0);

}
void arrow_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 400);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x );
lv_anim_set_values(&PropertyAnimation_0, 0, 20 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 200);
lv_anim_set_playback_delay(&PropertyAnimation_0, 300);
lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE );
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_x );
lv_anim_start(&PropertyAnimation_0);
ui_anim_user_data_t *PropertyAnimation_1_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_1_user_data->target = TargetObject;
PropertyAnimation_1_user_data->val = -1;
lv_anim_t PropertyAnimation_1;
lv_anim_init(&PropertyAnimation_1);
lv_anim_set_time(&PropertyAnimation_1, 400);
lv_anim_set_user_data(&PropertyAnimation_1, PropertyAnimation_1_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_y );
lv_anim_set_values(&PropertyAnimation_1, 0, 10 );
lv_anim_set_path_cb( &PropertyAnimation_1, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_1, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_1, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_1, 200);
lv_anim_set_playback_delay(&PropertyAnimation_1, 300);
lv_anim_set_repeat_count(&PropertyAnimation_1, LV_ANIM_REPEAT_INFINITE );
lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
lv_anim_set_early_apply( &PropertyAnimation_1, false );
lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_y );
lv_anim_start(&PropertyAnimation_1);

}
void buttonon_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 300);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y );
lv_anim_set_values(&PropertyAnimation_0, 20, 0 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, true );
lv_anim_start(&PropertyAnimation_0);
ui_anim_user_data_t *PropertyAnimation_1_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_1_user_data->target = TargetObject;
PropertyAnimation_1_user_data->val = -1;
lv_anim_t PropertyAnimation_1;
lv_anim_init(&PropertyAnimation_1);
lv_anim_set_time(&PropertyAnimation_1, 200);
lv_anim_set_user_data(&PropertyAnimation_1, PropertyAnimation_1_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity );
lv_anim_set_values(&PropertyAnimation_1, 0, 255 );
lv_anim_set_path_cb( &PropertyAnimation_1, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_1, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_1, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_1, 0);
lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
lv_anim_set_early_apply( &PropertyAnimation_1, true );
lv_anim_start(&PropertyAnimation_1);

}
void buttonoff_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 300);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y );
lv_anim_set_values(&PropertyAnimation_0, 0, 20 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
lv_anim_start(&PropertyAnimation_0);
ui_anim_user_data_t *PropertyAnimation_1_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_1_user_data->target = TargetObject;
PropertyAnimation_1_user_data->val = -1;
lv_anim_t PropertyAnimation_1;
lv_anim_init(&PropertyAnimation_1);
lv_anim_set_time(&PropertyAnimation_1, 300);
lv_anim_set_user_data(&PropertyAnimation_1, PropertyAnimation_1_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity );
lv_anim_set_values(&PropertyAnimation_1, 255, 0 );
lv_anim_set_path_cb( &PropertyAnimation_1, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_1, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_1, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_1, 0);
lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
lv_anim_set_early_apply( &PropertyAnimation_1, false );
lv_anim_start(&PropertyAnimation_1);

}
void bed_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 600);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y );
lv_anim_set_values(&PropertyAnimation_0, 0, 20 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_ease_out);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 1000);
lv_anim_set_playback_delay(&PropertyAnimation_0, 200);
lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE );
lv_anim_set_repeat_delay(&PropertyAnimation_0, 500);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y );
lv_anim_start(&PropertyAnimation_0);

}
void printer_in_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->imgset = ui_imgset_printer_in_;
PropertyAnimation_0_user_data->imgset_size = sizeof(ui_imgset_printer_in_)/(sizeof(lv_img_dsc_t*));
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 600);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_frame );
lv_anim_set_values(&PropertyAnimation_0, 0, 11 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
lv_anim_start(&PropertyAnimation_0);
ui_anim_user_data_t *PropertyAnimation_1_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_1_user_data->target = TargetObject;
PropertyAnimation_1_user_data->val = -1;
lv_anim_t PropertyAnimation_1;
lv_anim_init(&PropertyAnimation_1);
lv_anim_set_time(&PropertyAnimation_1, 500);
lv_anim_set_user_data(&PropertyAnimation_1, PropertyAnimation_1_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity );
lv_anim_set_values(&PropertyAnimation_1, 0, 255 );
lv_anim_set_path_cb( &PropertyAnimation_1, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_1, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_1, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_1, 0);
lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
lv_anim_set_early_apply( &PropertyAnimation_1, true );
lv_anim_start(&PropertyAnimation_1);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_welcome( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_SCREEN_LOAD_START) {
      lefton_Animation(ui_content_text_group3, 100);
      opaon_Animation(ui_content_temp_group1, 200);
      printer_in_Animation(ui_printer_in, 0);
      topon_Animation(ui_Label9, 0);
}
if ( event_code == LV_EVENT_SCREEN_UNLOAD_START) {
      leftoff_Animation(ui_content_text_group3, 100);
      opaoff_Animation(ui_content_temp_group1, 0);
      opaoff_Animation(ui_printer_in, 0);
      topoff_Animation(ui_Label9, 0);
}
}
void ui_event_Button3_Button( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_step1, LV_SCR_LOAD_ANIM_FADE_ON, 100, 200);
}
}
void ui_event_step1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_SCREEN_LOAD_START) {
      topon_Animation(ui_wizard_group, 0);
      lefton_Animation(ui_content_text_group, 100);
      opaon_Animation(ui_content_temp_group, 200);
}
if ( event_code == LV_EVENT_SCREEN_UNLOAD_START) {
      topoff_Animation(ui_wizard_group, 0);
      leftoff_Animation(ui_content_text_group, 100);
      opaoff_Animation(ui_content_temp_group, 0);
}
}
void ui_event_Button_Button( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_step2, LV_SCR_LOAD_ANIM_FADE_ON, 100, 200);
}
}
void ui_event_step2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_SCREEN_LOAD_START) {
      topon_Animation(ui_wizard_group1, 0);
      lefton_Animation(ui_content_text_group1, 100);
      opaon_Animation(ui_step2_bg, 200);
      topon_Animation(ui_label_calibration, 300);
}
if ( event_code == LV_EVENT_SCREEN_UNLOAD_START) {
      topoff_Animation(ui_wizard_group1, 0);
      leftoff_Animation(ui_content_text_group1, 100);
      opaoff_Animation(ui_step2_bg, 0);
      topoff_Animation(ui_label_calibration, 100);
}
}
void ui_event_Button1_Button( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_step3, LV_SCR_LOAD_ANIM_FADE_ON, 100, 200);
}
}
void ui_event_step3( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_SCREEN_LOAD_START) {
      topon_Animation(ui_wizard_group2, 0);
      lefton_Animation(ui_content_text_group2, 100);
      opaon_Animation(ui_step3_bg, 0);
      opaon_Animation(ui_arrow, 300);
}
if ( event_code == LV_EVENT_SCREEN_UNLOAD_START) {
      topoff_Animation(ui_wizard_group2, 0);
      leftoff_Animation(ui_content_text_group2, 100);
      opaoff_Animation(ui_step3_bg, 0);
      opaoff_Animation(ui_arrow, 0);
}
}
void ui_event_Button2_Button( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_final, LV_SCR_LOAD_ANIM_FADE_ON, 100, 200);
}
}
void ui_event_final( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_SCREEN_LOAD_START) {
      topon_Animation(ui_label_ready, 0);
      lefton_Animation(ui_image_ok_big, 200);
      opaon_Animation(ui_image_printer, 100);
}
if ( event_code == LV_EVENT_SCREEN_UNLOAD_START) {
      topoff_Animation(ui_label_ready, 0);
      leftoff_Animation(ui_image_ok_big, 100);
      opaoff_Animation(ui_image_printer, 200);
}
}
void ui_event_Button4_Button( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_main_menu, LV_SCR_LOAD_ANIM_FADE_ON, 100, 200);
}
}
void ui_event_main_menu( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_SCREEN_LOAD_START) {
      topon_Animation(ui_header_group3, 0);
      topon_Animation(ui_button_menu_print, 50);
      topon_Animation(ui_button_menu_settings, 100);
      topon_Animation(ui_button_control_control, 150);
      buttonon_Animation(ui_footer_group3, 200);
}
if ( event_code == LV_EVENT_SCREEN_UNLOAD_START) {
      topoff_Animation(ui_header_group3, 0);
      buttonoff_Animation(ui_footer_group3, 100);
      opaoff_Animation(ui_content_group3, 200);
}
}
void ui_event_button_menu_print_button_menu( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_printing, LV_SCR_LOAD_ANIM_FADE_ON, 100, 200);
}
}
void ui_event_button_menu_settings_button_menu( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_settings, LV_SCR_LOAD_ANIM_FADE_ON, 100, 200);
}
}
void ui_event_button_control_control_button_menu( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_welcome, LV_SCR_LOAD_ANIM_FADE_ON, 100, 200);
}
}
void ui_event_printing( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_SCREEN_LOAD_START) {
      topon_Animation(ui_header_group4, 0);
      buttonon_Animation(ui_print_preview, 0);
      buttonon_Animation(ui_temp_group, 100);
      buttonon_Animation(ui_printing_group, 200);
}
if ( event_code == LV_EVENT_SCREEN_UNLOAD_START) {
      topoff_Animation(ui_header_group4, 0);
      buttonoff_Animation(ui_print_preview, 0);
      buttonoff_Animation(ui_printing_group, 100);
      buttonoff_Animation(ui_temp_group, 0);
}
}
void ui_event_Slider2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      _ui_slider_set_text_value( ui_printing_percent, target, "", "%");
}
}
void ui_event_button_print1_button_print( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_main_menu, LV_SCR_LOAD_ANIM_FADE_ON, 100, 200);
}
}
void ui_event_settings( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_SCREEN_LOAD_START) {
      topon_Animation(ui_settings_label, 0);
      lefton_Animation(ui_content_text_group4, 100);
      lefton_Animation(ui_back_button, 0);
      opaon_Animation(ui_settings_bg, 0);
}
if ( event_code == LV_EVENT_SCREEN_UNLOAD_START) {
      topoff_Animation(ui_settings_label, 0);
      leftoff_Animation(ui_content_text_group4, 100);
      leftoff_Animation(ui_back_button, 0);
      opaoff_Animation(ui_settings_bg, 0);
}
}
void ui_event_back_button( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
    if ( event_code == LV_EVENT_CLICKED) {
        _ui_screen_change( ui_main_menu, LV_SCR_LOAD_ANIM_FADE_ON, 100, 200);
    }
}
void ui_event____initial_actions0( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
    if ( event_code == LV_EVENT_SCREEN_LOAD_START) {
        arrow_Animation(ui_arrow, 0);
        bed_Animation(ui_bed, 0);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init( void )
{
    LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_basic_init(dispp);
    lv_disp_set_theme(dispp, theme);
    ui_welcome_screen_init();
    ui_step1_screen_init();
    ui_step2_screen_init();
    ui_step3_screen_init();
    ui_final_screen_init();
    ui_main_menu_screen_init();
    ui_printing_screen_init();
    ui_settings_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_obj_add_event_cb(ui____initial_actions0, ui_event____initial_actions0, LV_EVENT_ALL, NULL);

    lv_disp_load_scr(ui____initial_actions0);
    lv_disp_load_scr( ui_welcome);
}
