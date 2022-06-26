#include <algorithm>
bool static cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int maximumActivities(vector<int> &start, vector<int> &end)
{
    int n = start.size();
    vector<pair<int, int>> act(n);

    for (int i = 0; i < n; i++)
    {
        act[i].first = start[i];
        act[i].second = end[i];
    }
    /*  for(int i =0 ; i<n;i++){
         cout<< act[i].first << act[i].second ;
      }*/
    sort(act.begin(), act.end(), cmp);
    int ans = 1, lastend = act[0].second;
    for (int i = 1; i < n; i++)
    {
        //   cout<<ans;
        if (lastend <= act[i].first)
        {
            lastend = act[i].second;
            ans++;
        }
    }
    return ans;
}