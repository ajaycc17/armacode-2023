// https://www.hackerrank.com/contests/armacode-x-armageddon-ii/challenges/crush
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "KAAKA";
    int n = 5;
    int mincost = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == 'A')
                {
                    mincost = min(mincost, j - i);
                    if (mincost == 3)
                        mincost = 1;
                }
            }
        }
    }
    if (mincost >= 3)
        mincost = mincost - 2;
    cout << mincost;
    return 0;
}