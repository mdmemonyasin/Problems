#include<bits/stdc++.h>
using namespace std;
int solution[1000] = {0};
int fibo(int n){
    if(n<=1){
        return n;
    }
    else if(solution[n]!=0)
    {
         return solution[n];
    }
    else
    {
        solution[n] = fibo(n-1) + fibo(n-2);
        return solution[n];
    }
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
}