#include <algorithm>
bool static cmp(pair<int, int> a, pair<int, int> b)
{
    return ((double)a.second / a.first) > ((double)b.second / b.first);
}
double maximumValue(vector<pair<int, int>> &items, int n, int w)
{
    sort(items.begin(), items.end(), cmp);
    double profit = 0.0;
    for (int i = 0; i < n && w != 0; i++)
    {
        if (w > items[i].first)
        {
            profit += items[i].second;
            w -= items[i].first;
        }
        else
        {
            profit += ((double)items[i].second / items[i].first) * w;
            w = 0;
        }
    }
    return profit;
}