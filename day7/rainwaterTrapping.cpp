#include <bits/stdc++.h>
long getTrappedWater(long *arr, int n)
{
    long left[n], right[n];
    long l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        left[i] = l;
        l = max(l, arr[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {

        // cout<<"i:"<<i<<" r = "<<r<<" arr[i] = "<<arr[i]<<endl;
        right[i] = r;
        r = max(r, arr[i]);
    }
    long ans = 0;
    for (int i = 0; i < n; i++)
    {
        // cout<<" i :"<<i<<"height :"<<arr[i]<<"l : " <<left[i] <<" r : "<<right[i]<<endl;
        long temp = min(left[i], right[i]) - arr[i];
        if (temp > 0)
            ans += temp;
    }

    return ans;
}