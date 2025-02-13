class Solution
{
public:
    int solve(vector<int> &coins, int n, int sum, vector<vector<int>> &m)
    {
        if (sum == 0)
            return 1;

        if (n == 0 || sum < 0)
            return 0;

        if (m[n - 1][sum] != -1)
            return m[n - 1][sum];

        return m[n - 1][sum] = solve(coins, n, sum - coins[n - 1], m) + solve(coins, n - 1, sum, m);
    }
    int count(vector<int> &coins, int sum)
    {
        vector<vector<int>> m(coins.size(), vector<int>(sum + 1, -1));
        return solve(coins, coins.size(), sum, m);
    }
};