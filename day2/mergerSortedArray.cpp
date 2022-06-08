#include <bits/stdc++.h>
vector<int> ninjaAndSortedArrays(vector<int> &nums1, vector<int> &nums2, int m, int n)
{
    int i;
    if (nums2.size() == 0)
        return nums1;

    for (i = 0; i < n; i++)
    {
        nums1[m + i] = nums2[i];
    }
    sort(nums1.begin(), nums1.end());
    return nums1;
}