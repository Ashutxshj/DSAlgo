class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> &arr)
    {
        int n = arr.size();
        if (n == 0)
            return -1;
        int m = arr[0].size();

        int max_row_index = -1;
        int max_count = 0;

        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == 1)
                {
                    count++;
                }
            }
            if (count > max_count)
            {
                max_count = count;
                max_row_index = i;
            }
        }
        return max_row_index;
    }
};