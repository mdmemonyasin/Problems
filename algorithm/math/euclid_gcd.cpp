#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int minm = min(a,b);
    int maxm = max(a,b);
    int temp = 0;
    while(maxm % minm != 0){
        temp = minm;
        minm = maxm % minm;
        maxm = temp;
    }
    cout<<minm<<endl;
}