cmake_minimum_required(VERSION 3.19)
project(xuefei_depth_c C)

set(CMAKE_C_STANDARD 99)

add_executable(xuefei_depth_c main.c)
# 引入目录
#ADD_SUBDIRECTORY(data-structure)


add_executable(ContiguousList " data-structure/linear-list/ContiguousList.c")

add_executable(SingleLinkedList " data-structure/linear-list/SingleLinkedList.c")
add_executable(LinkBiTree " data-structure/tree/LinkBiTree.c")
add_executable(PreOrderTraverse " data-structure/tree/PreOrderTraverse.c")