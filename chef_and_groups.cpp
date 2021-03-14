#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt = 0;
        bool flag = false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                if(flag == false){
                    cnt++;
                    flag = true;
                }
            }else{
                flag = false;
            }
        }
        cout<<cnt<<endl;
    }
}