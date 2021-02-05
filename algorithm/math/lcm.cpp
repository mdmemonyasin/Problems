#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int lcm = __gcd(a,b);
    cout<<(a*b)/lcm;
}