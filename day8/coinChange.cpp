int findMinimumCoins(int amount)
{
    // Write your code here
    int coins[10] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int coin = coins[0];
    int i = 1;
    int ans = 0;
    while (amount != 0)
    {

        if (coin <= amount)
        {
            //    cout<<ans<<" "<<" :coin"<<coin<<endl;
            ans += amount / coin;
            amount = amount % coin;
        }
        coin = coins[i++];
    }
    return ans;
}
