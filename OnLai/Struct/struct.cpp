#include <iostream>
#include <string>
using namespace std;
//Sinh viên: tên , địa chỉ, gpa,mã sinh viên
struct SinhVien{
    string name,address,StudientCode;
    double gpa;
    //Hàm construct (Hàm khởi tạo)
    SinhVien(string name,string address,string StudientCode,double gpa):name(name),address(address),StudientCode(StudientCode),gpa(gpa){}

    //Phương thức của Struct
    void inputt() {
        cout<<"Moi ban nhap cac thong tin: "<<endl;
        cin>>name;cin>>address;cin>>StudientCode;cin>>gpa;
    }
    void printff() {
        cout<<"Ten: "<<name<<" Dia chi: "<<address<<" Ma Sinh Vien: "<<StudientCode<<" Gpa "<<gpa<<endl;
    }
};

int main() {
    //Khai báo biến Sinh vien Cách 1
    SinhVien sv1{"Hoang", "Nghe An", "A45657", 3.2};
    //Khai báo cách 2
    SinhVien sv2{"Hoang","Nghe An","A45657",3.2};
    //Sự dụng hàm
    sv1.inputt();
    sv2.printff();

}