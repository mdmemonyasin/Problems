#include<bits/stdc++.h>
using namespace std;

int findPivot(int arr[], int n){
    int l = 0, h = n-1;
    while(l<=h){
        int mid = (l+h)/2;
        if(arr[mid]<=arr[n-1]){
            h = mid-1;
        }
        else{
            if(arr[mid] > arr[mid+1]){
                return mid;
            }else{
                l = mid+1;
            }
        }
    }
}


int main(){
    
}