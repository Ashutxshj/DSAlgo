class Solution
{
public:
    int alternatingMaxLength(vector<int> &arr)
    {
        int n = arr.size();

        int up = 1, down = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > arr[i - 1])
            {
                up = down + 1;
            }
            else if (arr[i] < arr[i - 1])
            {
                down = up + 1;
            }
        }

        return max(up, down);
    }
};