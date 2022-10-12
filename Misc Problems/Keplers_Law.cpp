#include<bits/stdc++.h>
using namespace std;

bool checkForProportional(int t1, int r1, int t2, int r2){
    double a = pow(t1, 2) / pow(r1, 3);
    double b = pow(t2, 2) / pow(r2, 3);
    return a==b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int t1, t2, r1, r2;
        cin>>t1>>t2>>r1>>r2;
        if(checkForProportional(t1, r1, t2, r2)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}