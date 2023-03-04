// https://www.hackerrank.com/contests/armacode-x-armageddon-ii/challenges/divide-paddy-field-between-two-brothers
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int ax1, ay1, ax2, ay2, bx1, by1, bx2, by2;
    cin >> ax1 >> ay1 >> ax2 >> ay2 >> bx1 >> by1 >> bx2 >> by2;
    double res;
    int a1 = abs(ax1 - ax2) * abs(ay1 - ay2);
    int a2 = abs(bx1 - bx2) * abs(by1 - by2);
    int x = min(ax2, bx2) - max(ax1, bx1);
    int y = (min(ay2, by2) - max(ay1, by1));
    int overlap = 0;
    if (x > 0 && y > 0)
        overlap = x * y;
    res = (a1 + a2 - overlap);
    cout << res / 2;
    return 0;
}
