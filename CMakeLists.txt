cmake_minimum_required(VERSION 3.16)

# 设置 CMAKE_MODULE_PATH 变量以便 CMake 查找自定义的 CMake 模块
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

# 引入 GenerateVersionHeader.cmake 脚本文件
include(GenerateVersionHeader)

project(lv_demo LANGUAGES C CXX VERSION "1.0.0")

# 添加头文件搜索路径
include_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(include)

# 添加模块
# add_subdirectory(src)
add_subdirectory(components/utils)

# # 指定编译输出文件
add_executable(${PROJECT_NAME} "")

# 添加源文件
target_sources(${PROJECT_NAME}
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src/main.c)

# 链接静态库
target_link_libraries(${PROJECT_NAME}
        utils
        )

# 添加编译选项
target_compile_options(${PROJECT_NAME} PRIVATE -O2)
