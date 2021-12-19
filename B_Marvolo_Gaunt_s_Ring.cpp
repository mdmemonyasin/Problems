#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n, p, q, r;
    cin>>n>>p>>q>>r;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll prefixMax[n] = {0}, suffixMax[n] = {0};
    prefixMax[0] = a[0]*p;
    suffixMax[n-1] = a[n-1]*r;
    for(ll i=1;i<n;i++){
        prefixMax[i] = max(prefixMax[i-1], a[i]*p);
    }
    for(ll i=n-2;i>=0;i--){
        suffixMax[i] = max(suffixMax[i+1], a[i]*r);
    }
    ll ans = LONG_MIN, x;
    for(ll i=0;i<n;i++){
        x = prefixMax[i] + (a[i]*q) + suffixMax[i];
        ans = max(ans, x);
    }
    cout<<ans<<endl;
}