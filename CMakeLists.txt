cmake_minimum_required(VERSION 3.5)

project(locadoradefilmes LANGUAGES C)

file(GLOB_RECURSE SOURCES
    src/*.h
    src/*.c
)

add_executable(locadoradefilmes ${SOURCES})
