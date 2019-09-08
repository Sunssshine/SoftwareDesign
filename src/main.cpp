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
    Shape *shape_2 = new Text("test", 8);
    Shape *shape_3 = new TextInEllipse("test", 8, Point(1, 2), 2, 3);

    nodeType *node1 = new nodeType(shape_0);
    nodeType *node2 = new nodeType(shape_1);
    nodeType *node0 = new nodeType(shape_2, node1, node2);

//
    node1->left(shape_3);
//    node2->right(new nodeType(6));
//
    BinaryTree<nodeType> tree(node0);
//    tree.print_klp();
//    std::cout << std::endl;
    BinaryTreeIterator<nodeType> iter(tree);
//    std::cout << iter.has_next();
    while(iter.has_next())
        std::cout << iter.next()->elem()->get_info() << std::endl;


//
//    delete shape_0;
//    delete shape_1;
//    delete shape_2;
//    delete shape_3;


    return 0;
}