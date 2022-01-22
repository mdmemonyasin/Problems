#include <bits/stdc++.h>
using namespace std;
int main()
{
    // n == row, m = column
    int n, m, key;
    cin >> n >> m >> key;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int i = 0, j = m - 1;
    while (i <= n - 1 && j >= 0)
    {
        if(arr[i][j]==key){
            cout<<i<<" "<<j;
            return 0;
        }else if(arr[i][j] > key){
            j = j-1;
        }else{
            i = i+1;
        }
    }
    cout<<"Not Found"<<endl;
    return 0;
}