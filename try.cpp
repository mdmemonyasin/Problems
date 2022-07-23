#include<iostream>
using namespace std;
int main(){
    int m, n;
    cin>>m>>n;
    // Creation of 2d array
    int **arr;
    arr = new int*[m];
    for(int i = 0;i<m;i++){
        arr[i] = new int[n];
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            arr[i][j] = 10;
        }
    }    
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}