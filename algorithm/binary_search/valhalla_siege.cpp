#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll n, q;
    cin>>n>>q;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll b[q];
    for(ll i=0;i<q;i++){
        cin>>b[i];
    }
    vector<ll> c(n);
    partial_sum(a, a+n, c.begin());

    ll d = 0;
    for(auto arrows : b){
        d+= arrows;
        if(d>=c.back()) d = 0;

        auto it = lower_bound(c.begin(), c.end(), d);
        cout<< distance(it, c.end()) - (*it == d) <<endl;
    }
}