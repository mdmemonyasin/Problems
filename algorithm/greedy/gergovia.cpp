#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    while(1){
        ll n;
        cin>>n;
        if(n==0)break;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll curr_cost = 0;
        ll curr_q = 0;
        ll cost = 0;
        ll curr_requirement = 0;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                if(curr_q > a[i]){
                    curr_q = curr_q - a[i];
                    cost = 
                }
            }
        }
        
    }
}