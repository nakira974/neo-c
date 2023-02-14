set(PROJECT_NAME neo-c)
set(CMAKE_C_STANDARD 17)
cmake_minimum_required(VERSION 3.23)

project(${PROJECT_NAME})

file(GLOB_RECURSE HEADERS
        ${CMAKE_SOURCE_DIR}/headers/*.h
        ${CMAKE_SOURCE_DIR}/headers/*.hpp
        ${CMAKE_SOURCE_DIR}/headers/*.h++
        ${CMAKE_SOURCE_DIR}/headers/*.hu
        ${CMAKE_SOURCE_DIR}/headers/*.inl
        )

file(GLOB_RECURSE SOURCES
        ${CMAKE_SOURCE_DIR}/sources/*.c
        ${CMAKE_SOURCE_DIR}/sources/*.cpp
        ${CMAKE_SOURCE_DIR}/sources/*.c++
        ${CMAKE_SOURCE_DIR}/sources/*.cu
        )

file(GLOB_RECURSE GC_SOURCES
        ${CMAKE_SOURCE_DIR}/external/GC/*.c
        ${CMAKE_SOURCE_DIR}/external/GC/*.h
        )

include_directories(${CMAKE_SOURCE_DIR}/headers)
include_directories(${CMAKE_SOURCE_DIR}/external/GC)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} ${GC_SOURCES})