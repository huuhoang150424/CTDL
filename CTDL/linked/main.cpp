#include <iostream>
#include <string>
#include "List.h"
using namespace std;



int main() {
    List<int> ds;
    ds.addData(3);
    ds.addData(5);
    ds.addData(9);
    ds.addData(6);
    ds.addData(10);
    ds.deleteItemIndex(1);
    //cout<<ds.getItemIndex(1);
    cout<<endl;
    ds.print();
    cout<<endl;
}