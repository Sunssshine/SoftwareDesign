cmake_minimum_required(VERSION 3.0)

project(software_design)

set(SRC main.cpp src/container/BinaryTree.h src/container/TreeNode.h)

add_executable(software_design ${SRC})