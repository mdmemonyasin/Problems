#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll sz = 0;
    ll size = pow(n, 3);
    ll lhsArray[size+1], rhsArray[size+1];
    for(ll i=0;i<n;i++){
        for(ll j = 0;j<n;j++){
            for(ll k = 0;k<n;k++){
                lhsArray[sz++] = (arr[i] * arr[j] ) + arr[k];
            }
        }
    }
    sz = 0;
    for(ll i=0;i<n;i++){
        for(ll j = 0;j<n;j++){
            for(ll k = 0;k<n;k++){
                if(arr[i]!=0){
                    rhsArray[sz++] = arr[i] * (arr[j] + arr[k]);
                }
                
            }
        }
    }
    sort(rhsArray, rhsArray + size);
    ll ans = 0;
    for(ll i=0;i<size;i++){
        ll lowerBound = lower_bound(rhsArray,rhsArray+size, lhsArray[i]) - rhsArray;
        ll upperBound = upper_bound(rhsArray, rhsArray + size, lhsArray[i]) - rhsArray;
        ans += upperBound - lowerBound;
    }
    cout<<ans<<endl;
}