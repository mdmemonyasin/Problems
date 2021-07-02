#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3;
    int N;
    cin>>n1>>n2>>n3;
    cin>>N;
    int arr[N];
    arr[0] = 1;
    int p1 = 0, p2 = 0, p3 = 0;
    for(int i=1;i<N;i++){
        int val = min(n1*arr[p1], min(n2*arr[p2], n3*arr[p3]));
        arr[i] = val;
        if(val == n1*arr[p1]) p1++;
        if(val == n2*arr[p2]) p2++;
        if(val == n3*arr[p3]) p3++;
    }
    cout<<arr[N-1];
}