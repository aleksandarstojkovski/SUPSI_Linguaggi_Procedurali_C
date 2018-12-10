cmake_minimum_required(VERSION 3.12)
project(dec_to_bin C)

set(CMAKE_C_STANDARD 99)

add_executable(dec_to_bin main.c ../s2_es1_v2/stack.c ../s2_es1_v2/stack.h ../s2_es1_v2/main.c)