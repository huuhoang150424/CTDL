#ifndef stack_h
#define stack_h
#include "./node.h"
template <class T>

class stack {
private:
    node<T> *top;
public:
    stack() {top=NULL;}
    void push(T value) {
        node<T> *newNode=new node<T>;
        newNode->data=value;
        newNode->next=top;
        top=newNode;
    }
    T pop() {
        T tempValue=top->data;
        node<T> *p=top;
        top=top->next;
        delete p;
        return tempValue;
    }
    //getTop
    T getTop() {
        return top->data;
    }
    //isEmpty
    bool isEmpty() const {
        return top==NULL?true:false;
    }


};




#endif