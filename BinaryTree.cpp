#include <iostream>
#include "BinaryTree.h"


using namespace std;

BinaryTree::BinaryTree(/* args */)
{
    root = new TreeNode;
    root->value = 1;
    root->LeftNode = new TreeNode;
    root->LeftNode->value = 2;
    root->LeftNode->LeftNode = NULL;
    root->LeftNode->RightNode = NULL;
    root->RightNode = new TreeNode;
    root->RightNode->value = 3;
    root->RightNode->LeftNode = NULL;
    root->RightNode->RightNode = NULL;
}

BinaryTree::~BinaryTree()
{
}

void BinaryTree::RED(){
    RED(root);
    cout << endl;
}

void BinaryTree::ERD(){
    ERD(root);
    cout << endl;
}

void BinaryTree::EDR(){
    EDR(root);

    cout << endl;
}

void BinaryTree::RED(TreePointer r){

    if(r == NULL) return;

    cout << r->value << " ";
    RED(r->LeftNode);
    RED(r->RightNode);
}

void BinaryTree::ERD(TreePointer r){

    if(r == NULL) return;

    RED(r->LeftNode);
    cout << r->value << " ";
    RED(r->RightNode);
}

void BinaryTree::EDR(TreePointer r){

    if(r == NULL) return;

    RED(r->LeftNode);
    RED(r->RightNode);
    cout << r->value << " ";
}