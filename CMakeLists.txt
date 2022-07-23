cmake_minimum_required(VERSION 3.12)

set(PROJECT_NAME OpenGLRender)

add_subdirectory(core)

add_subdirectory(test)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT core)