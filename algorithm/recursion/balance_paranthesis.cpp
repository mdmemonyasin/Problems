#include<bits/stdc++.h>
using namespace std;

// void printAll(string s, int l, int r, int& n){
//     if((l + r) == (2*n)){
//        cout<<s<<endl;
//        return; 
//     }
//     if(l == r){
//         if(l<n){
//             printAll(s+'(', l+1, r, n);
//         }
//     }else if(l>r){
//         if(l<n){
//             printAll(s+'(', l+1, r, n);
//         }
//         printAll(s+')', l, r+1, n);
//     }
// }

void printAll1(int i, int l, int r, int n, string& arr){
    if(i == 2*n){
        for(auto j = 0;j<i;j++){
            cout<<arr[j];
        }
        cout<<endl;
        return;
    }
    if(l==r){
        arr[i] = '(';
        printAll1(i+1, l+1, r, n, arr);
    }else if(l>r){
        if(l==n){
            arr[i] = ')';
            printAll1(i+1, l, r+1, n, arr);
        }else{
            arr[i] = ')';
            printAll1(i+1, l, r+1, n, arr);
            arr[i] = '(';
            printAll1(i+1, l+1, r, n, arr);
        }
        
    }
}

int main(){
    int n;
    cin>>n;
    string arr;
    printAll1(0, 0, 0, n, arr);
    cout<<arr;
}