#ifndef TREE_H
#define TREE_H

#include "./node.h"
#include <iostream>

template <class T>
class tree {
private:
    node<T> *root;
    void addNode(node<T> * current,T value) {
        if (value<current->data) {
            if (current->left==NULL) {
                current->left=new node<T>(value);
            } else {
                addNode(current->left,value);
            }
        } else {
            if (current->right==NULL) {
                current->right=new node<T>(value);
            } else {
                addNode(current->right,value);
            }
        }
    }
public:
    tree() {root=NULL;}
    //thêm node
    void addNode(T value) {
        if (root==NULL) root=new node<T>(value);
        else {
            addNode(root,value);
        }
    }
    void printTree(node<T> *current) const {
        if (current!=NULL) {
            printTree(current->left);
            std::cout<<current->data<<' '; 
            printTree(current->right);
        }
    }
    // Hàm bao bọc cho việc in cây
    void printTree() const {
        printTree(root);
    }

};

#endif // TREE_H
