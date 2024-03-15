#include <iostream>
using namespace std;
//số phức
struct sophuc {
    int a,b; //a+bi
    sophuc(int a=0,int b=0):a(a),b(b){}
    
    sophuc operator + (const sophuc o) {
        sophuc tong(0,0);
        tong.a=a+o.a;
        tong.b=b+o.b;
        return tong;
    }
    //insertion
    friend istream& operator >> (istream& in, sophuc& x) {
        in>>x.a>>x.b;
        return in;
    }
    //extraction
    friend ostream& operator <<(ostream& out,sophuc x) {
        out<<x.a<<x.b;
        return out;
    }
    //bool
    bool operator == (const sophuc o) {
        return a==o.a && b==o.b;
    }

};
int main() {
    sophuc a{2,3},b{2,3};
    sophuc c=a+b;
    cout<<" so phuc: "<<a.a<<" "<<b.b<<"i"<<endl;
    sophuc e,d;
    cin>>e>>d;
    cout<<e<<d<<endl;


}