#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n){
    for(int i=0; i<n; i++){
        bool sorted = true;
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]) {
                swap(a[j],a[j+1]);
                sorted = false;
            }
        }
        if(sorted){
            break;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubbleSort(a, n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}