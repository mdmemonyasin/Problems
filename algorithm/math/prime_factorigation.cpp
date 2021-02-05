#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Brute Force
    // for(int i=2;i<=n;i++){
    //     while(n%i == 0){
    //         n = n/i;
    //         cout<<i<<" ";
    //     }
    // }
    // Optimized
    int num = n;
    for (int i = 2; i * i <= num; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n != 1)
    {
        cout << n << " ";
    }
}