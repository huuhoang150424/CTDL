#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void printArray(int arr[], int size) {
    for (int i=0;i<size;i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
void bubbleSort(int arr[], int size) {
    for (int i=0;i<size-1;i++) {
        for (int j=0;j<size-i-1;j++) {
            if (arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void generateAndWriteToFile(int N, int MAX) {
    ofstream outFile("dataN.txt");
    outFile<<N<< endl;
    srand(time(0));
    for (int i=0;i<N;i++) {
        int randomNumber=rand()%(MAX + 1);
        outFile<<randomNumber<< " ";
    }
    outFile.close();
}
void readAndPrintFromFile(int N) {
    ifstream inFile("dataN.txt");
    int fileN;
    inFile>>fileN;
    int num;
    for (int i=0;i<N;i++) {
        inFile>>num;
        cout<<num<< " ";
    }
    inFile.close();
}
int main() {
    int N;
    cout<<"Nhap vao so nguyen duong N: ";
    cin>>N;
    int arr1[N];
    cout<<"Nhap vao "<<N<<"so nguyen:";
    for (int i=0;i<N;i++) {
        cin>>arr1[i];
    }
    bubbleSort(arr1, N);
    cout<<"Mang sau khi sap xep: ";
    printArray(arr1, N);
    int N2,MAX;
    cout<<"Nhap vao so nguyen duong N va MAX: ";
    cin>>N2>>MAX;
    generateAndWriteToFile(N2,MAX);
    cout<<"Da sinh va ghi vao file dataN.txt!" << endl;
    int N3;
    cout<<"Nhap vao so nguyen duong N: ";
    cin>>N3;
    cout<<"Cac so nguyen trong file dataN.txt tru so dau tien (N): ";
    readAndPrintFromFile(N3);
}
