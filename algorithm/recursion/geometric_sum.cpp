#include<bits/stdc++.h>
#include<iostream>
#define mod 1000000007
#define ll long long
using namespace std;

int geometric_sum(int k){
    if(k==0) return 1;
    return geometric_sum(k-1)+(1/pow(2,k));
}

int main()
{
    int k;
    cin>>k;
	return 0;
}

