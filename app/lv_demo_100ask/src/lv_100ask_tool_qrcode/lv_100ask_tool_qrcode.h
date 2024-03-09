#ifndef LV_100ASK_TOOL_QRCODE_H
#define LV_100ASK_TOOL_QRCODE_H

#ifdef __cplusplus
extern "C" {
#endif


/*********************
 *      INCLUDES
 *********************/
#include "../../lv_100ask.h"


/*********************
 *      DEFINES
 *********************/
#define LV_100ASK_QRCODE_SIZE           (100)
#define LV_100ASK_QRCODE_AD_SIZE        (80)
#define LV_100ASK_QRCODE_SPACE          ((LV_HOR_RES - (LV_100ASK_QRCODE_AD_SIZE * 3)) / 4)


/**********************
 *      TYPEDEFS
 **********************/
typedef struct _lv_100ask_qrcode {
	lv_obj_t * bg;      				// ����
	lv_obj_t * qr_input;				// ��ά���(��������)
	lv_obj_t * qr_official_website;		// ��ά���(����)
	lv_obj_t * qr_wechat;				// ��ά���(΢�Ź��ں�)
	lv_obj_t * qr_100ask_lvgl;			// ��ά���(lvgl����վ��)
	lv_obj_t * ta_content;				// �����
	lv_obj_t * keyboard;				// ����
} T_lv_100ask_qrcode, *PT_lv_100ask_qrcode;


/**********************
 * GLOBAL PROTOTYPES
 **********************/
void lv_100ask_tool_qrcode(void);





/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* LV_100ASK_TOOL_QRCODE_H */





