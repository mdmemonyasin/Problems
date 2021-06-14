#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int i = 0, j =n-1;
    while(i<j){
        int currSum = arr[i]+ arr[j];
        if(currSum == sum){
            return true;
        }
        else if(currSum > sum){
            j--;
        }else{
            i++;
        }
    }
    return false;
}