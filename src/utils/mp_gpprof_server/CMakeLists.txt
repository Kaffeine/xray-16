project(mp_gpprof_server)
cmake_minimum_required(VERSION 2.8.7)

set(SOURCES
    entry_point.cpp
    gamespy_sake.cpp
    profile_data_types.cpp
    profile_request.cpp
    profiles_cache.cpp
    requests_processor.cpp
    sake_worker.cpp
    threads.cpp
)

set(HEADERS
    atlas_stalkercoppc_v1.h
    gamespy_sake.h
    profile_data_types.h
    profile_printer.h
    profile_request.h
    profiles_cache.h
    requests_processor.h
    sake_worker.h
    threads.h
)
    
add_executable(mp_gpprof_server ${SOURCES} ${HEADERS})

include_directories(${CMAKE_SOURCE_DIR})

include_directories("libraries/gamespy")

set_target_properties(mp_gpprof_server PROPERTIES COMPILE_DEFINITIONS "_MT")

target_link_libraries(mp_gpprof_server xrCore)
target_link_libraries(mp_gpprof_server -lfcgi)
