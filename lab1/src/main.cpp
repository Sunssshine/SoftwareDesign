#include "container/BinaryTree.h"
#include "container/BinaryTreeIterator.h"

#include "shapes/Circle.h"
#include "shapes/Ellipse.h"
#include "shapes/Text.h"
#include "shapes/TextInEllipse.h"

//typedef TreeNode<Shape *> nodeType;
typedef TreeNode<int *> nodeType;

int main(int argc, char **argv)
{
    /*Shape *shape_0 = new Circle(Point(1,2), 1.5);
    Shape *shape_1 = new Ellipse(Point(1,2), 1, 2);
    Shape *shape_2 = new Text("text", 8);
    Shape *shape_3 = new TextInEllipse("text in ellipse", 8, Point(1, 2), 2, 3);*/
	int a = 1;
	int b = 2;
	int c = 3;
    nodeType *node1 = new nodeType(&a);
    nodeType *node2 = new nodeType(&b);
    nodeType *node0 = new nodeType(&c);

    try {
		
        BinaryTree<nodeType> tree(node1);
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