#include <bits/stdc++.h>
using namespace std;

int ways(vector<vector<int> > &v, int n, int m, int i, int j)
{
    if (i >= n || j >= m)
    {
        return 0;
    }

    if (v[i][j] == 1)
    {
        return 0;
    }

    if (i == n - 1 && j == m - 1)
    {
        return 1;
    }

    return ways(v, n, m, i + 1, j) + ways(v, n, m, i, j + 1);
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int> > a;
    for (int i = 0; i < n; i++)
    {
        vector<int> v;
        for (int j = 0; j < m; j++)
        {
            int t;
            cin >> t;
            v.push_back(t);
        }
        a.push_back(v);
    }
    cout << ways(a, n, m, 0, 0);
}