cmake_minimum_required(VERSION 3.9)

project(FalloutSbxClient)

set(SRC_DIR src)
set(LIBS_DIR libs)

add_subdirectory(${LIBS_DIR}/spdlog)

include_directories(${PROJECT_NAME}
        ${CMAKE_CURRENT_SOURCE_DIR}
        )

file(GLOB SRC_FILES
        ${SRC_DIR}/*
        )

add_library(${PROJECT_NAME} SHARED ${SRC_FILES})

set_target_properties(${PROJECT_NAME} PROPERTIES
        CXX_STANDARD 17
        CXX_EXTENSIONS ON
        )

target_link_libraries(${PROJECT_NAME}
        spdlog::spdlog_header_only
        )