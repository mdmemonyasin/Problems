#include<bits/stdc++.h>
#include<iostream>
#define mod 1000000007
#define ll long long
using namespace std;

int multiply(int m, int n){

	if(n==0) return 0;
	return multiply(m, n-1) + m;
	
}

int main()
{
	int m, n;
	cin>>m>>n;
	int a = multiply(m,n);
	cout<<a;
	return 0;
}

