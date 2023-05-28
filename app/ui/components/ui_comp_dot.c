// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: 3d_Printer_2

#include "../ui.h"

// COMPONENT dot

lv_obj_t *ui_dot_create(lv_obj_t *comp_parent) {

    lv_obj_t *cui_dot;
    cui_dot = lv_obj_create(comp_parent);
    lv_obj_set_width( cui_dot, 40);
    lv_obj_set_height( cui_dot, 40);
    lv_obj_set_align( cui_dot, LV_ALIGN_CENTER );
    lv_obj_clear_flag( cui_dot, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
    lv_obj_set_style_radius(cui_dot, 40, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_dot, lv_color_hex(0x373648), LV_PART_MAIN | LV_STATE_DEFAULT );
    lv_obj_set_style_bg_opa(cui_dot, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(cui_dot, lv_color_hex(0x625F75), LV_PART_MAIN | LV_STATE_DEFAULT );
    lv_obj_set_style_text_opa(cui_dot, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_dot, &ui_font_Title, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_dot, lv_color_hex(0x0F86F4), LV_PART_MAIN | LV_STATE_CHECKED );
    lv_obj_set_style_bg_opa(cui_dot, 255, LV_PART_MAIN| LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_color(cui_dot, lv_color_hex(0x7967FE), LV_PART_MAIN | LV_STATE_CHECKED );
    lv_obj_set_style_bg_grad_dir(cui_dot, LV_GRAD_DIR_VER, LV_PART_MAIN| LV_STATE_CHECKED);
    lv_obj_set_style_text_color(cui_dot, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED );
    lv_obj_set_style_text_opa(cui_dot, 255, LV_PART_MAIN| LV_STATE_CHECKED);

    lv_obj_t *cui_label_dot;
    cui_label_dot = lv_label_create(cui_dot);
    lv_obj_set_width( cui_label_dot, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height( cui_label_dot, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x( cui_label_dot, 0 );
    lv_obj_set_y( cui_label_dot, 2 );
    lv_obj_set_align( cui_label_dot, LV_ALIGN_CENTER );
    lv_label_set_text(cui_label_dot,"1");

    lv_obj_t *cui_ready_bg;
    cui_ready_bg = lv_obj_create(cui_dot);
    lv_obj_set_width( cui_ready_bg, 40);
    lv_obj_set_height( cui_ready_bg, 40);
    lv_obj_set_align( cui_ready_bg, LV_ALIGN_CENTER );
    lv_obj_add_flag( cui_ready_bg, LV_OBJ_FLAG_HIDDEN );   /// Flags
    lv_obj_clear_flag( cui_ready_bg, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
    lv_obj_set_style_radius(cui_ready_bg, 40, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_ready_bg, lv_color_hex(0x4EBE4B), LV_PART_MAIN | LV_STATE_DEFAULT );
    lv_obj_set_style_bg_opa(cui_ready_bg, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

    lv_obj_t *cui_ready;
    cui_ready = lv_img_create(cui_dot);
    lv_img_set_src(cui_ready, &ui_img_ok_small_png);
    lv_obj_set_width( cui_ready, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height( cui_ready, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_align( cui_ready, LV_ALIGN_CENTER );
    lv_obj_add_flag( cui_ready, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
    lv_obj_clear_flag( cui_ready, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_DOT_NUM);
    children[UI_COMP_DOT_DOT] = cui_dot;
    children[UI_COMP_DOT_LABEL_DOT] = cui_label_dot;
    children[UI_COMP_DOT_READY_BG] = cui_ready_bg;
    children[UI_COMP_DOT_READY] = cui_ready;
    lv_obj_add_event_cb(cui_dot, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_dot, del_component_child_event_cb, LV_EVENT_DELETE, children);
    ui_comp_dot_create_hook(cui_dot);
    return cui_dot; 
}

