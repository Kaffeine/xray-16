project(xrCompress)
cmake_minimum_required(VERSION 2.8.7)

set(SOURCES
#    main.cpp
    xrCompress.cpp
)

set(HEADERS
    xrCompress.h
)
    
add_executable(xrCompress ${SOURCES} ${HEADERS})

include_directories(${CMAKE_SOURCE_DIR})

set_target_properties(xrCompress PROPERTIES COMPILE_DEFINITIONS "_MT")
