#ifndef NODE_H
#define NODE_H

#include <cstddef> // Để sử dụng NULL
template <class T>

struct node
{
    node<T> *left;
    node<T> *right;
    T data;
public: 
    node(T data) {
        this->left=NULL;
        this->right=NULL;
        this->data=data;
    }
};
#endif