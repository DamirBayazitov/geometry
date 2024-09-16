cmake_minimum_required(VERSION 3.22.5)

project(geometry)

include_directories(include)
add_library(myvector include/vector.h src/vector.cpp)

add_library(mypoint include/point.h src/point.cpp)

add_executable(geometry src/main.cpp)

target_link_libraries(geometry
    PRIVATE 
        mypoint myvector)