#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    stack<char> st;
    for(int i = 0;i<s.length();i++){
        if(s[i] == 'c' && st.size()>=2){
            char b = st.top();
            st.pop();
            char a = st.top();
            st.pop();
            if(b=='b'&& a=='a'){
                continue;
            }else{
                st.push(a);
                st.push(b);
                st.push(s[i]);
            }
        }else{
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        cout<<st.top();
    }
}
