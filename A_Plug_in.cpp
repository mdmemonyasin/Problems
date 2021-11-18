#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, ans;
    cin>>s;
    stack<char> st, tmp;
    st.push(s[0]);
    for(int i = 1;i<s.length();i++){
        bool flag = true;
        while(!st.empty()&&st.top() == s[i]){
            flag = false;
            st.pop();
        }
        if(flag){
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        tmp.push(st.top());
        st.pop();
    }
    while(!tmp.empty()){
        ans += tmp.top();
        tmp.pop();
    }
    cout<<ans;
}