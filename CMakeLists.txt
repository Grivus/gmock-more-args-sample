cmake_minimum_required(VERSION 2.8)
project(gmock-more-args-sample)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "CMake")

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")

add_definitions( -DUNICODE -D_UNICODE )

add_subdirectory(src/3rd-party/googletest EXCLUDE_FROM_ALL)

include_directories(src/3rd-party/googletest/googletest/include)
include_directories(src/3rd-party/googletest/googlemock/include)
include_directories(src/3rd-party/gmock-more-args/include)

add_executable(gmock-more-args-sample src/sample/main.cpp src/3rd-party/gmock-more-args/include/gmock-more-args/gmock-more-args.h)

target_link_libraries (gmock-more-args-sample gmock_main)