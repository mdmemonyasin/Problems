#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int lcm = (arr[0] * arr[1]) / __gcd(arr[0], arr[1]);

    for (int i = 2; i < n; i++)
    {
        lcm = lcm * arr[i] / __gcd(lcm, arr[i]);
    }

    cout << lcm << endl;
}