project(mp_screenshots_info)
cmake_minimum_required(VERSION 2.8.7)

set(SOURCES
    entry_point.cpp
    pch.cpp
    screenshots_common.cpp
    screenshots_reader.cpp
    screenshots_writer.cpp
)

set(HEADERS
    pch.h
    screenshots_common.h
    screenshots_reader.h
    screenshots_writer.h
)
    
add_executable(mp_screenshots_info ${SOURCES} ${HEADERS})

include_directories(${CMAKE_SOURCE_DIR})

set_target_properties(mp_screenshots_info PROPERTIES COMPILE_DEFINITIONS "_MT")

target_link_libraries(mp_screenshots_info xrCore)
