
#ifndef BINARYTREE_H
#define BINARYTREE_H

class BinaryTree
{
private:

    struct TreeNode
    {
        int value;
        TreeNode * LeftNode;
        TreeNode * RightNode;
    };
    typedef TreeNode* TreePointer;
    TreePointer root = nullptr;

    void RED(TreePointer r);
    void ERD(TreePointer r);
    void EDR(TreePointer r);
public:
    void RED();
    void ERD();
    void EDR();
    BinaryTree(/* args */);
    ~BinaryTree();
};

#endif