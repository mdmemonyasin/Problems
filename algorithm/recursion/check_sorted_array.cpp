#include <bits/stdc++.h>
using namespace std;

bool is_sorted(int a[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (a[0] > a[1])
    {
        return false;
    }
    return is_sorted(a + 1, size - 1);
}

int main()
{
    int a[] = {1, 2, 5, 4};
    int size = sizeof(a) / sizeof(a[0]);
    if (is_sorted(a, size))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}