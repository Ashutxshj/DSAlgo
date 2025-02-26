class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        map<vector<int>, int> mp;
        for (int i = 0; i < grid.size(); i++)
        {
            mp[grid[i]]++;
        }
        int count = 0;
        for (int j = 0; j < grid[0].size(); j++)
        {
            vector<int> col;
            for (int i = 0; i < grid.size(); i++)
            {
                col.push_back(grid[i][j]);
            }
            if (mp.find(col) != mp.end())
                count += mp[col];
        }
        return count;
    }
};