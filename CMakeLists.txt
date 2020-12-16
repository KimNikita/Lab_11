cmake_minimum_required(VERSION 2.8) 

set(PROJECT_NAME Arifmethic) 
project(${PROJECT_NAME}) 

set(Arifmethic Arifmethic)
set(main main)
set(StackLib StackLib)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE) 
if(NOT CMAKE_BUILD_TYPE) 
  set(CMAKE_BUILD_TYPE Release) 
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Arifmethic ${CMAKE_CURRENT_SOURCE_DIR}/StackLib) 

add_subdirectory(gtest)
add_subdirectory(Arifmethic)
add_subdirectory(StackLib)
add_subdirectory(main)
add_subdirectory(test)

