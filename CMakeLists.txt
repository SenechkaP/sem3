cmake_minimum_required(VERSION 3.26)
project(sem3)

set(CMAKE_CXX_STANDARD 17)

add_executable(sem3 main.cpp
        main.h
        account.h
        account.cpp
        credit.h
        credit.cpp)
