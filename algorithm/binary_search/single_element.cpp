#include<bits/stdc++.h>
using namespace std;

int singleElement(int a[], int n){
    int l = 0, h = n-1;
    if(l==h) return 0;
    while(l<=h){
        int m = (l + h) / 2;
        if(m==0 && a[m+1]!=a[m]){
            return m;
        }
        if(m==n-1 && a[m]!=a[m-1]){
            return m;
        }
        if(a[m] !=a[m+1] && a[m] != a[m-1]){
            return m;
        }
        if(a[m] == a[m+1]){
            if(m%2==0){
                l = m+1;
            }
            else{
                h = m-1;
            }
        }else{
            if(m%2==0){
                h = m-1;
            }
            else{
                l = m+1;
            }
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i < n; i++){
        cin>>arr[i];
    }
    cout<<singleElement(arr, n);
}
