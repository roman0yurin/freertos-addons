cmake_minimum_required(VERSION 3.7)

PROJECT(rtos_addons C CXX ASM)

add_module(../rtos_rep rtos_rep)

global_import(${CMAKE_CURRENT_SOURCE_DIR}/c++/Source/include)
global_import(${CMAKE_CURRENT_SOURCE_DIR}/c/Source/include)


get_property(GLOBAL_IMPORTS GLOBAL PROPERTY GLOBAL_IMPORTS)
include_directories(${GLOBAL_IMPORTS})

FILE(GLOB_RECURSE SOURCES c/Source/*.c c++/Source/*.cpp)
add_library(${PROJECT_NAME} STATIC ${SOURCES})
target_link_libraries(${PROJECT_NAME} rtos_rep)
