#include<bits/stdc++.h>
using namespace std;

// Insertion Sort

void insertionSort(vector<int>& v, int n){
    for(int i=1;i<n;i++){
        int j = i;
        while(j>0 && v[j] < v[j-1]){
            swap(v[j],v[j-1]);
            j--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int k = n;
    while(k--){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    insertionSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}