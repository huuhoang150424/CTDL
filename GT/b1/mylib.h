#ifndef mylib_h
#define mylib_h
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <string>


void docfile(int a[],int N) {
    string fileName="data"+to_string(N)+".txt";
    ifstream fin(fileName);
    int k;
    fin>>k;
    for(int i=0;i<N;i++) {
        fin>>a[i];
    }
    fin.close();
}
void gen(int N,int MAX) {
    string fileName="data"+to_string(N)+".txt";
    ofstream fout(fileName);
    fout<<N<<endl;
    srand(time(0));
    for(int i=0;i<MAX;i++) {
        int so_ran=rand()%MAX+1;
        fout<<so_ran<<" ";
    }
    fout.close();
}




void print(int a[],int N) {
    for(int i=0;i<N;i++) std::cout<<a[i]<<", ";
}
void sapxep(int a[],int N) {
    for(int i=0;i<N;i++) {
        for(int j=i+1;j<N;j++) {
            if (a[i]>a[j]) {
                int temp=a[i];
                a[j]=a[i];
                temp=a[j];
            }
        }
    }
}






#endif