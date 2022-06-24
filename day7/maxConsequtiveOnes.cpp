
int longestSubSeg(vector<int> &arr, int n, int k)
{
    // Write your code here.
    int i = 0, maxi = 0, zeroCount = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == 0)
            zeroCount++;
        /**********************/
        while (zeroCount > k)
        {
            if (arr[i] == 0)
            {
                zeroCount--;
                i++;
                break;
            }
            i++;
        }
        /**********************/
        /* if(zeroCount>k){
            if(arr[i]==0)
                zeroCount--;
            i++;
        }*/
        maxi = max(maxi, j - i + 1);
    }
    return maxi;
}
