// A. Tìm kiếm số nguyên x
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Cho 1 mảng gồm n phần tử và một số nguyên k. Thực hiện kiểm tra tồn tại số nguyên k trong mảng. Nếu tồn tại thì in ra Yes ngược lại không tồn tại in ra No

// Input
// Dòng đầu tiên gồm 2 số nguyên n, k ( 1 ≤ n ≤ 105,  - 109 ≤ n ≤ 109).

// Dòng tiếp theo gồm n số nguyên ai ( - 109 ≤ ai ≤ 109).

// Output
// In ra "Yes" ngược lại không tồn tại in ra "No".

    // ios_base::sync_with_stdio(false);
    // cin.tie(0);cout.tie(0);

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vt;
    int n,k,i=0,dem=0;
    cin>>n>>k;
    while(i<n) {
        long a;
        cin>>a;
        vt.push_back(a);
        i++;
    }
    for(int x : vt) {
        if (k==x) {
            dem++;
        }
    }
    if (dem>0) cout<<"Yes";
    else cout<<"No";
}