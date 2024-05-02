// Bạn được cho hai mảng số nguyên a và b.
// Đối với mỗi phần tử của mảng thứ hai bj, bạn nên tìm số phần tử trong mảng a nhỏ hơn hoặc bằng giá trị bj.
// Input
// Dòng đầu tiên chứa hai số nguyên n,m(1≤n,m≤2⋅105) — kích thước của mảng a và b.
// Dòng thứ hai chứa n số nguyên — các phần tử của mảng a (−109≤ai≤109).
// Dòng thứ ba chứa các số nguyên m — các phần tử của mảng b(−109≤bj≤109).
// Output
// In ra các số nguyên m, cách nhau bởi dấu cách: j-th bằng số phần tử trong mảng a nhỏ hơn hoặc bằng giá trị b


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binary_search_custom(const vector<long long>& a,long long target) {
    int low=0;
    int high=a.size()-1;
    int result=-1;
    while (low<=high) {
        int mid=low+(high-low)/2;
        if (a[mid]<=target) {
            result=mid;
            low=mid+1;
        } else {
            high=mid-1;
        }
    }
    return result+1;
}
int main() {
    long n,m;
    cin>>n>>m;
    vector<long long> a(n);
    vector<long long> b(m);
    vector<long long> result;
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    for (int i=0;i<n;i++) {
        cin>>b[i];
    }
    sort(a.begin(), a.end());
    for (int x : b) {
        int count=binary_search_custom(a,x);
        result.push_back(count);
    }
    for (int dem: result) {
        cout<<dem<<" ";
    }
}