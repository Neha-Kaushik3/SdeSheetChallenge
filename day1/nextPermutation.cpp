#include <bits/stdc++.h>
vector<int> nextPermutation(vector<int> &nums, int n)
{
    // traverse from back
    // find the next smaller number
    // find the next number just greater than the number in st2
    // swap the two numbers
    // reverse from swaped position to the end

    int big, small;
    for (int i = n - 2; i >= 0; i--)
    {

        if (nums[i] < nums[i + 1])
        {
            small = i;
            break;
        }
        /*     if(nums[small]<nums[i])
           {
               big = i;
             //  break;
           }*/
    }

    if (small <= 0)
    {
        reverse(nums.begin(), nums.end());
        return nums;
    }
    for (int i = n - 1; i >= small; i--)
    {
        if (nums[small] < nums[i])
        {
            big = i;
            break;
        }
    }
    // cout<<nums[big]<<nums[small];
    swap(nums[small], nums[big]);
    reverse(nums.begin() + small + 1, nums.end());
    return nums;
}