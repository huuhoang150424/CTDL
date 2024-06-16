#include <bits/stdc++.h>
using namespace std;
template <class T>
struct node
{
    T data;
    node<T> *next;
    node(T data) {
        this->data=data;
        this->next=NULL;
    }
};
template <class T>
class Queue {
private:
    node<T>* head;
    node<T>* tail;
public:

    Queue() {head=NULL;tail=NULL;}

    void enQueue(T value) {
        node<T> * newNode=new node<T>(value);
        if (head==NULL && tail==NULL) {
            head=newNode;
            tail=newNode;
        }
        tail->next=newNode;
        tail=newNode;
    }
    T deQueue() {
        T tmpValue=head->data;
        node<T> *p=head;
        head=head->next;
        delete p;
        if (head==NULL) {
            tail=NULL;
        }
        return tmpValue;
    }

    T getHead() const {return head->data;}
    bool isEmpty() const {
        return head==NULL;
    }
    ~Queue() {
        while (head!=NULL) {
            node<T> *p=head;
            head=head->next;
            delete p;
        }
    }

};



int main() {
    Queue<int> q;
    //q.enQueue(1);
    q.enQueue(5);
    q.enQueue(3);
    q.enQueue(9);
    cout<<q.getHead()<<endl;
}