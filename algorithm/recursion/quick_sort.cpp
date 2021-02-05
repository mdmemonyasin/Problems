#include<bits/stdc++.h>
#include<iostream>
#define mod 1000000007
#define ll long long
using namespace std;

int partion(int a[], int si, int ei){
	int count_smaller = 0;
	for(int i = si+1;i<=ei;i++){
		if(a[i]<a[si]){
			count_smaller++;
		}
	}
	swap(a[si], a[si+count_smaller]);
	int i=si, j = ei;
	while (i!=si+count_smaller && j!=si+count_smaller)
	{
		if(a[i] <= a[si+count_smaller]){
			i++;
		}else if(a[j] > a[si+count_smaller])
		{
			 j--;
		}else
		{
			swap(a[i], a[j]);
			j++;
			i--;
		}
	}

	return si+count_smaller;
	

}

void quick_sort(int a[], int si, int ei){
	if(si>=ei) return;
	int c = partion(a, si, ei);
	quick_sort(a, si, c);
	quick_sort(a, c+1, ei);
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	quick_sort(a, 0, n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

