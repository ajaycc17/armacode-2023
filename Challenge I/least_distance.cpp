// https://www.hackerrank.com/contests/armacode-x-armageddon-ii/challenges/least-distance-1-1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test-- > 0)
    {
        int n;
        string s;
        cin >> n;
        getline(cin, s);

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
        if (mincost == INT_MAX)
            mincost = 0;
        if (mincost >= 3)
            mincost = mincost - 2;
        cout << mincost;
    }
    return 0;
}