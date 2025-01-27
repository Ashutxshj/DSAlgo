class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                mp[grid[i][j]]++;
            }
        }
        vector<int> lol;
        int n = grid.size() * grid[0].size();
        for (auto &m : mp)
        {
            if (m.second == 2)
                lol.push_back(m.first);
        }
        for (int i = 1; i < n + 1; i++)
        {
            if (mp.find(i) == mp.end())
                lol.push_back(i);
        }
        return lol;
    }
};