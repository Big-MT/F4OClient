cmake_minimum_required(VERSION 3.9)

project(FalloutSbxClient)

set(SRC_DIR src)
set(LIBS_DIR libs)

file(GLOB SRC_FILES
        ${SRC_DIR}/*
        )

add_library(${PROJECT_NAME} SHARED ${SRC_FILES})

set_target_properties(${PROJECT_NAME} PROPERTIES
        CXX_STANDARD 17
        CXX_EXTENSIONS ON
        )