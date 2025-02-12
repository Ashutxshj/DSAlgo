class Solution
{
public:
    // Function to return list containing first n fibonacci numbers.
    int solve(int n)
    {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;

        return solve(n - 2) + solve(n - 1);
    }
    vector<int> fibonacciNumbers(int n)
    {
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(solve(i));
        }
        return ans;
    }
};