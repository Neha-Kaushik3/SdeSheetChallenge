int calculateMinPatforms(int at[], int dt[], int n)
{
    // Write your code here.
    sort(at, at + n);
    sort(dt, dt + n);
    int i = 1, j = 0;
    int count = 1, maxi = 1;
    while (i < n)
    {
        if (at[i] <= dt[j])
        {
            count++;
            i++;
        }
        else
        {
            count--;
            j++;
        }
        maxi = max(maxi, count);
    }
    return maxi;
}