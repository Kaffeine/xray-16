project(mp_configs_verifyer)
cmake_minimum_required(VERSION 2.8.7)

set(SOURCES
    configs_common.cpp
    configs_dump_verifyer.cpp
    entry_point.cpp
    mp_config_sections.cpp
    pch.cpp
)

set(HEADERS
    configs_common.h
    configs_dump_verifyer.h
    mp_config_sections.h
    pch.h
)
    
add_executable(mp_configs_verifyer ${SOURCES} ${HEADERS})

include_directories(${CMAKE_SOURCE_DIR})

set_target_properties(mp_configs_verifyer PROPERTIES COMPILE_DEFINITIONS "_MT")

target_link_libraries(mp_configs_verifyer xrCore)
