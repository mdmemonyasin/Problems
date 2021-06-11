#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int temp[], int s1, int e1, int s2, int e2){
    int i = s1, j = s2, sz = s1;
    while(i<=e1 && j<=e2){
        if(arr[i] <= arr[j]){
            temp[sz++] = arr[i++];
        }else{
            temp[sz++] = arr[j++];
        }
    }
    while(i<=e1){
        temp[sz++] = arr[i++];
    }
    while(j<=e2){
        temp[sz++] = arr[j++];
    }
    for(int k=s1;k<=e2;k++){
        arr[k] = temp[k];
    }
}

void mergeSort(int arr[], int temp[], int n, int s, int e){
    if(s == e){
        return;
    }
    int mid = (s+e)/2;
    mergeSort(arr, temp, n, s, mid);
    mergeSort(arr, temp, n, mid+1, e);
    merge(arr, temp, s, mid, mid+1, e);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp[n];
    mergeSort(arr, temp, n, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}