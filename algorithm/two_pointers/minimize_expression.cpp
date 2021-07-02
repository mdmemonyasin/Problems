#include <bits/stdc++.h>
using namespace std;

#define inputArr(a, x)          \
    for (int i = 0; i < x; i++) \
    {                           \
        cin >> a[i];            \
    }

int main()
{
    int m, n, p;
    cin >> m >> n >> p;
    int A[m], B[n], C[p];
    inputArr(A, m);
    inputArr(B, n);
    inputArr(C, p);
    int i = 0, j = 0, k = 0, ans = 0;
    while (i < m && j < n && k < p)
    {
        int val = max(A[i], max(B[j], C[k])) - min(A[i], min(B[j], C[k]));
        ans = min(val, ans);
        int minium = min(A[i], min(B[j], C[k]));
        if(A[i] == minium) i++;
        else if(B[j] == minium) j++;
        else k++;
    }
}