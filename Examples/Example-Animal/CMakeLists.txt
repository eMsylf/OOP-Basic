cmake_minimum_required(VERSION 3.12)
project(untitled1)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled1 main.cpp Animal.cpp Animal.h Cat.cpp Cat.h Dog.cpp Dog.h AnimalDetector.cpp AnimalDetector.h)