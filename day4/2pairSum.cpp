vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    // Write your code here.
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp(2);
                temp[0] = arr[i];
                temp[1] = arr[j];
                ans.push_back(temp);
            }
        }
    }
    return ans;
}

/*****************using hashmap******************/
#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    // Write your code here.
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    int n = arr.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(s - arr[i]) != mp.end())
        {
            vector<int> temp(2);
            temp[0] = s - arr[i];
            temp[1] = arr[i];
            ans.push_back(temp);
        }
        mp[arr[i]] = i;
    }
    return ans;
}