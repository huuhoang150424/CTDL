#include <iostream>
#include <string>
#include "stack.h"
using namespace std;
int main() {
    stack<int> st;
    string s;
    cin>>s;
    int i=0;
    while (i<s.length()) {
        if (s[i]>='0' && s[i]<='9') {
            st.push(s[i]-'0');
        } else {
            if (s[i]=='+') {
                int p1=st.pop();
                int p2=st.pop();
                st.push(p1+p2);
            }
            else if (s[i]=='-') {
                int p1=st.pop();
                int p2=st.pop();
                st.push(p2-p1);
            }
            else if (s[i]=='*') {
                int p1=st.pop();
                int p2=st.pop();
                st.push(p1*p2);
            }
            else if (s[i]=='/') {
                int p1=st.pop();
                int p2=st.pop();
                st.push(p2/p1);
            }
        }
//34-
        
        i++;
    }



}
