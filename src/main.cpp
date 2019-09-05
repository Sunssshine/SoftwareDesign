#include "container/BinaryTree.h"
#include "shapes/Circle.h"

#define _USE_MATH_DEFINES
#include <cmath>

int main(int argc, char **argv)
{
//    TreeNode<int> *node3 = new TreeNode<int>(3);
//    TreeNode<int> *node1 = new TreeNode<int>(1);
//    TreeNode<int> *node2 = new TreeNode<int>(2, node3,1);
//    TreeNode<int> *node0 = new TreeNode<int>(0, node1, node2);
//
//    BinaryTree<TreeNode<int>> tree(node0);
//    tree.print_klp();

    Circle c(Point(2,1), 1);

    c.scale(1.25);

    std::cout << c.center().x << ' ' << c.center().y << ' ' << c.radius() << std::endl;

    return 0;
}