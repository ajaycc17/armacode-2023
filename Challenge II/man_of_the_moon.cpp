// https://www.hackerrank.com/contests/armacode-x-armageddon/challenges/mount-b-tree
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    int m = 5;
    string ins = "LRLRD";
    int len = ins.length();
    for (int i = 0; i < len; i++)
    {
        if (ins[i] == 'L')
        {
            n = 2 * n + 1;
        }
        else if (ins[i] == 'R')
        {
            n = 2 * n + 2;
        }fd

        else if (ins[i] == 'D')
        {
            n = floor((n - 1) / 2);
        }
        // cout<<n<<endl;
    }
    cout << n+1;
}