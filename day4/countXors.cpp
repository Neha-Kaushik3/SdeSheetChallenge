#include <bits/stdc++.h>
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    // map<xor,count>
    map<int, int> mp;
    int Currxor = 0, n = arr.size(), count = 0;
    //  mp[Currxor] = 1;
    for (int i = 0; i < n; i++)
    {
        Currxor ^= arr[i];
        if (Currxor == x)
            count++;
        if (mp.find(Currxor ^ x) != mp.end())
        {
            count += mp[Currxor ^ x];
        }
        mp[Currxor]++;
    }
    return count;
}