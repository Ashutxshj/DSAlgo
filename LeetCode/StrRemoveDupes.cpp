class Solution
{
public:
    string removeDups(string str)
    {
        unordered_map<char, int> mp;
        string ans = "";
        for (char i : str)
        {
            if (mp.find(i) == mp.end())
            {
                mp[i] = 1;
                ans += i;
            }
            else
            {
                mp[i]++;
            }
        }
        return ans;
    }
};