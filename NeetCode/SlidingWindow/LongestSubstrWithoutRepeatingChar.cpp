class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int left = 0, right = 0;
        int maxlen = 0;
        while (right < s.length())
        {
            for (int i = left; i < right; i++)
            {
                if (s[i] == s[right])
                {
                    left = i + 1;
                    break;
                }
            }
            maxlen = max(maxlen, right - left + 1);
            right++;
        }

        return maxlen;
    }
};
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> mp;
        int l = 0, ans = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (mp.find(s[i]) != mp.end())
            {
                l = max(mp[s[i]] + 1, l);
            }
            mp[s[i]] = i;
            ans = max(ans, i - l + 1);
        }
        return ans;
    }
};