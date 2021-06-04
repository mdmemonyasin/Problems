#include <bits/stdc++.h>
using namespace std;

// O(n^2) Approach
// int main()
// {
//     int n, x, k;
//     cin >> n >> k;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         arr.push_back(x);
//     }
//     int ans = INT_MAX;
//     int j;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (j = i; j < n; j++)
//         {
//             sum += arr[j];
//             if (sum >= k)
//             {
//                 ans = min(j - i + 1, ans);
//             }
//         }
//     }
//     cout << ans;
// }

int binarySearch(int arr[], int prefixSum[], int n, int i, int k)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int m = l + h / 2;
        int ps;
        if (i == 0)
        {
            ps = prefixSum[m];
        }
        else
        {
            ps = prefixSum[m] - prefixSum[i - 1];
        }
        if (ps < k)
        {
            l = m + 1;
        }
        else
        {
            int ps1;
            if (i == 0)
            {
                ps1 = prefixSum[m];
            }
            else
            {
                ps1 = prefixSum[m] - prefixSum[i - 1];
            }
            if (ps1 < k)
            {
                return m;
            }
            else
            {
                h = m - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = INT_MAX;
    int prefixSum[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = max(prefixSum[i - 1], arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int res = binarySearch(arr, prefixSum, n, i, k);
        ans = min(ans, res - i + 1);
    }
    cout << ans;
}