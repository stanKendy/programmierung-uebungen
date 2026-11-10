cmake_minimum_required(VERSION 4.3)
project(first_project)

set(CMAKE_CXX_STANDARD 20)

add_executable(first_project P1/main.cpp
        P1/first.h
        P1/Funktion.cpp
        P4/statistik.cpp
        P4/statistik.h
        P4/f_stat.cpp
)

add_executable(second_project P2/main2.cpp
        P2/Funktions2.cpp
        P2/head2.h)
add_executable(third_project P3/anhalte.cpp P3/funktion.cpp P3/anhalte.h)
add_executable(fourth_project P4/statistik.cpp P4/f_stat.cpp P4/statistik.h)