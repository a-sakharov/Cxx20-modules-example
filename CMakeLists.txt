#recommended to use cland with clang-tools
# sudo apt-get install clang clang-tools

#################### 1. system requrements
cmake_minimum_required (VERSION 3.25)
enable_language(CXX)

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 14.0)
        message(FATAL_ERROR "GCC version must be at least 14.0!")
    endif()
elseif("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 16.0)
        message(FATAL_ERROR "CLANG version must be at least 16.0!")
    endif()
else()
    message(WARNING "You are using an unsupported compiler! Compilation has only been tested with Clang and GCC.")
endif()

#################### 2. project setup
project ("C++ module test" VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_SCAN_FOR_MODULES True)

add_executable(example)
FILE(GLOB modules_list modules/*)
target_sources(example PRIVATE
  FILE_SET mods
  TYPE CXX_MODULES
  FILES ${modules_list}
)
target_sources(example PRIVATE main.cpp)
