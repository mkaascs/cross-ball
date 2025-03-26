cmake_minimum_required(VERSION 3.28)
project(cross_ball C)

set(CMAKE_C_STANDARD 11)

add_executable(cross_ball main.c
        game/game.h
        game/game.c)
