#include<bits/stdc++.h>
using namespace std;

int giveCount(int a[], int n, int x){
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]<=x){
            count++;
        }
    }
    return count;
}

int binary_search(){
    
}

int giveCount1(int a[], int n, int k){
    // Finding kth smallest by brute force
    for(int i=0;i<n;i++){
        int smaller = 0, equal = 0;
        for(int j = 0;j<n;j++){
            if(a[j] < a[i]){
                smaller++;
            }else if(a[j] == a[i]){
                equal++;
            }
        }
        if(smaller + equal < k){
            continue;
        }else{
            if(smaller >= k){
                continue;
            }else{
                cout<<a[i];
                break;
            }
        }
    }
}

int main(){
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i < n; i++){
        cin>>a[i];
    }
    
    
}