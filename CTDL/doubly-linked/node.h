#ifndef node_h
#define node_h
template <class T>
struct  node
{
    T data;
    node<T>*next;
};
#endif