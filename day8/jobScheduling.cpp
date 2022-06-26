#include <algorithm>
struct job
{
    int profit, deadline;
};
bool static cmp(struct job a, struct job b)
{
    return (a.profit > b.profit);
}
int jobScheduling(vector<vector<int>> &jobs)
{
    int n = jobs.size();
    struct job arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i].profit = jobs[i][1];
        arr[i].deadline = jobs[i][0];
    }
    sort(arr, arr + n, cmp);
    int profit = 0;
    int max_deadline = 0;
    for (int i = 0; i < n; i++)
        max_deadline = max(max_deadline, arr[i].deadline);
    vector<int> slot(max_deadline + 1, -1);
    for (int i = 0; i < n; i++)
    {
        for (int j = arr[i].deadline; j > 0; j--)
        {
            if (slot[j] == -1)
            {
                slot[j] = 0;
                profit += arr[i].profit;
                break;
            }
        }
    }
    return profit;
}
