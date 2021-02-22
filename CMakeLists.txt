cmake_minimum_required(VERSION 3.9)

project(FalloutSbxClient)

set(SRC_DIR src)
set(LIBS_DIR libs)

add_subdirectory(${LIBS_DIR}/spdlog)
add_subdirectory(${LIBS_DIR}/detours)
add_subdirectory(${LIBS_DIR}/imgui)


include_directories(${PROJECT_NAME}
        ${CMAKE_CURRENT_SOURCE_DIR}
        )

add_library(${PROJECT_NAME} SHARED
        src/Engine.cpp
        src/Engine.h
        src/Exceptions.h
        src/Hook.h
        src/Log.h
        src/main.cpp)

set_target_properties(${PROJECT_NAME} PROPERTIES
        CXX_STANDARD 17
        CXX_EXTENSIONS ON
        )

target_link_libraries(${PROJECT_NAME}
        spdlog::spdlog_header_only
        detours
        )