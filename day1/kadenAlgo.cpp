#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long maxi = max(arr[0], 0);
    long long sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (sum + arr[i] > arr[i])
            sum += arr[i];
        else
            sum = arr[i];
        if (maxi < sum)
            maxi = sum;
    }
    return maxi;
}