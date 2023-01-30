cmake_minimum_required(VERSION 3.23)
project(Number_Guessing_Game)

set(CMAKE_CXX_STANDARD 23)

set(Headers GuessingGame.h)

add_executable(Number_Guessing_Game ${PROJECT_SOURCE_DIR}/ main.cpp GuessingGame.cpp)
