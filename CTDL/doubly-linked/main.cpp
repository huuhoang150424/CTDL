#include <iostream>
#include "list.h"
using namespace std;



int main() {
    list<int> ds;
    ds.addItem(1);
    ds.addItem(9);
    ds.addItem(5);
    ds.addItem(2);
    ds.addItem(9);
    ds.addItem(5);
    ds.addItem(8);
    ds.addItem(9);

    //cout<<ds.getItemIndex(2);
    //ds.reserver();
    list<int> ds1=ds;
    ds.addItem(3);
    ds.deleteItemIndex(1);
    ds1.printAll();
    cout<<endl;
    ds.printAll();


}