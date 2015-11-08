project(OpenXRay)
cmake_minimum_required(VERSION 2.8.7)

add_definitions(-std=c++11)
add_definitions(-D_MT)

#find_package(Lua51 REQUIRED)

# Load pkg-config module
find_package(PkgConfig)

pkg_check_modules(SDL2 REQUIRED sdl2)
pkg_check_modules(THEORA theoradec)

#include_directories(${LUA_INCLUDE_DIR})

add_subdirectory(utils)

# add_subdirectory(xrAICore)
# add_subdirectory(xrCDB)
add_subdirectory(xrCore)
# add_subdirectory(xrD3D9-Null)
add_subdirectory(xrEngine)
# add_subdirectory(xrGame)
# add_subdirectory(xrGameSpy)
# add_subdirectory(xrNetServer)
# add_subdirectory(xrParticles)
# add_subdirectory(xrPhysics)
# add_subdirectory(xrScriptEngine)
# add_subdirectory(xrServerEntities)
# add_subdirectory(xrSound)
# add_subdirectory(xrXMLParser)

