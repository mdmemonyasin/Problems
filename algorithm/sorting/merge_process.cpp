#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int arr1[n], arr2[m];
    int arr3[n+m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int k = 0, l = 0, sz = 0;
    while(sz < min(n, m) && l < min(m, n)){
        if(arr1[k] < arr2[l]){
            arr3[sz++] = arr1[k++];
        }else{
            arr3[sz++] = arr2[l++];
        }
    }
    while(k<n){
        arr3[sz++] = arr1[k++];
    }
    while(l<m){
        arr3[sz++] = arr2[l++];
    }
    for(int i = 0;i <m+n;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}