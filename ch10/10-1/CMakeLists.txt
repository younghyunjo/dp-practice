cmake_minimum_required(VERSION 3.10)
project(10_1)

set(CMAKE_CXX_STANDARD 11)

add_executable(10_1 main.cpp GumballMachine.cpp GumballMachine.h State.h NoQuarterState.cpp NoQuarterState.h HasQuarterState.cpp HasQuarterState.h)