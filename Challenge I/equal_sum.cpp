// https://www.hackerrank.com/contests/armacode-x-armageddon-ii/challenges/equal-sum-4
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int pivotIndex(vector<int> &nums)
{
    int n = nums.size(), sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }
    int ls = 0;
    for (int i = 0; i < n; i++)
    {
        if (ls == (sum - nums[i] - ls))
            return i;
        ls += nums[i];
    }
    return -1;
}
int main()
{
    int n = 6;
    vector<int> nums = {6,
                        3,
                        1,
                        2,
                        3,
                        4};
    cout << pivotIndex(nums);
    return 0;
}
