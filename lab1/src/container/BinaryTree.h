#ifndef SOFTWARE_DESIGN_BINARYTREE_H
#define SOFTWARE_DESIGN_BINARYTREE_H

#include <iostream>
#include <queue>
#include "TreeNode.h"
#include "../exceptions/EmpyErrorBT.h"
#include "BinaryTreeIterator.h"

template <typename T>
class BinaryTree {
    T *root_;

    void print_klp_(T *node);
public:
	BinaryTree();
    explicit BinaryTree(T *base);

    BinaryTreeIterator<T> iterator(){
        return BinaryTreeIterator<T>(*this);
    }

    T *root() const { return root_; }
    void print_klp();
    void clear(T* node);
    void clear();
	void push(T *);
    ~BinaryTree();
};

template <typename T>
BinaryTree<T>::BinaryTree(T *base) {
    if (base != nullptr)
        root_ = base;
    else
        throw EmptyErrorBT("pointer is empty");
}

template <typename T>
BinaryTree<T>::BinaryTree() {
	root_ = nullptr;
}

template <typename T>
void BinaryTree<T>::push(T *elem) {
	if (root_) {
		std::queue<T*> current;
		current.push(root_);
		size_t queue_sz = 1;
		while (queue_sz && (queue_sz & (queue_sz - 1)) == 0) {
			std::queue<T*> next;
			while (current.size()) {
				auto el = current.front();
				current.pop();
				if (el->left()) {
					next.push(el->left());
				}
				else { 
					el->left(elem);
					return;
				}
				if (el->right()) {
					next.push(el->right());
				}
				else
				{
					el->right(elem);
					return;
				}
			}
			queue_sz = next.size();
			current = next;
		}
	}
	else {
		root_ = elem;
	}
}

template <typename T>
void BinaryTree<T>::print_klp_(T* node)
{
    std::cout << node->elem() << ' ';
    if (node->left()) {
        print_klp_(node->left());
    }
    if (node->right()) {
        print_klp_(node->right());
    }
}

template <typename T>
void BinaryTree<T>::print_klp()
{
    print_klp_(root_);
}

template <typename T>
void BinaryTree<T>::clear(T* node)
{
    if (node == nullptr)
        return;
    if (node->left()) {
        clear(node->left());
    }
    if (node->right()){
        clear(node->right());
    }
	delete node;
}

template <typename T>
void BinaryTree<T>::clear()
{
	if(root_)
		delete root_
	root_ = nullptr;
    clear(root_);
}


template <typename T>
BinaryTree<T>::~BinaryTree(){
    clear(root_);
}


#endif //SOFTWARE_DESIGN_BINARYTREE_H
