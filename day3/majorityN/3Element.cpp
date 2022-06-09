#include <bits/stdc++.h>
vector<int> majorityElementII(vector<int> &nums)
{
    // Write your code here.
    int ele1 = INT_MIN, ele2 = INT_MIN;
    int c1 = 0, c2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {

        //      cout<<"ele1 "<<ele1<<"ele2 : "<<ele2;
        if (nums[i] == ele1)
            c1++;
        else if (nums[i] == ele2)
            c2++;
        else if (c1 == 0)
        {
            ele1 = nums[i];
            c1 = 1;
        }
        else if (c2 == 0)
        {
            ele2 = nums[i];
            c2 = 1;
        }
        else
        {
            c1--;
            c2--;
        }
    }
    c1 = 0;
    c2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == ele1)
            c1++;
        if (nums[i] == ele2)
            c2++;
    }
    vector<int> ans;
    if (c1 > nums.size() / 3)
        ans.push_back(ele1);
    if (c2 > nums.size() / 3)
        ans.push_back(ele2);
    return ans;
}