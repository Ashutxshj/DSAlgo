class Solution
{
public:
    float solve(vector<int> &arr, int n)
    {
        // base case
        if (n == 1)
            return (float)arr[0];

        // Hypothesis
        float lol = solve(arr, n - 1);

        // Recurrence Relation for Mean
        return ((lol * (n - 1) + arr[n - 1]) / n);
    }
    int findMean(vector<int> &arr)
    {
        int n = arr.size();
        return floor(solve(arr, n));
    }
};