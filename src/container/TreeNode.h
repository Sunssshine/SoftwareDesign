//
// Created by dmo on 05.09.2019.
//

#ifndef SOFTWARE_DESIGN_TREENODE_H
#define SOFTWARE_DESIGN_TREENODE_H

#include <utility>

template<typename T>
class TreeNode{
    T elem_;
    TreeNode *left_;
    TreeNode *right_;
    TreeNode *parent_;
public:
    explicit TreeNode(T base, TreeNode *parent=nullptr);
    TreeNode(T base, TreeNode *elem, bool is_right = false, TreeNode *parent = nullptr);
    TreeNode(T base, TreeNode* left, TreeNode* right, TreeNode *parent=nullptr);

    T &elem();
    const T &elem() const;
    void elem(T base);

    TreeNode *&parent();
    const TreeNode *&parent() const;

    TreeNode *left();
    void left(T left);
    void left(TreeNode *left);

    TreeNode *right();
    void right(T right);
    void right(TreeNode *right);

};

template<typename T>
TreeNode<T>::TreeNode(T base, TreeNode *parent) : elem_(base), left_(nullptr), right_(nullptr), parent_(parent){}

template<typename T>
TreeNode<T>::TreeNode(T base, TreeNode* left, TreeNode* right, TreeNode *parent) :
        elem_(base), left_(left), right_(right), parent_(parent){}

template<typename T>
TreeNode<T>::TreeNode(T base, TreeNode *elem, bool is_right, TreeNode *parent) : elem_(base), parent_(parent) {
    if (is_right)
    {
        left_ = nullptr;
        right_ = elem;
        right_->parent_ = this;
    }
    else
    {
        left_ = elem;
        left_->parent_ = this;
        right_ = nullptr;
    }
}

template<typename T>
T &TreeNode<T>::elem() { return elem_; }

template<typename T>
const T &TreeNode<T>::elem() const { return elem_; }

template<typename T>
void TreeNode<T>::elem(T base) { elem_ = base; }

template<typename T>
TreeNode<T> *&TreeNode<T>::parent() { return parent_; }

template<typename T>
const TreeNode<T> *&TreeNode<T>::parent() const { return parent_; }

template<typename T>
TreeNode<T> *TreeNode<T>::left() { return left_; }

template<typename T>
void TreeNode<T>::left(T left) { left_ = new TreeNode<T>(left, this); }

template<typename T>
void TreeNode<T>::left(TreeNode *left) {
    left_ = left;
    left_->parent_ = this;
}

template<typename T>
TreeNode<T> *TreeNode<T>::right() { return right_; }

template<typename T>
void TreeNode<T>::right(T right) { right_ = new TreeNode<T>(right, this); }

template<typename T>
void TreeNode<T>::right(TreeNode *right) {
    right_ = right;
    right_->parent_ = this;
}

#endif //SOFTWARE_DESIGN_TREENODE_H
