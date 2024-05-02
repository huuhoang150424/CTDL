#ifndef List_h
#define List_h
#include <iostream>
#include <string>
#include "node.h"
template <class T>
class List {
private:
    node<T> *head;
public:
    List() {
        head=NULL;
    }
    int getSize() {
        node<T> *p=head;
        int count=0;
        while(p!=NULL) {
            count++;
            p=p->next;
        }
        return count;
    }
    void print() const {
        node<T> *p=head;
        while (p!=NULL)
        {
            std::cout<<p->data<<" ,";
            p=p->next;
        }
        
    }
    void addData(T value) {
        node<T> *newNode=new node<T>;
        newNode->data=value;
        newNode->next=NULL;
        if (head==NULL) {
            head=newNode;
        }else {
            node<T> *p=head;
            while(p->next!=NULL) {
                p=p->next;
            }
            p->next=newNode;
        }
    }
    T getItemIndex(int index) {
        int count=1;
        node<T> *p=head;
        while(p!=NULL && count<index){
            count++;
            p=p->next;
        }
        return p->data;
    }
    void deleteItemIndex(int index) {
        if (index==1) {
            node<T> *p=head;
            head=p->next;
            delete p;
        }else {
            int count=1;
            node<T> *p=head;
            node<T> *prev=NULL;
            while (p!=NULL && count<index) {
                prev=p;
                p=p->next;       
                count++;         
            }
            prev->next=p->next;
            delete p;
        }
    }
    void sort() {
        if (head == NULL || head->next == NULL)
            return; // Danh sách rỗng hoặc chỉ có một phần tử
        bool doiCho;
        node<T> *conTro1;
        node<T> *conTroCuoi = NULL;
        do {
            doiCho = false;
            conTro1 = head;
            while (conTro1->next != conTroCuoi) {
                if (conTro1->data > conTro1->next->data) {
                    // Hoán đổi dữ liệu giữa các nút
                    T temp = conTro1->data;
                    conTro1->data = conTro1->next->data;
                    conTro1->next->data = temp;
                    doiCho = true;
                }
                conTro1 = conTro1->next;
            }
            conTroCuoi = conTro1;
        } while (doiCho);
    }
    void Insert(int index, T value) {
        if (index<1)
            return; 
        node<T> *newNode=new node<T>;
        newNode->data=value;
        newNode->next=NULL;
        if (index==1) {
            newNode->next=head;
            head=newNode;
            return;
        }
        node<T> *temp=head;
        for (int i=1;temp!=NULL && i<index-1;++i)
            temp=temp->next;
        if (temp==NULL)
            return; 
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void Update(int index,T value) {
        if (index<1)
            return; 
        node<T> *temp=head;
        for (int i=1; temp!=NULL && i<index;++i)
            temp=temp->next;
        if (temp==NULL)
            return; 
        temp->data=value;
    }


    
};
#endif







