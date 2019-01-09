cmake_minimum_required(VERSION 3.13)
project(1_ C)

set(CMAKE_C_STANDARD 99)
SET (CMAKE_USE_RELATIVE_PATHS ON)
add_executable(1_ main.c socket.h socket_client.c)