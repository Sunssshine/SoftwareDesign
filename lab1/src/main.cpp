#include "container/BinaryTree.h"
#include "container/BinaryTreeIterator.h"

#include "shapes/Circle.h"
#include "shapes/Ellipse.h"
#include "shapes/Text.h"
#include "shapes/TextInEllipse.h"

//typedef TreeNode<Shape *> nodeType;
typedef TreeNode<int> nodeType;

int main(int argc, char **argv)
{
    /*Shape *shape_0 = new Circle(Point(1,2), 1.5);
    Shape *shape_1 = new Ellipse(Point(1,2), 1, 2);
    Shape *shape_2 = new Text("text", 8);
    Shape *shape_3 = new TextInEllipse("text in ellipse", 8, Point(1, 2), 2, 3);*/
	int a = 0;
	int b = 1;
	int c = 2;
	int d = 3;
	nodeType* node0 = new nodeType(a);
	nodeType *node1 = new nodeType(b);
    nodeType *node2 = new nodeType(c);
	nodeType* node3 = new nodeType(d);
    
    try {
		
        BinaryTree<nodeType> tree;
		tree.push(node0);
		tree.push(node1);
		tree.push(node2);
		tree.push(node3);
//        BinaryTree<nodeType> tree(nullptr);
        BinaryTreeIterator<nodeType> iter = tree.iterator();

        while(iter.has_next()) {
            std::cout << iter.next()->elem() << std::endl;
        }
    }
    catch(EmptyErrorBT &e)
    {
        std::cout << "Exception:" << e.what() << std::endl;
    }
    catch(InvalidIteratorBT &e)
    {
        std::cout << "Exception:" << e.what() << std::endl;
    }
    catch(std::exception &e){
        std::cout << "Exception:" << e.what() << std::endl;
    }

    return 0;
}