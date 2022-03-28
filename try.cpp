#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define m 1000000007
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    ll sum = 0;
    for(int i = 0;i<n;i++){
        ll con = ((((i+1)%m * (n-i)%m)%m)%m  * arr[i]%m)%m; // Modulo implement 10^9 + 7
        sum  = (sum%m + con%m)%m;
    }
    cout<<sum<<endl;
}

// 1 2 3 4 5
// k = 3
// 6, 9 , 12 = 27 