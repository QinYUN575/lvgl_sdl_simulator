/**
 * @file ls_lv_tabview.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "ls_lv_tabview.h"
#if LV_USE_TABVIEW

// #include "../../../misc/lv_assert.h"

/*********************
 *      DEFINES
 *********************/
#define MY_CLASS    &ls_lv_tabview_class

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void ls_lv_tabview_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void ls_lv_tabview_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void ls_lv_tabview_event(const lv_obj_class_t * class_p, lv_event_t * e);
static void btns_value_changed_event_cb(lv_event_t * e);
static void cont_scroll_end_event_cb(lv_event_t * e);

/**********************
 *  STATIC VARIABLES
 **********************/
const lv_obj_class_t ls_lv_tabview_class = {
    .constructor_cb = ls_lv_tabview_constructor,
    .destructor_cb = ls_lv_tabview_destructor,
    .event_cb = ls_lv_tabview_event,
    .width_def = LV_PCT(100),
    .height_def = LV_PCT(100),
    .base_class = &lv_obj_class,
    .instance_size = sizeof(ls_lv_tabview_t)
};

static lv_dir_t tabpos_create;
static lv_coord_t tabsize_create;
typedef struct {
    lv_style_t scr;
    lv_style_t transp;
    lv_style_t white;
    lv_style_t light;
    lv_style_t dark;
    lv_style_t dim;
    lv_style_t scrollbar;
#if LV_USE_ARC || LV_USE_COLORWHEEL
    lv_style_t arc_line;
    lv_style_t arc_knob;
#endif
#if LV_USE_TEXTAREA
    lv_style_t ta_cursor;
#endif
} my_theme_styles_t;

static my_theme_styles_t * styles;
static lv_theme_t * theme;

static void theme_apply(lv_theme_t * th, lv_obj_t * obj)
{
    LV_UNUSED(th);

    if(lv_obj_get_parent(obj) == NULL) {
        lv_obj_add_style(obj, &styles->scr, 0);
        lv_obj_add_style(obj, &styles->scrollbar, LV_PART_SCROLLBAR);
        return;
    }

    if(lv_obj_check_type(obj, &lv_obj_class)) {
// #if LV_USE_TABVIEW
        lv_obj_t * parent = lv_obj_get_parent(obj);
        /*Tabview content area*/
        if(lv_obj_check_type(parent, &lv_tabview_class)) {
            lv_obj_add_style(obj, &styles->scr, 0);
            return;
        }
        /*Tabview pages*/
        else if(lv_obj_check_type(lv_obj_get_parent(parent), &lv_tabview_class)) {
            lv_obj_add_style(obj, &styles->scr, 0);
            lv_obj_add_style(obj, &styles->scrollbar, LV_PART_SCROLLBAR);
            return;
        }
// #endif
    }
}
/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * ls_lv_tabview_create(lv_obj_t * parent, lv_dir_t tab_pos, lv_coord_t tab_size)
{
    LV_LOG_INFO("begin");
    tabpos_create = tab_pos;
    tabsize_create = tab_size;

    lv_obj_t * obj = lv_obj_class_create_obj(&ls_lv_tabview_class, parent);
    lv_obj_class_init_obj(obj);
    theme = lv_disp_get_theme(lv_disp_get_default());
    theme_apply(theme, obj);
	// lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	// lv_obj_set_style_outline_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_pad_all(obj, 0, 0);
    return obj;
}

