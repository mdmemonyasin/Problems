#include<bits/stdc++.h>
using namespace std;

int first_index(int n, int m, int *arr) {
    // for (int i=0;i<n;i++) {
    //     for (int j=0;j<m;j++) {
    //         cout<<*(arr+i*n+j)<<" ";
    //     }
    //     cout<<endl;
    // }

    int l = *arr, r = *(arr+m-1);
    while (l<=r) {
        int mid = (l+r)/2;
        if (*())
    }

    return 0;
}


int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, m;
        cin>>n>>m;
        int a[n][m];
        for (int i = 0;i<n;i++) {
            for (int j = 0;j<m;j++) {
                cin>>a[i][j];
            }
        }
        for (int i = 0;i<n;i++) {
            for (int j = 0;j<m;j++) {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<first_index(n, m, (int *)a);
    }
}