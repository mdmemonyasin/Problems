#include<bits/stdc++.h>
using namespace std;

void func(int arr[]){
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<sizeof(arr)<<" "<<sizeof(arr[0])<<endl;
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    func(arr);
    cout<<sizeof(arr)<<" "<<sizeof(arr[0])<<endl;
}