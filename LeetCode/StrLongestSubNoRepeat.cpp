#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
class Solution
{
public:
    bool validSub(string a)
    {
        unordered_map<char, int> mp;
        for (char c : a)
        {
            if (mp.find(c) != mp.end())
                return false;
            mp[c]++;
        }
        return true;
    }
    int lengthOfLongestSubstring(string s)
    {
        if (s.empty())
            return 0;
        if (s.length() == 1)
            return 1;
        int i = 0, j = 1, ans = 0;
        while (j < s.length())
        {
            int len = 0;
            string s1 = s.substr(i, j - i + 1);
            if (validSub(s1))
            {
                ans = max(j - i + 1, ans);
                j++;
            }
            else
                i++;
        }
        return ans;
    }
};
int main()
{
    Solution s = Solution();
    // cout << s.validSub("abc") << endl;
    // cout << s.validSub("abca") << endl;
    cout << s.lengthOfLongestSubstring("bbbbb") << endl;
    cout << s.lengthOfLongestSubstring("abcabcbb") << endl;
    cout << s.lengthOfLongestSubstring("") << endl;
    cout << s.lengthOfLongestSubstring(" ") << endl;
    cout << s.lengthOfLongestSubstring("au") << endl;
}