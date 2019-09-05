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
public:
    explicit TreeNode(T base) : elem_(base), left_(nullptr), right_(nullptr){}
    TreeNode(T base, TreeNode *elem, bool is_right = false);
    TreeNode(T base, TreeNode* left, TreeNode* right) : elem_(base), left_(left), right_(right){}

    T &elem() { return elem_; }
    const T &elem() const { return elem_; }
    void elem(T base) { elem_ = base; }

    TreeNode *left() { return left_; }
    void left(T left) { left_ = new TreeNode<T>(left); }
    void left(TreeNode *left) { left_ = left; }

    TreeNode *right() { return right_; }
    void right(T right) { right_ = new TreeNode<T>(right); }
    void right(TreeNode *right) { right_ = right; }

};

template<typename T>
TreeNode<T>::TreeNode(T base, TreeNode *elem, bool is_right) : elem_(base)
{
    if (is_right)
    {
        left_ = nullptr;
        right_ = elem;
    }
    else
    {
        left_ = elem;
        right_ = nullptr;
    }
}

#endif //SOFTWARE_DESIGN_TREENODE_H
