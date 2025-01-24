class Solution
{
public:
    string minWindow(string s, string t)
    {
        vector<int> mp(128, 0);
        for (auto c : t)
            mp[c]++;
        int counter = t.size(), l = 0, r = 0, d = INT_MAX, head = 0;
        while (r < s.size())
        {
            if (mp[s[r++]]-- > 0)
                counter--;
            while (counter == 0)
            {
                if (r - l < d)
                    d = r - (head = l);
                if (mp[s[l++]]++ == 0)
                    counter++;
            }
        }
        return d == INT_MAX ? "" : s.substr(head, d);
    }
};