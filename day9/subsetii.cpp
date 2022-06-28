class Solution
{
public:
    void helper(vector<vector<int>> &ans, vector<int> nums, vector<int> &subset, int i, bool taken)
    {
        if (i == nums.size())
        {
            ans.push_back(subset);
            return;
        }
        else
        {

            helper(ans, nums, subset, i + 1, false);
            if (i > 0 && nums[i] == nums[i - 1] && (!taken)) // if i ignore the pervious element:false i sould ignore this
                return;
            subset.push_back(nums[i]);
            helper(ans, nums, subset, i + 1, true);
            subset.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        vector<int> s;
        helper(ans, nums, s, 0, false);
        return ans;
    }
};