class Solution
{
public:
    int countUnguarded(int m, int n, vector<vector<int>> &guards, vector<vector<int>> &walls)
    {
        vector<vector<int>> ans(m, vector<int>(n, 0));

        for (int i = 0; i < guards.size(); i++)
        {
            ans[guards[i][0]][guards[i][1]] = 1;
        }
        for (int i = 0; i < walls.size(); i++)
        {
            ans[walls[i][0]][walls[i][1]] = 2;
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ans[i][j] == 1)
                {
                    for (int k = i - 1; k >= 0 && ans[k][j] != 2 && ans[k][j] != 1; k--)
                    {
                        ans[k][j] = 3;
                    }
                    for (int k = i + 1; k < m && ans[k][j] != 2 && ans[k][j] != 1; k++)
                    {
                        ans[k][j] = 3;
                    }
                    for (int k = j - 1; k >= 0 && ans[i][k] != 2 && ans[i][k] != 1; k--)
                    {
                        ans[i][k] = 3;
                    }
                    for (int k = j + 1; k < n && ans[i][k] != 2 && ans[i][k] != 1; k++)
                    {
                        ans[i][k] = 3;
                    }
                }
            }
        }

        int count = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ans[i][j] == 0)
                {
                    count++;
                }
            }
        }

        return count;
        // O(n^2 * 4)
    }
};
