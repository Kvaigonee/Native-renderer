cmake_minimum_required(VERSION 3.24)

set(CORE_PROJECT_NAME core)

add_library(${CORE_PROJECT_NAME} STATIC
	src/main.cpp
	includes/main.hpp
)

target_include_directories(${CORE_PROJECT_NAME} PUBLIC includes)

target_compile_features(${CORE_PROJECT_NAME} PUBLIC cxx_std_17)
	

