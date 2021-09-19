#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, cnt = 0;
    cin>>n;
    while(n){
        n = (n & (n-1));
        cnt++; 
    }
    cout<<cnt<<endl;
}

// int main(){
//     // Count number of set bits in a given integer
//     // Constraint 32 bit integer will be given
//     int n, ans = 0;
//     cin>>n;
//     long mask = (1L << 31);
//     while(mask){
//         if(mask & n){
//             ans++;
//         }
//         mask >>= 1;
//     }
//     cout<<ans;
// }