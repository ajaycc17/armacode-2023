// https://www.hackerrank.com/contests/armacode-x-armageddon-ii/challenges/painters-pain
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m;
    cin >> n;
    const int M = m;
    const int N = n;
    int x[m][n];
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> x[i][j];
        }
    }
    int s = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
                s = s + x[i][j];
            if ((i == 0 && j == 0) || (i == 0 && j == n - 1) || (i == m - 1 && j == 0) || (i == m - 1 && j == n - 1))
                s = s + x[i][j];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i != m - 1)
                if (x[i][j] > x[i + 1][j])
                    s = s + x[i][j] - x[i + 1][j];
            if (j != n - 1)
                if (x[i][j] > x[i][j + 1])
                    s = s + x[i][j] - x[i][j + 1];
            if (i != 0)
                if (x[i][j] > x[i - 1][j])
                    s = s + x[i][j] - x[i - 1][j];
            if (j != 0)
                if (x[i][j] > x[i][j - 1])
                    s = s + x[i][j] - x[i][j - 1];
        }
    }
    cout << "\n"
         << s << "\t buckets are required for painting the building";
    return 0;
}