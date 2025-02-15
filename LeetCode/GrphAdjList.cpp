class Solution
{
public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>> &edges)
    {
        vector<vector<int>> ans(V);
        for (auto i : edges)
        {
            ans[i.first].push_back(i.second);
            ans[i.second].push_back(i.first);
        }
        return ans;
    }
};