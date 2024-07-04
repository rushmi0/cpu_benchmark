cmake_minimum_required(VERSION 3.28)
project(cpu_benchmark C)

set(CMAKE_C_STANDARD 17)

add_executable(cpu_benchmark main.c src/proof_of_work.c)
