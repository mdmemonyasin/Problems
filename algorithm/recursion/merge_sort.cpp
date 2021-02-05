#include<bits/stdc++.h>
#include<iostream>
#define mod 1000000007
#define ll long long
using namespace std;

void merge_sort(int a[], int si, int ei){
	if(si>=ei) return;

	int mid = (si+ei)/2;

	merge_sort(a, si, mid);

	merge_sort(a, mid+1, ei);

	int b[ei+1];

	int i=si, j=mid+1;
	int k = 0; 
	while (i<mid+1 && j<ei+1)
	{
		if(a[i]<a[j]){
			b[k++] = a[i++];
		}else
		{
			b[k++] = a[j++];
		}
		
	}
	while(i<mid+1){
		b[k++] = a[i++];
	}
	while(j<ei+1){
		b[k++] = a[j++];
	}

	k = si;
	for(int i=0;i<=ei;i++){
		a[k++] = b[i];
	}
	

}


int main()
{
	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	merge_sort(a, 0, n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

