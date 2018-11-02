cmake_minimum_required(VERSION 3.12)
project(s1_es1 C)

set(CMAKE_C_STANDARD 99)

add_executable(s1_es1 main.c ../tests/main.c ../s3_es1/main.c)