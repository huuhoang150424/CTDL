#include <bits/stdc++.h>
using namespace std;

//bubble sort (tăng dần)
void bubbleSort(int a[],int n) {
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[i]<a[j]) {
                int tmp=a[j];
                a[j]=a[i];
                a[i]=tmp;
            }
        }
    }
}

//selection sort
void selectionSort(int a[],int n) {
    int min;
    for (int i=0;i<n;i++) {
        min=i;
        for (int j=i+1;j<n;j++) {
            if (a[min]>a[j]) {
                min=j;
            }
        }
        int tmp=a[min];
        a[min]=a[i];
        a[i]=tmp;
    }
}
// insertSort
void insertSort(int a[],int n) {
    int pos,x;
    for (int i=0;i<n;i++) {
        
    }
}


int main() {
    const int size=5;
    int a[size];
    for (int i=0;i<size;i++) {
        cin>>a[i];
    }
    selectionSort(a,size);
    for (int i=0;i<size;i++) {
        cout<<a[i]<<" ";
    }

}
