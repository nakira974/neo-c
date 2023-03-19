set(PROJECT_NAME neo-c)

cmake_minimum_required(VERSION 3.23)

project(${PROJECT_NAME})
set(CMAKE_C_STANDARD 17)
set(CMAKE_Cxx_STANDARD 20)

set(MSVC "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.33.31629\\bin\\HostX64\\x64\\cl.exe")
add_compile_options(-Wall)

if(WIN32)
    set(CMAKE_C_COMPILER GCC)
    set(CMAKE_CXX_COMPILER G++)
    message("-- WINDOWS CMAKE BUILD HAS BEGUN")
else()
    message("-- ANDROID_LINUX CMAKE BUILD HAS BEGUN")
    #SETTING ENV VARIABLES
    set(ENV{ANDROID_NDK_HOME} /home/maxime/Android/default/android-ndk-r23c/)
    set(ENV{ANDROID_SDK_VERSION} 30)
    set(ENV{ANDROID_ABI} x86_64)
    set(ENV{ANDROID_PLATFORM} android-23)
    set(CMAKE_SYSTEM_NAME  Android)
    set(CMAKE_CXX_COMPILER
            /home/maxime/Android/default/android-ndk-r23c/toolchains/llvm/prebuilt/linux-x86_64/bin/x86_64-linux-android$ENV{ANDROID_SDK_VERSION}-clang++)
    set(CMAKE_C_COMPILER
            /home/maxime/Android/default/android-ndk-r23c/toolchains/llvm/prebuilt/linux-x86_64/bin/x86_64-linux-android$ENV{ANDROID_SDK_VERSION}-clang)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall")

    #NDK TOOLCHAIN
    set(CMAKE_SYSTEM_VERSION $ENV{ANDROID_SDK_VERSION})
    set(CMAKE_ANDROID_ARCH_ABI $ENV{ANDROID_ABI})
    set(CMAKE_ANDROID_NDK $ENV{ANDROID_NDK_HOME})
    set(CMAKE_ANDROID_NDK_VERSION  $ENV{ANDROID_PLATFORM})
    set(CMAKE_ANDROID_STL_TYPE gnustl_static)
    set(ANDROID_TOOLCHAIN clang)
    set(CMAKE_TOOLCHAIN_FILE $ENV{ANDROID_NDK_HOME}/build/cmake/android.toolchain.cmake)

    #JAVA TOOLCHAIN
    set(JAVA_AWT_LIBRARY "$ENV{JAVA_HOME}/lib/libjawt.so")
    set(JAVA_JVM_LIBRARY "$ENV{JAVA_HOME}/lib/server/libjvm.so")

    set(JAVA_INCLUDE_PATH "$ENV{JAVA_HOME}/include")
    set(JAVA_INCLUDE_PATH2 "$ENV{JAVA_HOME}/include/linux")
    set(JAVA_AWT_INCLUDE_PATH "$ENV{JAVA_HOME}/include")
endif()


#COMMON PROJECT'S FILES
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


#PLATFORM SPECIFIC BUILD
if(WIN32)
    message(STATUS "WIN32 DISTRIBUTION FOUND")
    find_library(MS-LLVM LLVM PATHS ${CMAKE_SOURCE_DIR}/external/microsoft-llvm NAMES microsoft-llvm ms-llvm c-llvm MS-LLVM)
    if(${ms-llvm})
        message(FATAL_ERROR "COULD NOT FIND MS-LLVM 'microsoft-llvm'")
    else()
        include_directories(${CMAKE_SOURCE_DIR}/external/microsoft-llvm/include)
        message(STATUS "MS-LLVM HAS BEEN FOUND")
    endif()

    find_library(pcre2 pcre2 PATHS ${CMAKE_SOURCE_DIR}/external/pcre2 NAMES pcre pcre2)
    if(${pcre})
        message(FATAL_ERROR "COULD NOT FIND PERL REGULAR EXPRESSIONS V2 'pcre2'")
    else()
        include_directories(${CMAKE_SOURCE_DIR}/external/pcre2/src)
        message(STATUS "PERL REGULAR EXPRESSION V2 HAS BEEN FOUND")
    endif()
    #WINDOWS PROJECT'S FILES
    file(GLOB_RECURSE NCURSES_SOURCES
            ${CMAKE_SOURCE_DIR}/external/ncurses/source/*.d
            ${CMAKE_SOURCE_DIR}/external/ncurses/C/*.h
            )
    include_directories(${CMAKE_SOURCE_DIR}/external/ncurses/C/)
endif()


if(WIN32)
    add_executable(${PROJECT_NAME}
            ${SOURCES}
            ${HEADERS}
            ${GC_SOURCES}
            ${NCURSES_SOURCES}
            )
    target_link_libraries(${PROJECT_NAME} PRIVATE ms-llvm pcre)
else()
    add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} ${GC_SOURCES})
endif()