#include<bits/stdc++.h>
using namespace std;

bool checkNumber(int a[], int size, int x){
    if(size==0){
        return false;
    }
    if(a[size]==x){
        return true;
    }
    return checkNumber(a,size-1,x);
}

int main(){
    int a[] = {1,2,3,4};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<checkNumber(a,size,4);
}