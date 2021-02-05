#include <bits/stdc++.h>
using namespace std;

int ways(int x, int n)
{
    if (x == n)
    {
        return 1;
    }
    if (x > n)
    {
        return 0;
    }
    return ways(x + 1, n) + ways(x + 2, n);
}

int main()
{
    int n, x;
    cin >> x >> n;
    cout << ways(x, n);
}