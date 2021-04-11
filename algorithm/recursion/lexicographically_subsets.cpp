#include<bits/stdc++.h>
using namespace std; 

void lexicoss(int arr[],int res[], int sz, int i, int n){
    for(int k = 0;k<sz;k++){
        cout<<res[k]<<" ";
    }
    cout<<endl;
    if(i==n){
        return;
    }
    for(int j=i;j<n;j++){
        res[sz] = arr[j];
        lexicoss(arr,res, sz+1, j+1, n);
    }

}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int aux[n];
    lexicoss(arr, aux, 0, 0, n);
}