#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n, p, q, r;
    cin>>n>>p>>q>>r;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll pmax[n] = {LLONG_MIN}, smax[n] = {LLONG_MIN};
    // Populate prefix max
    pmax[0] = arr[0]*p;
    for(int i=1;i<n;i++){
        pmax[i] = max(arr[i]*p, pmax[i-1]);
    }
    // Populate suffix max
    smax[n-1] = arr[n-1]*r;
    for(int i=n-2;i>=0;i--){
        smax[i] = max(arr[i]*r, smax[i+1]);
    }
    ll ans = LLONG_MIN;
    for(int i = 0;i<n;i++){
        ans = max(ans, pmax[i]+arr[i]*q+smax[i]);
    }
    cout<<ans;
}