#include<bits/stdc++.h>
#include<iostream>
#define mod 1000000007
#define ll long long
using namespace std;

int sum(int n){
	if(n==0) return 0;
	int ans = sum(n/10);
	return ans+(n%10);
}


int main()
{
	int n;
	cin>>n;
	cout<<sum(n);
	return 0;
}

