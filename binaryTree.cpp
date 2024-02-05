#include<iostream>
using namespace std;

// binary tree traversals have 2 types
// -> depth-first search
// -> breadth-first searc

// Depth-first search
// it has 3 types
// -> preorder || -> inorder || -> postorder
// -> preorder = root - left child - right child
// -> inorder = left child - root - right child
// -> postorder = left child - right child - root

// Breadth-first search
//it has only one type
// -> level order traversal
// this works level by level and also left to right




// using structure to define the tree
struct Tree{
    int data;
    struct Tree* left;
    struct Tree* right;
};

// using class to define the tree
class cTree{
    public:
    int data;
    cTree* left;
    cTree* right;
}





int main(){

    return 0;
}