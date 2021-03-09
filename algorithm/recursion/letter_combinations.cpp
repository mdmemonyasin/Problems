#include<bits/stdc++.h>
using namespace std;

string convert(int a){
    map<int, string> map;
    map[2] = "abc";
    map[3] = "def";
    map[4] = "ghi";
    map[5] = "jkl";
    map[6] = "mno";
    map[7] = "pqrs";
    map[8] = "tuv";
    map[9] = "wxyz"; 
    return map[a];
}

void generate(string& digitString, string ans, int i){
    // cout<<digitString[i];
    if(digitString[i] == '\0'){
        cout<<ans<<endl;
        return;
    }
    string charString = convert(int(digitString[i] - '0'));
    for(int j=0;j<charString.length();j++){
        if(charString[j] != '\0'){
            generate(digitString, ans+charString[j], i+1);
        }
    }
}

int main(){
    string str;
    cin>>str;
    string ans;
    int i = 0;
    generate(str, ans, i);
}