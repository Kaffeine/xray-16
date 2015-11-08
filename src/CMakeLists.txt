project(OpenXRay)
cmake_minimum_required(VERSION 2.8.7)

add_definitions(-std=c++11)
add_definitions(-D_MT)

#find_package(Lua51 REQUIRED)

# Load pkg-config module
find_package(PkgConfig)

pkg_check_modules(THEORA theoradec)

#include_directories(${LUA_INCLUDE_DIR})

add_subdirectory(xrCore)
add_subdirectory(xrEngine)
#add_subdirectory(xrServerEntities)

add_subdirectory(utils)
