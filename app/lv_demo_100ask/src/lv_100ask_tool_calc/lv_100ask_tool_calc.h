#ifndef LV_100ASK_TOOL_CALC_H
#define LV_100ASK_TOOL_CALC_H

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

/**********************
 *      TYPEDEFS
 **********************/
// Calculation expression
#define LV_100ASK_CALC_EXPR_LEN                            (128) // ������ʽ����󳤶�
#define LV_100ASK_CALC_MAX_NUM_LEN                         (5)   // ��������������󳤶�

// padding
#define LV_100ASK_CALC_HISTORY_MAX_LINE     (128)
#define LV_100ASK_CALC_HISTORY_MAX_H        ((LV_VER_RES/3) - 50)
#define LV_100ASK_CALC_MAX_H                ((LV_VER_RES/3) * 2)


/*********************
 *      TYPEDEF
 *********************/
// ��Ƿ�
typedef enum {
    TOKENIZER_ERROR,        // Error
    TOKENIZER_ENDOFINPUT,   // End of input
    TOKENIZER_NUMBER,       // number
    TOKENIZER_PLUS,         // +
    TOKENIZER_MINUS,        // -
    TOKENIZER_ASTR,         // *
    TOKENIZER_SLASH,        // /
    TOKENIZER_LPAREN,       // (
    TOKENIZER_RPAREN,       // )
} token_t;

//  �������
typedef enum {
    no_error = 0,           // no error
    syntax_error,           // syntax error
} error_t;

// ����������Ӧ����Ϣ
typedef struct {
    error_t error_code;
    char *message;
} error_table_t;


/**********************
 * GLOBAL PROTOTYPES
 **********************/
void lv_100ask_tool_calc(void);





/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* LV_100ASK_TOOL_CALC_H */





