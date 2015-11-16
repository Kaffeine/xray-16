project(mp_balancer)
cmake_minimum_required(VERSION 2.8.7)

set(SOURCES
    entry_point.cpp
    iostreams_proxy.cpp
    pch.cpp
    statistics_collector.cpp
    wpn_collection.cpp
#    xr_ini_ex.cpp
)

set(HEADERS
    iostreams_proxy.h
    pch.h
    statistics_collector.hpp
    tools.hpp
    wpn_collection.hpp
#    xr_ini_ex.h
)
    
add_executable(mp_balancer ${SOURCES} ${HEADERS})

include_directories(${CMAKE_SOURCE_DIR})

set_target_properties(mp_balancer PROPERTIES COMPILE_DEFINITIONS "_MT")

target_link_libraries(mp_balancer xrCore)
