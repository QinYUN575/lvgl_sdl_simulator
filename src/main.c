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

int main()
{
    LOGI(TAG, "===============================");
    LOGI(TAG, "Hello World!");
    // LOGI(TAG, "Project     : %s\n", PROJECT_NAME());
    // LOGI(TAG, "Author      : %s\n", AUTHOR_INFO());
    // LOGI(TAG, "Version     : %s\n", VERSION(MAJOR_VERSION, MINOR_VERSION, PATCH_VERSION));

    LOGI(TAG, "Author: %s", COMMIT_AUTHOR);
    LOGI(TAG, "Email: %s", AUTHOR_EMAIL);
    LOGI(TAG, "Commit version: %s", COMMIT_COUNT);
    LOGI(TAG, "Commit hash: %s", COMMIT_HASH);
    LOGI(TAG, "Compile Time: %s %s\n", __TIME__, __DATE__);

    LOGI(TAG, "===============================");
    
    return 0;
}