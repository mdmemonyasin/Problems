#include<bits/stdc++.h>
using namespace std;

int rodCutting(int n, int a, int b, int c){
    if(n==0){
        return 0;
    }
    if(n<0){
        return -1;
    }
    int smallOutput = max(rodCutting(n-a, a, b, c), rodCutting(n-b, a, b, c));
    smallOutput = max(smallOutput, rodCutting(n-c, a, b, c));
    if(smallOutput==-1){
        return -1;
    }else
    {
        return smallOutput+1;
    }
}

int main(){
    int n, a, b, c;
    cin>>n>>a>>b>>c;
    cout<<rodCutting(n, a, b, c);
}