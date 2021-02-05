#include<bits/stdc++.h>
using namespace std;

int digits(int n){
    if(n==0){
        return 0;
    }
    int smallAns = digits(n/10);
    return 1+smallAns;
}

int main(){
    int n;
    cin>>n;
    cout<<digits(n)<<endl;
}