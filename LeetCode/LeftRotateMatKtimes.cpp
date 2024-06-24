vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat)
{
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>> v(n, vector<int>(m));

    k = k % m;
    int I = 0;
    for (int i = 0; i < n; i++)
    {
        int J = 0;
        for (int j = k; j < m; j++)
        {
            v[I][J] = mat[i][j];
            J++;
        }
        for (int j = 0; j < k; j++)
        {
            v[I][J] = mat[i][j];
            J++;
        }

        I++;
    }
    return v;
}