cmake_minimum_required(VERSION 3.0)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0")

project(software_design)

set(SRC src/main.cpp
        src/container/BinaryTree.h
        src/container/TreeNode.h
        src/shapes/Shape.h src/shapes/Shape.cpp
        src/shapes/Circle.cpp  src/shapes/Circle.h
        src/shapes/Ellipse.cpp src/shapes/Ellipse.h
        src/shapes/Text.cpp src/shapes/Text.h src/container/BinaryTreeIterator.h src/shapes/TextInEllipse.cpp src/shapes/TextInEllipse.h src/exceptions/EmpyErrorBT.h src/exceptions/BTException.h src/exceptions/InvalidIteratorBT.h)

add_executable(software_design ${SRC})