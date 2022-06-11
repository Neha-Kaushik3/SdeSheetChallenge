#include <bits/stdc++.h>
int LongestSubsetWithZeroSum(vector<int> arr)
{
    // map <sum , index>
    map<int, int> mp;
    int sum = 0;
    int maxi = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum == 0)
            maxi = max(maxi, i + 1);
        if (mp.find(sum) != mp.end())
        {
            maxi = max(maxi, i - mp.find(sum)->second);
        }
        else
            mp[sum] = i;
    }
    return maxi;
    // Write your code here
}