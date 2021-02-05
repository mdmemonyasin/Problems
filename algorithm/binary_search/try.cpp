#include<bits/stdc++.h>
using namespace std;

void print(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    print(a, sizeof(a)/sizeof(a[0]));
}