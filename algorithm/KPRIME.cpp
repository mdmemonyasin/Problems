#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<bool> prime(100005, true);
vector<ll> num_factor(100005, 0);
vector<vector<ll>> ans(6, vector<ll>(100005, 0));

void sieve(){
    prime[0] = prime[1] = false;
    for(ll i=2;i<=100005;++i){
        if(prime[i]){
            num_factor[i]++;
            for(ll j = 2*i; j<100005; j+=i){
                prime[j] = false;
                num_factor[j]++;
            }
        }
    }
    for(ll i = 1; i<=5;++i){
        for(ll j = 2;j<100005; ++j){
            ans[i][j] = ans[i][j-1];
            if(num_factor[j] == i){
                ans[i][j]++;
            }
        }
    }
}


int main(){
    int t;
    cin>>t;
    sieve();
    while (t--)
    {
        ll a, b ,k;
        cin>>a>>b>>k;
        cout<<ans[k][b]-ans[k][a-1]<<endl;    
    }
    return 0;
    
}