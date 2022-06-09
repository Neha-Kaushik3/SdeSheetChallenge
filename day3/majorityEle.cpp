#include <bits/stdc++.h>
int findMajorityElement(int nums[], int n)
{
    // Write your code here.
    int count = 0;
    int element = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (!count)
            element = nums[i];
        if (nums[i] == element)
            count++;
        else
            count--;
    }
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        if (element == nums[i])
            p++;
    }
    if (p > (n / 2))
        return element;
    return -1;
}