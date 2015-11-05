project(CTool)
cmake_minimum_required(VERSION 2.8.11)

set(SOURCES
    ctool.cpp
    PPMTrain.cpp
)

set(HEADERS
    PPMT_SA.hpp
)
    
add_executable(CTool ${SOURCES} ${HEADERS})

include_directories(${CMAKE_SOURCE_DIR})
