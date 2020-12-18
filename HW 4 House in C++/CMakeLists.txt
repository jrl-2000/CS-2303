cmake_minimum_required(VERSION 3.17)
project(2020HW4starter)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(2020HW4starter
        src/2020HW4starter.cpp
        src/production.cpp
        src/production.h
        src/tests.cpp
        src/tests.h src/House.cpp src/House.h src/Layout.cpp src/Layout.h src/Search.cpp src/Search.h src/JRLName.h src/Room.cpp src/Room.h src/TMSName.h)
