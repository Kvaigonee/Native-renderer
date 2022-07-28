cmake_minimum_required(VERSION 3.12)

set(TEST_PROJECT_NAME test)

add_executable(${TEST_PROJECT_NAME}
	src/test.cpp
)

target_link_libraries(${TEST_PROJECT_NAME} core)
target_compile_features(${TEST_PROJECT_NAME} PUBLIC cxx_std_17)

set_target_properties(${TEST_PROJECT_NAME} PROPERTIES RUNTIME_OUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)
	
