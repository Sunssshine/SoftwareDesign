//
// Created by dmo on 07.09.2019.
//

#ifndef SOFTWARE_DESIGN_BINARYTREEITERATOR_H
#define SOFTWARE_DESIGN_BINARYTREEITERATOR_H

#include <stack>
#include <queue>
#include "../exceptions/InvalidIteratorBT.h"
#include "BinaryTree.h"

template <typename T>
class BinaryTree;

template <typename T>
class BinaryTreeIterator {
    //std::stack<T *> stack; // for depth root, left, right
	std::queue<T*> stack; // for width root, left, right
public:
    explicit BinaryTreeIterator(T *root);
    explicit BinaryTreeIterator(const BinaryTree<T> &tree);

    bool has_next();
    T *next();

};

template<typename T>
BinaryTreeIterator<T>::BinaryTreeIterator(T *root) {
    if (root == nullptr)
        throw InvalidIteratorBT("nullptr root");
    stack.push(root);
}

template<typename T>
BinaryTreeIterator<T>::BinaryTreeIterator(const BinaryTree<T> &tree) {
    if (tree.root() == nullptr)
        throw InvalidIteratorBT("nullptr root");
    stack.push(tree.root());
}

template<typename T>
bool BinaryTreeIterator<T>::has_next() {
    return !stack.empty();
}


//template<typename T>
//T *BinaryTreeIterator<T>::next() {	//depth root, left, right
//    T *node = stack.top();
//    stack.pop();
//
//    if (node->right())
//        stack.push(node->right());
//
//    if (node->left())
//        stack.push(node->left());
//    return node;
//}


template<typename T>
T* BinaryTreeIterator<T>::next() {		//width root, left, right
	T* node = stack.front();
	stack.pop();

	if (node->left())
		stack.push(node->left());

	if (node->right())
		stack.push(node->right());

	return node;
}




#endif //SOFTWARE_DESIGN_BINARYTREEITERATOR_H
