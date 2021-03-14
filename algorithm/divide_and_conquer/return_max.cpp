#include<bits/stdc++.h>
using namespace std;

int returnMax(int arr[], int n, int i){
    if(i==n){
        return arr[i-1];
    }
    int a = returnMax(arr, n, i+1);
    return max(a, arr[i]);
}

// Devide and conquer approach

int returnMax1(int arr[], int i, int j){
    if(i >= j){
        return arr[i];
    }
    int m = (i + j) / 2;
    return max(returnMax1(arr, i, m), returnMax1(arr, m+1, j));
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // cout << returnMax(arr, n, 0);
    cout<<returnMax1(arr, 0, n-1);
}