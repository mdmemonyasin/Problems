#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length()<=1){
            cout<<"No"<<endl;
            continue;
        }
        bool flag = true;
        for(int i = 0;i<s.length()-1;i++){
            if(s[i] == '1' && (s[i+1] == '0' || s[i+1] == '1')){
                cout<<"Yes"<<endl;
                flag = false;
                break;
            }
        }
        if(flag) {
            cout<<"No"<<endl;
        }
    }
}