// repeatition not allowed
void helper(vector<int> arr, int target, int n, int idx, vector<int> &temp, vector<vector<int>> &ans)
{

    if (idx == n)
    {
        if (target == 0)
            ans.push_back(temp);
        return;
    }
    temp.push_back(arr[idx]);
    helper(arr, target - arr[idx], n, idx + 1, temp, ans);
    temp.pop_back();
    helper(arr, target, n, idx + 1, temp, ans);
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>> ans;
    vector<int> temp;
    helper(arr, k, n, 0, temp, ans);
    return ans;
}