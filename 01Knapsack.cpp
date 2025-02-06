// Recursive
class Solution
{
public:
    int solve(int w, vector<int> &val, vector<int> &wt, int n)
    {
        if (w == 0 || n == 0)
            return 0;

        if (w >= wt[n - 1])
            return max(val[n - 1] + solve(w - wt[n - 1], val, wt, n - 1), solve(w, val, wt, n - 1));

        else
            return solve(w, val, wt, n - 1);
    }
    int knapSack(int capacity, vector<int> &val, vector<int> &wt)
    {
        int n = val.size();
        return solve(capacity, val, wt, n);
    }
};

// Memoization
class Solution
{
public:
    int solve(int w, vector<int> &val, vector<int> &wt, int n, vector<vector<int>> &t)
    {
        if (w == 0 || n == 0)
            return 0;

        if (t[w][n] != -1)
            return t[w][n];

        if (w >= wt[n - 1])
        {
            t[w][n] = max(val[n - 1] + solve(w - wt[n - 1], val, wt, n - 1, t), solve(w, val, wt, n - 1, t));
        }

        else
        {
            t[w][n] = solve(w, val, wt, n - 1, t);
        }
        return t[w][n];
    }
    int knapSack(int capacity, vector<int> &val, vector<int> &wt)
    {
        int n = val.size();
        vector<vector<int>> t(capacity + 1, vector<int>(n + 1, -1));
        return solve(capacity, val, wt, n, t);
    }
};
// Top Down Approach
class Solution
{
public:
    int knapSack(int w, vector<int> &val, vector<int> &wt)
    {
        int n = val.size();
        int t[n + 1][w + 1];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= w; j++)
            {
                if (i == 0 || j == 0)
                    t[i][j] = 0;
                else if (wt[i - 1] <= j)
                    t[i][j] = max(val[i - 1] + t[i - 1][j - wt[i - 1]], t[i - 1][j]);

                else
                    t[i][j] = t[i - 1][j];
            }
        }
        return t[n][w];
    }
};