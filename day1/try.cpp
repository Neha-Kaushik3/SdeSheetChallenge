/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
vector<int> ninjaAndSortedArrays(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    // Write your code here.
    int gap = (m + n + 1) / 2;
    int i = 0, j = gap;
    while (gap)
    {
        if (j < m && arr1[i] > arr1[j])
            swap(arr1[i], arr1[j]);
        if (j > m && i < m && arr1[i] > arr2[j])
            swap(arr1[i], arr2[j - m]);
        if (i > m && arr2[i] > arr2[j])
            swap(arr2[i - m], arr2[j - m]);
        if (gap == 1)
            gap = 0;
            gap /= 2;
    }
    j = 0;
    while (j < n)
    {
        arr1[m + j] = arr2[j];
    }
    return arr1;
}

using namespace std;

int main()
{
    vector<int> a = {1, 2, 4, 6, 0, 0, 0, 0};
    vector<int> b = {3, 5, 8, 9};
    vector<int> ans = ninjaAndSortedArrays(a, b, 4, 4);
    for (auto it : ans)
        cout << it;
    return 0;
}
