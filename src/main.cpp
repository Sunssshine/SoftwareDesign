#define _USE_MATH_DEFINES
#include <cmath>

#include "container/BinaryTree.h"
#include "container/BinaryTreeIterator.h"

#include "shapes/Circle.h"
#include "shapes/Ellipse.h"
#include "shapes/Text.h"

typedef TreeNode<int> nodeType;

int main(int argc, char **argv)
{
    nodeType *node1 = new nodeType(1);
    nodeType *node2 = new nodeType(5);
    nodeType *node0 = new nodeType(0, node1, node2);

    node1->left(new nodeType(2));
    node2->right(new nodeType(6));

    BinaryTree<nodeType> tree(node0);
    tree.print_klp();
    std::cout << std::endl;
    BinaryTreeIterator<nodeType> iter(tree);
//    std::cout << iter.has_next();
    while(iter.has_next())
        std::cout << iter.next()->elem() << ' ';
//    Shape *shape_0 = new Circle(Point(1,2), 1.5);
//    Shape *shape_1 = new Ellipse(Point(1,2), 1, 2);
//    Shape *shape_2 = new Text("test", 8);

//    std::cout << shape_0->get_info() << std::endl;
//    std::cout << shape_1->get_info() << std::endl;
//
//    shape_1->move(Point(10,12));
//
//    shape_1->rotate(float(M_PI_2));
//
//
//    std::cout << shape_1->get_info() << std::endl;
//
//    delete shape_0;
//    delete shape_1;
//    delete shape_2;


    return 0;
}