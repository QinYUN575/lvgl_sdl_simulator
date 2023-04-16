/**
 * @file main.c
 * @author TsMax (QinYUN575@Foxmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-17
 * 
 * @copyright Copyright (c) 2023
 * 
 * SPDX-License-Identifier: Apache-2.0
 */

#include "version.h"
#include "config.h"
#include "utils_log.h"
#include <stdio.h>

static const char *TAG = "LVGL";

// int app_main()
int main(int argc, char **argv)
{
    (void)argc; /*Unused*/
    (void)argv; /*Unused*/
    
    LOGI(TAG, "===============================");
    LOGI(TAG, "Author: %s", COMMIT_AUTHOR);
    LOGI(TAG, "Email: %s", AUTHOR_EMAIL);
    LOGI(TAG, "Commit version: %s", COMMIT_COUNT);
    LOGI(TAG, "Commit hash: %s", COMMIT_HASH);
    LOGI(TAG, "Compile Time: %s %s", __TIME__, __DATE__);

    LOGI(TAG, "Hello World!");
    LOGI(TAG, "===============================");
    
    return 0;
}