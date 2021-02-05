#include<bits/stdc++.h>
#include<iostream>
#define mod 1000000007
#define ll long long
using namespace std;

int count(int n){
    if(n==0) return 0;
    int ans = count(n/10);
    if(n%10==0){
        return ans+1;
    }else{
        return ans;
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<count(n);
	return 0;
}

