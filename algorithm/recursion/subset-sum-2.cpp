#include<bits/stdc++.h>
using namespace std;

void subSetSum(int a[], int temp[], int& n, int sum, int i, int& sz){
    if(sum<0){
        for(int j=0; j<sz; j++){
            cout<<temp[j]<<" ";
        }
        cout<<endl;
        return;
    }
    subSetSum(a, temp, n, sum, i+1, sz);
    temp[sz++] = a[i];
    subSetSum(a, temp, n, sum-a[i], i, sz);
}

int main(){
    int n, sum;
    cin>>n>>sum;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp[10];
    subSetSum(a, temp, n, sum, 0, 0);

}