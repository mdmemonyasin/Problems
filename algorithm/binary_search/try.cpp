#include<bits/stdc++.h>
using namespace std;

// void print(int a[], int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }
int findPivot(int arr[], int n){
	int l = 0, h = n-1;
	while(l<=h){
		int m = (l+h)/2;
		if(arr[m] > arr[m+1]){
			return m;
		}else if(arr[m] <= arr[n-1]){
			h = m-1;
		}else{
			l = m+1;
		}
	}
	return -1;
}

int main() {
    int a[] = {5, 6, 7, 1, 2, 3, 4};
    int n = 7;
    int pivot = findPivot(a, n);
    cout<<binary_search(a, a+pivot, );    
}