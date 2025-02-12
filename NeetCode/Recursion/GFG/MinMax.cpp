class Solution
{
public:
    int getMax(vector<int> arr, int n)
    {
        if (n == 1)
            return arr[0];

        return max(arr[n - 1], getMax(arr, n - 1));
    }
    int getMin(vector<int> arr, int n)
    {
        if (n == 1)
            return arr[0];

        return min(arr[n - 1], getMin(arr, n - 1));
    }
    pair<int, int> getMinMax(vector<int> arr)
    {
        if (arr.empty())
        {
            return {INT_MAX, INT_MIN};
        }
        int l = getMin(arr, arr.size());
        int r = getMax(arr, arr.size());
        return {l, r};
    }
};