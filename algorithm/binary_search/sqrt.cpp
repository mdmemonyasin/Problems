#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n){
    int l = 0, h = n;
    while(l<=h){
        int mid = l+h/2;
        if(mid*mid > n){
            h = mid - 1;
        }else{
            if((mid+1)*(mid+1) > n){
                return mid;
            }else{
                l = mid-1;
            }
        }
    }
    return -1;
}


int main(){
    int n;
    cin>>n;
    // cout << squareRoot(n);
    // cout<<sqrt(1);
    for(int i=1;i<n;i++){
        cout<<i*i<<" "<<n<<endl;
        if(i*i == n){
            cout<<"here";
            cout<<i<<" ";
            break;
        }else if(i*i >= n){
            cout<<"here1";
            cout<<i-1<<" ";
            break;
        }
    }    
}