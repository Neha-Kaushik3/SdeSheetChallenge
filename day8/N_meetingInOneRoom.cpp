#include <algorithm>
struct act
{
    int s;
    int e;
    int no;
};
bool static cmp(struct act a, struct act b)
{
    if (a.e != b.e)
        return (a.e < b.e);
    return a.no < b.no;
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end)
{
    // Write your code here.

    int n = start.size();
    struct act arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i].s = start[i];
        arr[i].e = end[i];
        arr[i].no = i + 1;
    }
    sort(arr, arr + n, cmp);
    int i = 1;
    vector<int> count;
    count.push_back(arr[0].no);
    int last_end = arr[0].e;
    for (; i < n; i++)
    {
        if (arr[i].s > last_end)
        {
            count.push_back(arr[i].no);
            last_end = arr[i].e;
        }
    }
    return count;
}