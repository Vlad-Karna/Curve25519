cmake_minimum_required(VERSION 3.0)

project(Curve25519)

set(SRC x25519.c x25519.h)

add_library(${PROJECT_NAME} ${SRC})

add_subdirectory(c25519)

target_include_directories(${PROJECT_NAME} PUBLIC src)

target_link_libraries(${PROJECT_NAME} PUBLIC c25519)
