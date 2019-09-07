#define _USE_MATH_DEFINES
#include <cmath>

#include "container/BinaryTree.h"

#include "shapes/Circle.h"
#include "shapes/Ellipse.h"
#include "shapes/Text.h"

int main(int argc, char **argv)
{
//    TreeNode<int> *node3 = new TreeNode<int>(3);
//    TreeNode<int> *node1 = new TreeNode<int>(1);
//    TreeNode<int> *node2 = new TreeNode<int>(2, node3,1);
//    TreeNode<int> *node0 = new TreeNode<int>(0, node1, node2);
//
//    BinaryTree<TreeNode<int>> tree(node0);
//    tree.print_klp();

//    Shape *shape_0 = new Circle(Point(1,2), 1.5);
    Shape *shape_1 = new Ellipse(Point(1,2), 1, 2);
//    Shape *shape_2 = new Text("test", 8);

//    std::cout << shape_0->get_info() << std::endl;
    std::cout << shape_1->get_info() << std::endl;

    shape_1->move(Point(10,12));

    shape_1->rotate(float(M_PI_2));


    std::cout << shape_1->get_info() << std::endl;

//    delete shape_0;
    delete shape_1;
//    delete shape_2;

    return 0;
}