#include <iostream>
#include "mylib.h"
using namespace std;





int main() {
    int N,MAX;
    int a[N];
    cout<<"Moi ban nhap so luong phan tu: "; cin>>N;
    for(int i=0;i<N;i++) {
        cout<<"Moi ban nhap so nguyen thu i: "<<i+1;
        cin>>a[i];
    }
    sapxep(a,N);
    print(a,N);

}


