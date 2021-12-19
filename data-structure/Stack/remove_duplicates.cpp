#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string s){
    string ans = ""; 
    if(!s.length()) return ans;
    stack<char> st;
    st.push(s[0]);
    int current[26] = {0}, freq[26] = {0};
    current[s[0]-'a'] = 1;
    freq[s[0]-'a']--;
    for(int i = 0;i<s.length();i++){
        freq[s[i]-'a']++;
    }
    for(int i=1;i<s.length();i++){
        if(current[s[i]-'a'] == 1){
            freq[s[i]-'a']--;
            continue;
        }
        while(!st.empty() && (st.top()>s[i] && freq[st.top()-'a']>0)){
            current[st.top()-'a'] = 0;
            st.pop();            
        }
        st.push(s[i]);
        current[s[i]-'a'] = 1;
        freq[s[i]-'a']--;
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    for(int i = 0;i<ans.length();i++){
        st.push(ans[i]);
    }
    ans = "";
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}


int main(){
    string s;
    cin>>s;
    cout<<removeDuplicates(s);   
}