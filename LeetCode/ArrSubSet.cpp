class Solution
{
public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b)
    {
        // Your code here
        unordered_map<int, int> mp;
        for (int i = 0; i < a.size(); i++)
        {
            mp[a[i]]++;
        }
        int count = 0;
        for (int i = 0; i < b.size(); i++)
        {
            if (mp[b[i]] > 0)
            {
                mp[b[i]]--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};