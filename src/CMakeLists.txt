add_library(SharedMemory "")

target_sources(
    SharedMemory
    PRIVATE
        SharedMemory.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/SharedMemory.h
    )

target_include_directories(
    SharedMemory
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )
