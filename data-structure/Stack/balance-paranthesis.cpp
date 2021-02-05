#include<bits/stdc++.h>
using namespace std;

bool isMatch(char a, char b){
    return ((a==')'&& b=='(') || (a=='}' && b=='{') || (a==']' && b=='['));
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        stack<char> s;

        for(int i=0;i<str.length();i++){
            if(str[i] == '(' || str[i]=='[' || str[i]=='{'){
                s.push(str[i]);
            }else
            {
                if(s.empty()){
                    cout<<"not balanced"<<endl;
                    continue;
                }
                else if(isMatch(str[i], s.top()) == false){
                    cout<<"not balanced"<<endl;
                    continue;
                }else
                {
                    s.pop();
                }
                
            }
            
        }
        if(!s.empty()){
            cout<<"not balanced"<<endl;
        }else{
            cout<<"balanced"<<endl;
        }

    }
        
    return 0;
}
