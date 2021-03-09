#include<bits/stdc++.h>
using namespace std;

void printSubset(int arr[], int n, int i,int curr[], int j){
    if(i >= n){
        for(int j=0;j<n;j++){
            cout<<curr[i]<<" ";       
        }
        cout<<endl;
        return;
    }
    printSubset(arr, n, i+1, curr, j);
    curr[j] = arr[i];
    printSubset(arr, n, i+1,, j++);
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int curr[n];
    printSubset(arr, n, 0, curr, 0);
}