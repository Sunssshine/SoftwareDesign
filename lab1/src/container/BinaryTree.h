//
// Created by dmo on 05.09.2019.
//

#ifndef SOFTWARE_DESIGN_BINARYTREE_H
#define SOFTWARE_DESIGN_BINARYTREE_H

#include <iostream>
#include "TreeNode.h"
#include "../exceptions/EmpyErrorBT.h"
#include "BinaryTreeIterator.h"

template <typename T>
class BinaryTree {
    T *root_;

    void print_klp_(T *node);
public:
    explicit BinaryTree(T *base);

    BinaryTreeIterator<T> iterator(){
        return BinaryTreeIterator<T>(*this);
    }

    T* root() const { return root_; }
    void print_klp();
    void clear(T* node);
    void clear();
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
    clear(root_);
}


template <typename T>
BinaryTree<T>::~BinaryTree(){
    clear(root_);
    root_ = nullptr;
}


#endif //SOFTWARE_DESIGN_BINARYTREE_H
