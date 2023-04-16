cmake_minimum_required(VERSION 3.16)

project(lvgl-sdl-simulator)

add_subdirectory(components/lvgl)
add_subdirectory(components/sdl)
# add_subdirectory(components/lvgl_port_sdl)

# 调用 src/ 目录的子 CMakeLists.txt
add_subdirectory(src)

# 添加头文件搜索路径
include_directories(components/utils/include)
include_directories(components/lvgl)
include_directories(components/sdl/include/sdl3)
include_directories(components/lvgl_port_sdl)

# 添加编译选项
add_compile_definitions(USE_LV_LOG) # 告诉 LVGL 使用日志输出

include_directories(${CMAKE_CURRENT_BINARY_DIR})
# 设置 CMAKE_MODULE_PATH 变量以便 CMake 查找自定义的 CMake 模块
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

# 引入 GenerateVersionHeader.cmake 脚本文件
include(GenerateVersionHeader)

# 添加链接选项
link_directories(components/sdl/build/.libs)

# 指定编译输出文件
add_executable(${PROJECT_NAME} "")

# 添加源文件
target_sources(${PROJECT_NAME}
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src/main.c)

# 链接静态库
target_link_libraries(${PROJECT_NAME}
        lvgl
        # lvgl_port_sdl
        # SDL3
        # SDL3_image
        # SDL3_ttf
        )

# 添加编译选项
target_compile_options(${PROJECT_NAME} PRIVATE -O2)
