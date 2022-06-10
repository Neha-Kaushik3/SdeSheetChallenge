#include <bits/stdc++.h>
int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n)
{
    unordered_set<int> s(nums.begin(), nums.end());
    unordered_set<int>::iterator it, it2;
    int count = 0, max = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        it = s.find(nums[i] - 1);
        count = 0;
        if (it == s.end())
        {
            /*   it2 = s.find(nums[i]);
               int curr = *it2++;
               count=1;
               while(curr+1==*it2)
               {
                   count++;
                   curr = *it2++;
               }*/

            while (s.find(nums[i] + count) != s.end())
            {
                count++;
            }

            if (max < count)
            {
                max = count;
            }
        }
    }
    return max;
}