#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,H,x;
    cin>>N>>H>>x;
    bool flag = false;
    while(N--){
        int t;
        cin>>t;
        if(x + t >= H){
            flag = true;
        }
    }
    flag ? cout<<"YES" : cout<<"NO";
}