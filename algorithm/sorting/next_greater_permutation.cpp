// Print next greater permutation lexicographically
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int i;
    for(i=n-1;i>0;i--){
        if(arr[i] > arr[i-1]){
            break;
        }
    }
    if(i-1 >= 0){
        for(int j = n-1;j>=i;j--){
            if(arr[j] > arr[i-1]){
                swap(arr[j], arr[i-1]);
                break;
            }
        }
        reverse(arr+i, arr+n);
    }
    for(int k = 0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}