#include<bits/stdc++.h>
#include<iostream>
#define mod 1000000007
#define ll long long
using namespace std;

bool check(int n, unordered_map<int, int> &m){
	if(n==0) return false;
	int sum = 0;
	while(n>0){
		sum+=pow(n%10, 2);
		n/=10;
	}
	if(sum==1){
		return true;
	}
	if(m.find(sum)!=m.end()){
		return false;
	}else{
		m[sum]++;
	}
	
	return check(sum, m);
}


int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		n++;
		while(1){
			unordered_map<int, int> m;
			m[n]++;
			if(check(n, m)){
				cout<<n<<endl;
				break;
			}else{
				n++;
			}
		}
	}
	return 0;
}

