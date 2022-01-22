#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    // n==row, m ==column
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    //Sum of all submatrix
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans += (i+1)*(j+1)*(n-i)*(m-j) * arr[i][j];
        }
    }
    cout<<ans;
    return 0;
}