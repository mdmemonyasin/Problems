#include<bits/stdc++.h>
using namespace std;

void subset(string s, string curr = "", int index = 0){
    if(index>=s.length()){
        cout<<curr<<" ";
        return;
    }
    subset(s, curr+s[index], index+1);
    subset(s, curr, index+1);
}

int main(){
    string s;
    cin>>s;
    subset(s;
}