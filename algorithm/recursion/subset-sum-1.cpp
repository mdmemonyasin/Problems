#include <bits/stdc++.h>
using namespace std;

void subSetCounter(int arr[], int i, int targetSum, int n, int& cnt){
    if(i==n){
        if(targetSum == 0){
            cnt++;
        }
        return;
    }
    subSetCounter(arr, i+1, targetSum-arr[i], n, cnt);
    subSetCounter(arr, i+1, targetSum,n, cnt);
}

int main(){
    int n, targetSum;
    cin>>n>>targetSum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt = 0;
    subSetCounter(arr, 0, targetSum, n, cnt);
    cout<<cnt<<endl;
}