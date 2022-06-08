#include <bits/stdc++.h>
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    vector<int> b(2, 0);
    b[0] = intervals[0][0];
    b[1] = intervals[0][1];
    for (int i = 1; i < intervals.size(); i++)
    {
        if (b[1] >= intervals[i][0])
        {
            b[1] = max(b[1], intervals[i][1]);
        }
        else
        {
            ans.push_back(b);
            b[0] = intervals[i][0];
            b[1] = intervals[i][1];
        }
    }
    ans.push_back(b);
    return ans;
}
