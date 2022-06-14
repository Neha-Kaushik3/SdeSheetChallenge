#include <bits/stdc++.h>
int uniqueSubstrings(string input)
{
    // Write your code here
    int ans = 1, start = 0, end = 0, n = input.size();
    unordered_set<int> s;
    for (int end = 0; end < n; end++)
    {
        if (s.find(input[end]) != s.end())
        {
            while (start < end && s.find(input[start]) != s.find(input[end]))
            {
                s.erase(input[start++]);
            }
            s.erase(input[start++]);
        }
        s.insert(input[end]);
        ans = max(ans, end - start + 1);
    }
    return ans;
}