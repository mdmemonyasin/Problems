#include<bits/stdc++.h>
using namespace std;

// int firstIndex(int a[], int size, int x, int i=0){
//     if(i==size){
//         return -1;
//     }
//     if(a[i]==x){
//         return i;
//     }
//     return firstIndex(a,size,x,i+1);
// }

int firstIndex(int a[], int n, int x){
    if(n<0){
        return -1;
    }
    if(a[0]==x){
        return 0;
    }
    int ans = firstIndex(a+1,n-1,x);
    if(ans>=0){
        return ans+1;
    }
}

int main(){
    int a[] = {1,2,3,4};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<firstIndex(a,size,10);
}