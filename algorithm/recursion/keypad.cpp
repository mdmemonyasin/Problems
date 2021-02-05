#include <bits/stdc++.h>
using namespace std;

string helper(int n)
{
    if (n == 2)
    {
        return "abc";
    }
    else if (n == 3)
    {
        return "def";
    }
    else if (n == 4)
    {
        return "ghi";
    }
    else if (n == 5)
    {
        return "jkl";
    }
    else if (n == 6)
    {
        return "mno";
    }
    else if (n == 7)
    {
        return "pqrs";
    }
    else if (n == 8)
    {
        return "tuv";
    }
    else if (n == 9)
    {
        return "wxyz";
    }
}

int keypad(int n, string output[])
{
    if (n / 10 == 0)
    {
        string ans = helper(n % 10);
        for (int i = 0; i < ans.size(); i++)
        {
            output[i] = ans[i];
        }
        return ans.size();
    }
    int smallOutput = keypad(n / 10, output);
    string ans = helper(n % 10);

    for (int i = 0; i < smallOutput - 1; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            output[i + ans.size()] = output[i] + ans[j];
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        output[i] = output[i] + ans[i];
    }

    return ans.size() * smallOutput;
}

int main()
{
    int n;
    cin >> n;

    string output[50];

    int ans = keypad(n, output);
    for (int i = 0; i < ans; i++)
    {
        cout << output[i] << endl;
    }
}