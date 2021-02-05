#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int prefixMax[n], suffixMax[n];
    prefixMax[0] = a[0];
    suffixMax[n-1] = a[n-1];
    for(int i=1;i<n;i++){
        prefixMax[i] = max(prefixMax[i-1], a[i]);
    }
    for(int i=n-2;i>=0;i--){
        suffixMax[i] = max(suffixMax[i+1], a[i]);
    }
    int decidingHeight = 0;
    int ammount = 0;
    for(int i=1;i<n-1;i++){
        decidingHeight = min(prefixMax[i-1], suffixMax[i+1]);
        if(decidingHeight - a[i] > 0 ){
            ammount += decidingHeight - a[i];
        }
    }
    cout<<ammount<<endl;
}