#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<char> a;
    for (int i = 0; i < n; i++)
    {
        char b;
        cin >> b;
        a.push_back(b);
    }
    int count_A = 0;
    int count_B = 0;
    int k = 0;
    if (a[0] == '-')
    {
        int count = 0;
        while (a[k] == '-')
        {
            count++;
            k++;
        }
        if (a[k] == 'A')
        {
            count_A = count_A + count;
        }
    }
    for (; k < n;)
    {

        if (a[k] == 'B')
        {
            int count = 0;
            k++;
            count_B++;
            while (a[k] == '-')
            {
                count++;
                k++;
            }
            if (a[k] == 'A')
            {
                count_A = count_A + (count / 2);
                count_B = count_B + (count / 2);
            }
            else if (a[k] == 'B')
            {
                count_B = count_B + count;
            }
        }
        else if (a[k] == 'A')
        {
            count_A++;
            k++;
            int count = 0;
            while (a[k] == '-')
            {
                k++;
                count++;
            }
            if (a[k] == 'B')
            {
            }
            else if (a[k] == 'A')
            {
                count_A = count_A + count;
            }
        }
    }
    if (count_A > count_B)
    {
        cout << 'A';
    }
    else if (count_B > count_A)
    {
        cout << 'B';
    }
    else
    {
        cout << "Coalition government";
    }
}