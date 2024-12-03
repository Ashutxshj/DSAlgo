class Solution
{
public:
    vector<vector<int>> getPairs(vector<int> &arr)
    {
        unordered_set<int> pos;
        set<int> neg;
        int zero = 0;
        vector<vector<int>> ans;
        for (auto i : arr)
        {
            if (i > 0)
                pos.insert(i);
            else if (i < 0)
                neg.insert(i);
            else
                zero++;
        }
        if (zero >= 2)
            pos.insert(0);
        neg.insert(0);

        for (auto i : neg)
        {
            if (pos.find(-i) != pos.end())
                ans.push_back({i, -i});
        }
        return ans;
    }
};