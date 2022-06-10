#include <bits/stdc++.h>

int helper(int m, int n, int i, int j, vector<vector<int>> &dp)
{
    if (i >= m || j >= n)
    {
        return 0;
    }
    if (i == m - 1 && j == n - 1)
        return 1;
    if (dp[i][j] != -1)
        return dp[i][j];
    int r = helper(m, n, i, j + 1, dp);
    int d = helper(m, n, i + 1, j, dp);
    dp[i][j] = r + d;
    return dp[i][j];
}
int uniquePaths(int m, int n)
{
    // Write your code here.
    vector<vector<int>> dp(m, vector<int>(n, -1));
    return helper(m, n, 0, 0, dp);
}