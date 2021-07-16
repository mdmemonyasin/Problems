#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int num, i, cnt = 1, currBit = 0;
//     cin>>num>>i;
//     while (cnt <= i && num >= 0)
//     {
//         currBit = num % 2;
//         num = num/2;
//         cnt++;
//     }
//     if(cnt < i){
//         cout<<0<<endl;
//     }else{
//         cout<<currBit<<endl;
//     }
// }

int main(){
    int num, i, mask;
    cin>>num>>i;
    mask = (1 << i);
    if(num & mask){
        cout<<"SET";
    }else{
        cout<<"UNSET";
    }
}