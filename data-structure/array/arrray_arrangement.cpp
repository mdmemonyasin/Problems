#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            int idx = a[i], val = i;
            while (idx != i)
            {
                int tmp = a[idx];
                a[idx] = -1 * (val + 1);
                val = idx;
                idx = tmp;
            }
            a[idx] = -(val+1);
        }
    }
    for (int i = 0;i<n;i++)
    {
        a[i] = -1 * a[i] - 1;
    }
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}