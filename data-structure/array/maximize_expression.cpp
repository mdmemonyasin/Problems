#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, p, q, r;
    cin>>n>>p>>q>>r;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int prefixMax[5]={0}, suffixMax[5]={0};
    prefixMax[0] = a[0]*p;
    suffixMax[n-1] = a[n-1]*r;
    for(int i=1;i<n;i++){
        prefixMax[i] = max(prefixMax[i-1], prefixMax[i]*p);
    }
    for(int i=n-2;i>=0;i--){
        suffixMax[i] = max(suffixMax[i+1], suffixMax[i]*r);
    }
    int ans = INT_MIN, x = INT_MIN;
    for(int i=1;i<n-1;i++){
        x = prefixMax[i-1] + (a[i]*q) + suffixMax[i+1];
        ans = max(ans, x);
    }
    cout<<ans<<endl;
}