#include<bits/stdc++.h> 
using namespace std;

string pairStar(string s){
    if(s.length()==0){
        return "";
    }
    string str = pairStar(s.substr(1));
    if(s[0] == s[1]){
        string s1(1, s[0]);
        return s1 + "*" + str;
    }else
    {
        return s[0] + str;
    }
}

int main(){
    string s;
    cin>>s;
    cout<<pairStar(s);
}