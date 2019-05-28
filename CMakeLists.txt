cmake_minimum_required(VERSION 3.7)

PROJECT(rtos_addons C CXX ASM)

add_definitions(-DCPP_FREERTOS_NO_EXCEPTIONS)

addSubmodule(../rtos_rep)
addSubmodule(../../micro/kernel/mcore)
FILE(GLOB_RECURSE SOURCES c/Source/*.c c++/Source/*.cpp)
additionalSources("${SOURCES}")
additionalImport(${CMAKE_CURRENT_SOURCE_DIR}/c/Source/include)
additionalImport(${CMAKE_CURRENT_SOURCE_DIR}/c++/Source/include)
configureModule()



