#include <iostream>
using namespace std;

void print(int **arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    // m = number of rows, n = number of columns
    // Pointer to pointer
    int **arr;
    arr = new int *[m];
    for (int i = 0; i < m; i++)
    {
        // arr[i] = new int[n];
        // for (int j = 0; j < n; j++)
        // {
        //     cin >> arr[i][j];
        // }
    }
    // print(arr, m, n);
}