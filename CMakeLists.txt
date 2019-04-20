cmake_minimum_required(VERSION 3.7)

PROJECT(rtos_addons C CXX ASM)

global_import(${CMAKE_CURRENT_SOURCE_DIR}/c++/Source/include)
global_import(${CMAKE_CURRENT_SOURCE_DIR}/c/Source/include)

addSubmodule(../rtos_rep)
FILE(GLOB_RECURSE SOURCES c/Source/*.c c++/Source/*.cpp)
additionalSources(${SOURCES})
configureModule()



