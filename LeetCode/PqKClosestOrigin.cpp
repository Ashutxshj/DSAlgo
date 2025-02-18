class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        priority_queue<pair<int, pair<int, int>>> pq;
        for (auto &point : points)
        {
            int dis = point[0] * point[0] + point[1] * point[1];
            pq.push({dis, {point[0], point[1]}});
            if (pq.size() > k)
                pq.pop();
        }
        vector<vector<int>> ans;
        while (!pq.empty())
        {
            ans.push_back({pq.top().second.first,
                           pq.top().second.second});
            pq.pop();
        }
        return ans;
    }
};