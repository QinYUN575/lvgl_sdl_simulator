#ifndef LV_100ASK_TOOL_REGBIT_H
#define LV_100ASK_TOOL_REGBIT_H

#ifdef __cplusplus
extern "C" {
#endif


/*********************
 *      INCLUDES
 *********************/
#include "../lv_100ask.h"


/*********************
 *      DEFINES
 *********************/
#define LV_100ASK_OBJ_BIT_W                     (15)
#define LV_100ASK_OBJ_BIT_H                     (35)
#define LV_100ASK_OBJ_BIT_SHOW_INDEX_H          (13)
#define LV_100ASK_OBJ_BIT_COUNT                 (32)
#define LV_100ASK_OBJ_BIT_ROW_SPACE             (20)
#define LV_100ASK_OBJ_BIT_COLOR                 lv_color_hex(0xff0000)
#define LV_100ASK_OBJ_BIT_SHOW_INDEX_COLOR      lv_color_hex(0x000000)


/**********************
 *      TYPEDEFS
 **********************/
typedef struct _lv_100ask_regbit {
	lv_obj_t * bg;   								// ����
	lv_obj_t * kb;									// ����
	lv_obj_t * ta_bin;								// ������
	lv_obj_t * ta_dec;								// ʮ����
	lv_obj_t * ta_hex;								// ʮ������
	lv_obj_t * regbit_obj[LV_100ASK_OBJ_BIT_COUNT];	// λ��ť
	char regbit_flag[LV_100ASK_OBJ_BIT_COUNT];		// λ��־ 0 -- δѡ��״̬�� 1 -- ѡ��״̬
	//lv_obj_t * ta_kb;
	//lv_obj_t * ta_md;
} T_lv_100ask_regbit, *PT_lv_100ask_regbit;

/**********************
 * GLOBAL PROTOTYPES
 **********************/
void lv_100ask_tool_regbit(void);





/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* LV_100ASK_TOOL_REGBIT_H */





