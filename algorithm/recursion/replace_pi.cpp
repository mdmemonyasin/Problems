#include<bits/stdc++.h>
using namespace std;

void replace(char input[]){
    int l = strlen(input);
    if(l==0){
        return;
    }
    
    if(input[0]=='p' && input[1] == 'i'){
        for(int i=l-1;i>=0;i--){
            input[i+2] = input[i];
        }
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
    }
    returnreplace(input+1);
    // cout<<input;
    
}


int main(){
    int n;
    char input[n];
    cin>>input;
    replace(input);
    cout<<input;
}