#include <algorithm>
void helper(vector<int> &ans, int currsum, vector<int> num, int idx)
{
    if (idx == num.size())
    {
        ans.push_back(currsum);
        currsum = 0;
        return;
    }
    helper(ans, currsum, num, idx + 1);
    helper(ans, currsum + num[idx], num, idx + 1);
}
vector<int> subsetSum(vector<int> &num)
{
    vector<int> ans;
    helper(ans, 0, num, 0);
    sort(ans.begin(), ans.end());
    return ans;
}