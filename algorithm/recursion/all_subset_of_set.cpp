#include<bits/stdc++.h>
using namespace std;

void printAllSubSet(int arr[], int i, int n, int temp[], int size){
    if(i==n){
        for(int j=0;j<size;j++){
            cout<<temp[j]<<" ";
        }
        cout<<endl;
        return;
    }
    temp[size] = arr[i];
    printAllSubSet(arr, i+1, n, temp, size+1);
    printAllSubSet(arr, i+1, n, temp, size);
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp[n];
    printAllSubSet(arr, 0, n, temp, 0);
}