#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool isPossible(ll a, ll b){
    if(a==b){
        return true;
    }
    if(a>b){
        return false;
    }
    return isPossible(a*2, b) || isPossible(a*10+1, b);
}

int main(){
    ll a, b;
    cin>>a>>b;
    isPossible(a, b) ? cout<<"YES" : cout<<"NO";
}