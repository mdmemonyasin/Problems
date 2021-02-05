#include <bits/stdc++.h>
using namespace std;

#define fill(a, n, x)           \
    for (int i = 0; i < n; i++) \
    {                           \
        a[i] = x;               \
    }

void sieve(int *prime, int *spf, int n)
{
    // int prime[n+1], spf[n+1];
    fill(prime, n + 1, 1);
    fill(spf, n + 1, -1);
    prime[0] = prime[1] = 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == 1)
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                if (prime[j] == 1)
                {
                    spf[j] = i;
                    prime[j] = 0;
                }
            }
        }
    }
}

int main()
{
    int num = 10000;
    int prime[num + 1], spf[num + 1];
    sieve(prime, spf, num);
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        while (spf[n] != -1)
        {
            cout << spf[n] << " ";
            n = n / spf[n];
        }
        if (n != 1)
        {
            cout << n << " ";
        }
        cout << endl;
    }
}