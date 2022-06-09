#include <bits/stdc++.h>
int modularExponentiation(int base, int n, int m)
{
    // Write your code here.
    if (n == 0)
        return 1;
    long x = base % m;
    int ans = 1;
    int p = n;
    while (p > 1)
    {
        if (p % 2 == 0)
        {
            p = p / 2;
            x = ((x % m) * (x % m)) % m;
        }
        else
        {
            p = p - 1;
            ans = (((ans) % m) * x % m) % m;
        }
    }
    ans = ((ans % m) * x % m) % m;
    return (int)(ans % m);
}