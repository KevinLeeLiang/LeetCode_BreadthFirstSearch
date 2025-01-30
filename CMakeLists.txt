cmake_minimum_required(VERSION 3.17)
project(BreadthFirstSearch)

set(CMAKE_CXX_STANDARD 20)
include_directories(util)
add_executable(BreadthFirstSearch util/util.h test_factory.h main.cpp L100_isSameTree/L100_isSameTree.cpp L100_isSameTree/L100_isSameTree.h L101_isSymmetric/L101_isSymmetric.cpp L101_isSymmetric/L101_isSymmetric.h)