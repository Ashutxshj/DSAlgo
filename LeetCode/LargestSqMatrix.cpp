class Solution
{
public:
    int maxSquare(int n, int m, vector<vector<int>> mat)
    {
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (ans == 0 && mat[i][j] == 1)
                    ans = 1;
                if (i && j && mat[i][j] && mat[i - 1][j - 1] && mat[i - 1][j] && mat[i][j - 1])
                {
                    mat[i][j] = min({mat[i - 1][j - 1], mat[i - 1][j], mat[i][j - 1]}) + 1;
                    ans = max(ans, mat[i][j]);
                }
            }
        }
        return ans;
    }
}