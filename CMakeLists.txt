cmake_minimum_required(VERSION 3.9)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 11)

add_executable(TicTacToe main.cpp Board.cpp Board.h Element.cpp Element.h Index.cpp Index.h IllegalCharException.cpp IllegalCharException.h IllegalCoordinateException.cpp IllegalCoordinateException.h)