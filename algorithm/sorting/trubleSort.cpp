#include<bits/stdc++.h>
using namespace std;

void troubeSort(int a[], int n){
    vector<int> v1, v2;
    for(int i = 0; i < n;i++){
        if(i%2 == 0){
            v1.push_back(a[i]);
        }else{
            v2.push_back(a[i]);
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for(int i = 0; i <v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i <v2.size(); i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    int j = 0;
    for(int i=0; i<v1.size(); i++){
        a[j] = v1[i];
        j+=2;
    }
    j = 1;
    for(int i=0; i<v2.size(); i++){
        a[j] = v2[i];
        j+=2;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    troubeSort(a, n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}