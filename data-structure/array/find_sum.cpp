#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, q, l, r;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        a[i] = a[i-1]+a[i];
    }
    while(q--){
        cin>>l>>r;
        if(l>0){
            cout<<a[r]-a[l-1]<<endl;
        }else{
            cout<<a[r]<<endl;
        }
    }
}