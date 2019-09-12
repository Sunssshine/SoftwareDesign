#define _USE_MATH_DEFINES
#include <cmath>

#include "container/BinaryTree.h"
#include "container/BinaryTreeIterator.h"

#include "shapes/Circle.h"
#include "shapes/Ellipse.h"
#include "shapes/Text.h"
#include "shapes/TextInEllipse.h"

typedef TreeNode<Shape *> nodeType;

int main(int argc, char **argv)
{
    Shape *shape_0 = new Circle(Point(1,2), 1.5);
    Shape *shape_1 = new Ellipse(Point(1,2), 1, 2);
    Shape *shape_2 = new Text("text", 8);
    Shape *shape_3 = new TextInEllipse("text in ellipse", 8, Point(1, 2), 2, 3);

    nodeType *node1 = new nodeType(shape_0);
    nodeType *node2 = new nodeType(shape_1);
    nodeType *node0 = new nodeType(shape_2, node1, node2);

    node1->left(shape_3);

    BinaryTree<nodeType> tree(node0);
    BinaryTreeIterator<nodeType> iter(tree);

    while(iter.has_next()) {
        std::cout << *(iter.next()->elem()) << std::endl;
    }

    return 0;
}