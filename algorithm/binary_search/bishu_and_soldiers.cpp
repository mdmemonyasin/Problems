#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, q;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
    sort(a,a+n);
	cin>>q;
	int c[n];
    c[0] = a[0];
	for(int i=1;i<n;i++){
        c[i] = c[i-1] + a[i]; 
    }
    ll b;
	for(ll i = 0;i<q;i++){
		cin>>b;
		auto it = upper_bound(a, a+n, b);
		cout<<distance(a, it)<<" "<<c[distance(a, it)-1]<<endl;
	}
	
}