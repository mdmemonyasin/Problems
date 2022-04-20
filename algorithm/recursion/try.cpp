#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isCheck(string tmp, char c)
{
    return tmp[tmp.length()-1==c];
}

void printAll(int n, int m, int numOfOpeningP, int numOfClosingP, int numOfOpeningB, int numOfClosingB, string tmp)
{
    if ((n + m) * 2 == tmp.length())
    {
        cout << tmp << endl;
        return;
    }
    // cout<<tmp<<endl;
    if (numOfOpeningP > numOfClosingP)
    {
        if (numOfOpeningP < n)
        {
            printAll(n, m, numOfOpeningP + 1, numOfClosingP, numOfOpeningB, numOfClosingB, tmp + "{");
        }
        if (isCheck(tmp, '{'))
        {
            printAll(n, m, numOfOpeningP, numOfClosingP + 1, numOfOpeningB, numOfClosingB, tmp + "}");
        }
    }
    else if (numOfOpeningP == numOfClosingP)
    {
        if (numOfOpeningP < n)
        {
            printAll(n, m, numOfOpeningP + 1, numOfClosingP, numOfOpeningB, numOfClosingB, tmp + "{");
        }
    }
    if (numOfOpeningB > numOfClosingB)
    {
        if (numOfOpeningB < m)
        {
            printAll(n, m, numOfOpeningP, numOfClosingP, numOfOpeningB + 1, numOfClosingB, tmp + "(");
        }
        if (isCheck(tmp, '('))
        {
            printAll(n, m, numOfOpeningP, numOfClosingP, numOfOpeningB, numOfClosingB + 1, tmp + ")");
        }
    }
    else if (numOfOpeningB == numOfClosingB)
    {
        if (numOfOpeningB < m)
        {
            printAll(n, m, numOfOpeningP, numOfClosingP, numOfOpeningB + 1, numOfClosingB, tmp + "(");
        }
    }
    return;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    cin >> n >> m;
    string tmp = "";
    printAll(n, m, 0, 0, 0, 0, tmp);
    return 0;
}
