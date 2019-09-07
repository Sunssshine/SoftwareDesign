cmake_minimum_required(VERSION 3.0)

project(software_design)

set(SRC src/main.cpp
        src/container/BinaryTree.h
        src/container/TreeNode.h
        src/shapes/Shape.h src/shapes/Shape.cpp
        src/shapes/Circle.cpp  src/shapes/Circle.h
        src/shapes/Ellipse.cpp src/shapes/Ellipse.h
        src/shapes/Text.cpp src/shapes/Text.h src/container/BinaryTreeIterator.h)

add_executable(software_design ${SRC})