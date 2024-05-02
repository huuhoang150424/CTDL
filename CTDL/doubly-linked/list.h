#ifndef list_h
#define list_h
#include "node.h"


template <class T>


class list
{
private:
    node<T> *head;
    node<T> *tail;
public:
    list() {
        head=NULL;
        tail=NULL;
    }
    list(const list<T> &o) {
    head=NULL;
    tail=NULL;
    node<T> *p =o.head;
    while (p != NULL) {
        addItem(p->data);
        p = p->next;
    }
    }
    list& operator=(const list<T> &o) {
        if (this==&o) {
            return *this;
        }
        node<T> *current=head;
        while (current!=NULL) {
            node<T> *nextNode=current->next;
            delete current;
            current=nextNode;
        }
        head=NULL;
        tail=NULL;
        node<T> *p =o.head;
        while (p!=NULL) {
            addItem(p->data);
            p=p->next;
        }
        return *this;
    }
    void addItem(T value) {
        node<T> *newNode=new node<T>;
        newNode->data=value;
        newNode->next=NULL;
        if (head==NULL && tail==NULL){
            head=newNode;
            tail=newNode;
        }else {
            tail->next=newNode;
            tail=newNode;
        }
    }
    void printAll() const {
        node<T>*p=head;
        while (p!=NULL) {
            std::cout<<p->data<<" ;";
            p=p->next;
        }
    }
    int getSize() const {
        int count=1;
        node<T> *p=head;
        while (p!=NULL)
        {
            count++;
            p=p->next;
        }
        return count;
    }
    T getItemIndex(int index) {
        node<T> *p=head;
        int count=1;
        while (count<index && p!=NULL) {
            count++;
            p=p->next;
        }
        return p->data;
    }
    void reserver() {
        node<T> *prev=NULL;
        node<T> *current=head;
        node<T> *nextNode=NULL;
        while (current!=NULL) {
            nextNode=current->next;
            current->next=prev;
            prev=current;
            current=nextNode;
        }
        head=prev;
    }
    void deleteItemIndex(int index) {
        if (index==1) {
            node<T> *p=head;
            head=p->next;
            delete p;
        }
        else {
            node<T> *p=head;
            node<T> *temp=NULL;
            int count=1;
            while (p!=NULL && count<index) {
                temp=p;
                p=p->next;
                count++;
            }
            temp->next=p->next;
            delete p;
            if (tail==NULL) {
                tail->next=temp;
            }
        }
    }
    void upDate(int index,T value) {
        int count =1;
        node<T> *p=head;
        while (p!=NULL && count<index) {
            p=p->next;
            count++;
        }
        p->data=value;
    }
};

















#endif