lv_obj_t * ls_lv_tabview_add_tab(lv_obj_t * obj, const char * name)
{
    LV_ASSERT_OBJ(obj, MY_CLASS);
    ls_lv_tabview_t * tabview = (ls_lv_tabview_t *)obj;
    lv_obj_t * cont = ls_lv_tabview_get_content(obj);

	lv_obj_set_style_border_width(cont, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	// lv_obj_set_style_outline_width(cont, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(cont, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_pad_all(cont, 0, 0);
    lv_obj_t * page = lv_obj_create(cont);
	// lv_obj_set_style_border_width(page, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	// lv_obj_set_style_outline_width(page, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_radius(page, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_pad_all(page, 0, 0);
    lv_obj_set_size(page, LV_PCT(100), LV_PCT(100));
    lv_obj_clear_flag(page, LV_OBJ_FLAG_CLICK_FOCUSABLE);
    uint32_t tab_id = lv_obj_get_child_cnt(cont);

    lv_obj_t * btns = ls_lv_tabview_get_tab_btns(obj);

	lv_obj_set_style_border_width(btns, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_outline_width(btns, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(btns, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(btns, 0, 0);
    char ** old_map = tabview->map;
    char ** new_map;

    /*top or bottom dir*/
    if(tabview->tab_pos & LV_DIR_VER) {
        new_map = lv_mem_alloc((tab_id + 1) * sizeof(const char *));
        lv_memcpy_small(new_map, old_map, sizeof(const char *) * (tab_id - 1));
        new_map[tab_id - 1] = lv_mem_alloc(strlen(name) + 1);
        strcpy((char *)new_map[tab_id - 1], name);
        new_map[tab_id] = "";
    }
    /*left or right dir*/
    else {
        new_map = lv_mem_alloc((tab_id * 2) * sizeof(const char *));
        lv_memcpy_small(new_map, old_map, sizeof(const char *) * (tab_id - 1) * 2);
        if(tabview->tab_cnt == 0) {
            new_map[0] = lv_mem_alloc(strlen(name) + 1);
            strcpy((char *)new_map[0], name);
            new_map[1] = "";
        }
        else {
            new_map[tab_id * 2 - 3] = "\n";
            new_map[tab_id * 2 - 2] = lv_mem_alloc(strlen(name) + 1);
            new_map[tab_id * 2 - 1] = "";
            strcpy((char *)new_map[(tab_id * 2) - 2], name);
        }
    }
    tabview->map = new_map;
    lv_btnmatrix_set_map(btns, (const char **)new_map);
    lv_mem_free(old_map);

    lv_btnmatrix_set_btn_ctrl_all(btns, LV_BTNMATRIX_CTRL_CHECKABLE | LV_BTNMATRIX_CTRL_CLICK_TRIG |
                                  LV_BTNMATRIX_CTRL_NO_REPEAT);

    tabview->tab_cnt++;
    if(tabview->tab_cnt == 1) {
        ls_lv_tabview_set_act(obj, 0, LV_ANIM_OFF);
    }

    lv_btnmatrix_set_btn_ctrl(btns, tabview->tab_cur, LV_BTNMATRIX_CTRL_CHECKED);

	lv_obj_set_style_border_width(btns, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_outline_width(btns, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(btns, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(btns, 0, 0);
    return page;
}

void ls_lv_tabview_rename_tab(lv_obj_t * obj, uint32_t id, const char * new_name)
{
    LV_ASSERT_OBJ(obj, MY_CLASS);
    ls_lv_tabview_t * tabview = (ls_lv_tabview_t *)obj;

    if(id >= tabview->tab_cnt) return;
    if(tabview->tab_pos & LV_DIR_HOR) id *= 2;

    lv_mem_free(tabview->map[id]);
    tabview->map[id] = lv_mem_alloc(strlen(new_name) + 1);
    strcpy(tabview->map[id], new_name);
    lv_obj_invalidate(obj);
}

void ls_lv_tabview_set_act(lv_obj_t * obj, uint32_t id, lv_anim_enable_t anim_en)
{
    LV_ASSERT_OBJ(obj, MY_CLASS);
    ls_lv_tabview_t * tabview = (ls_lv_tabview_t *)obj;

    if(id >= tabview->tab_cnt) {
        id = tabview->tab_cnt - 1;
    }

    /*To be sure lv_obj_get_content_width will return valid value*/
    lv_obj_update_layout(obj);

    lv_obj_t * cont = ls_lv_tabview_get_content(obj);
    if(cont == NULL) return;

    if((tabview->tab_pos & LV_DIR_VER) != 0) {
        lv_coord_t gap = lv_obj_get_style_pad_column(cont, LV_PART_MAIN);
        lv_coord_t w = lv_obj_get_content_width(cont);
        if(lv_obj_get_style_base_dir(obj, LV_PART_MAIN) != LV_BASE_DIR_RTL) {
            lv_obj_scroll_to_x(cont, id * (gap + w), anim_en);
        }
        else {
            int32_t id_rtl = -(int32_t)id;
            lv_obj_scroll_to_x(cont, (gap + w) * id_rtl, anim_en);
        }
    }
    else {
        lv_coord_t gap = lv_obj_get_style_pad_row(cont, LV_PART_MAIN);
        lv_coord_t h = lv_obj_get_content_height(cont);
        lv_obj_scroll_to_y(cont, id * (gap + h), anim_en);
    }

    lv_obj_t * btns = ls_lv_tabview_get_tab_btns(obj);
    lv_btnmatrix_set_btn_ctrl(btns, id, LV_BTNMATRIX_CTRL_CHECKED);
    tabview->tab_cur = id;
}

uint16_t ls_lv_tabview_get_tab_act(lv_obj_t * obj)
{
    LV_ASSERT_OBJ(obj, MY_CLASS);
    ls_lv_tabview_t * tabview = (ls_lv_tabview_t *)obj;
    return tabview->tab_cur;
}

lv_obj_t * ls_lv_tabview_get_content(lv_obj_t * tv)
{
    return lv_obj_get_child(tv, 1);
}

lv_obj_t * ls_lv_tabview_get_tab_btns(lv_obj_t * tv)
{
    return lv_obj_get_child(tv, 0);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

static void ls_lv_tabview_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    ls_lv_tabview_t * tabview = (ls_lv_tabview_t *)obj;

    tabview->tab_pos = tabpos_create;

    switch(tabview->tab_pos) {
        case LV_DIR_TOP:
            lv_obj_set_flex_flow(obj, LV_FLEX_FLOW_COLUMN);
            break;
        case LV_DIR_BOTTOM:
            lv_obj_set_flex_flow(obj, LV_FLEX_FLOW_COLUMN_REVERSE);
            break;
        case LV_DIR_LEFT:
            lv_obj_set_flex_flow(obj, LV_FLEX_FLOW_ROW);
            break;
        case LV_DIR_RIGHT:
            lv_obj_set_flex_flow(obj, LV_FLEX_FLOW_ROW_REVERSE);
            break;
    }

    lv_obj_set_size(obj, LV_PCT(100), LV_PCT(100));

    lv_obj_t * btnm;
    lv_obj_t * cont;

    btnm = lv_btnmatrix_create(obj);
    cont = lv_obj_create(obj);

    lv_btnmatrix_set_one_checked(btnm, true);
    tabview->map = lv_mem_alloc(sizeof(const char *));
    tabview->map[0] = "";
    lv_btnmatrix_set_map(btnm, (const char **)tabview->map);
    lv_obj_add_event_cb(btnm, btns_value_changed_event_cb, LV_EVENT_VALUE_CHANGED, NULL);
    lv_obj_add_flag(btnm, LV_OBJ_FLAG_EVENT_BUBBLE);

    lv_obj_add_event_cb(cont, cont_scroll_end_event_cb, LV_EVENT_ALL, NULL);
    lv_obj_set_scrollbar_mode(cont, LV_SCROLLBAR_MODE_OFF);

    switch(tabview->tab_pos) {
        case LV_DIR_TOP:
        case LV_DIR_BOTTOM:
            lv_obj_set_size(btnm, LV_PCT(100), tabsize_create);
            lv_obj_set_width(cont, LV_PCT(100));
            lv_obj_set_flex_grow(cont, 1);
            break;
        case LV_DIR_LEFT:
        case LV_DIR_RIGHT:
            lv_obj_set_size(btnm, tabsize_create, LV_PCT(100));
            lv_obj_set_height(cont, LV_PCT(100));
            lv_obj_set_flex_grow(cont, 1);
            break;
    }

    lv_group_t * g = lv_group_get_default();
    if(g) lv_group_add_obj(g, btnm);

    if((tabview->tab_pos & LV_DIR_VER) != 0) {
        lv_obj_set_flex_flow(cont, LV_FLEX_FLOW_ROW);
        lv_obj_set_scroll_snap_x(cont, LV_SCROLL_SNAP_CENTER);
    }
    else {
        lv_obj_set_flex_flow(cont, LV_FLEX_FLOW_COLUMN);
        lv_obj_set_scroll_snap_y(cont, LV_SCROLL_SNAP_CENTER);
    }
    lv_obj_add_flag(cont, LV_OBJ_FLAG_SCROLL_ONE);
    lv_obj_clear_flag(cont, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
}

static void ls_lv_tabview_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    ls_lv_tabview_t * tabview = (ls_lv_tabview_t *)obj;

    uint32_t i;
    if(tabview->tab_pos & LV_DIR_VER) {
        for(i = 0; i < tabview->tab_cnt; i++) {
            lv_mem_free(tabview->map[i]);
            tabview->map[i] = NULL;
        }
    }
    if(tabview->tab_pos & LV_DIR_HOR) {
        for(i = 0; i < tabview->tab_cnt; i++) {
            lv_mem_free(tabview->map[i * 2]);
            tabview->map[i * 2] = NULL;
        }
    }


    lv_mem_free(tabview->map);
    tabview->map = NULL;
}

static void ls_lv_tabview_event(const lv_obj_class_t * class_p, lv_event_t * e)
{
    LV_UNUSED(class_p);
    lv_res_t res = lv_obj_event_base(&ls_lv_tabview_class, e);
    if(res != LV_RES_OK) return;

    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);

    if(code == LV_EVENT_SIZE_CHANGED) {
        ls_lv_tabview_set_act(target, ls_lv_tabview_get_tab_act(target), LV_ANIM_OFF);
    }
}


static void btns_value_changed_event_cb(lv_event_t * e)
{
    lv_obj_t * btns = lv_event_get_target(e);

    lv_obj_t * tv = lv_obj_get_parent(btns);
    uint32_t id = lv_btnmatrix_get_selected_btn(btns);
    ls_lv_tabview_set_act(tv, id, LV_ANIM_ON);
}

static void cont_scroll_end_event_cb(lv_event_t * e)
{
    lv_obj_t * cont = lv_event_get_target(e);
    lv_event_code_t code = lv_event_get_code(e);

    lv_obj_t * tv = lv_obj_get_parent(cont);
    ls_lv_tabview_t * tv_obj = (ls_lv_tabview_t *)tv;
    if(code == LV_EVENT_LAYOUT_CHANGED) {
        ls_lv_tabview_set_act(tv, ls_lv_tabview_get_tab_act(tv), LV_ANIM_OFF);
    }
    else if(code == LV_EVENT_SCROLL_END) {
        lv_indev_t * indev = lv_indev_get_act();
        if(indev && indev->proc.state == LV_INDEV_STATE_PRESSED) {
            return;
        }

        lv_point_t p;
        lv_obj_get_scroll_end(cont, &p);

        lv_coord_t t;
        if((tv_obj->tab_pos & LV_DIR_VER) != 0) {
            lv_coord_t w = lv_obj_get_content_width(cont);
            if(lv_obj_get_style_base_dir(tv, LV_PART_MAIN) == LV_BASE_DIR_RTL)  t = -(p.x - w / 2) / w;
            else t = (p.x + w / 2) / w;
        }
        else {
            lv_coord_t h = lv_obj_get_content_height(cont);
            t = (p.y + h / 2) / h;
        }

        if(t < 0) t = 0;
        bool new_tab = false;
        if(t != ls_lv_tabview_get_tab_act(tv)) new_tab = true;
        ls_lv_tabview_set_act(tv, t, LV_ANIM_ON);

        if(new_tab) lv_event_send(tv, LV_EVENT_VALUE_CHANGED, NULL);
    }
}
#endif /*LV_USE_TABVIEW*/
