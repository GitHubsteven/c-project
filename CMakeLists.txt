cmake_minimum_required(VERSION 3.13)
project(bi_tree C)

set(CMAKE_C_STANDARD 99)

add_executable(bi_tree main.c data.structure/BiTree02.c data.structure/PointAddr.c data.structure/BiTree02.h data.structure/main.c data.structure/BaseBiTree.c)