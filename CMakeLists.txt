cmake_minimum_required (VERSION 2.8.11)
project (gclient-env-poc)

file(GLOB SOURCES test_project/*.cpp)
include_directories(ext)
add_executable (${PROJECT_NAME} ${SOURCES})


