class Solution
{
public:
    vector<int> arrayRankTransform(vector<int> &arr)
    {
        unordered_map<int, int> mp;
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());

        for (int i = 0; i < sorted.size(); i++)
        {
            if (mp.find(sorted[i]) == mp.end())
            {
                mp[sorted[i]] = mp.size() + 1;
            }
        }
        vector<int> ans;
        for (int i = 0; i < arr.size(); i++)
        {
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};