#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int l, int h, int key)
{
    if (l > h)
    {
        return -1;
    }
    int mid = (l + h) / 2;
    if (arr[mid] > key)
    {
        return binary_search(arr, l, mid - 1, key);
    }
    else if (arr[mid] < key)
    {
        return binary_search(arr, mid + 1, h, key);
    }
    else
    {
        return mid;
    }
}



int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << binary_search(arr, 0, n - 1, 5);
}