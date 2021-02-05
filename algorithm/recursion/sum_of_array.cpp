#include<bits/stdc++.h>
using namespace std;

int sum(int a[], int size){
    if(size==0){
        return 0;
    }
    int s =  sum(a+1,size-1);
    return (s+a[0]);
}

int main(){
    int a[] = {1, 2, 5, 4};
    int size = sizeof(a) / sizeof(a[0]);
    cout<<sum(a,size);
}