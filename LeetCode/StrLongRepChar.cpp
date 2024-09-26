#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
//! We want the character to match with the most common occuring character in the window
using namespace std;
class Solution
{
public:
    char mostCommonChar(string s)
    {
        unordered_map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        char mostCommon = s[0];
        int maxCount = 0;
        for (auto i : mp)
        {
            if (i.second > maxCount)
            {
                maxCount = i.second;
                mostCommon = i.first;
            }
        }
        return mostCommon;
    }
    int longestSubString(string s)
    {
        int ans = 0, count = 1;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == s[i - 1])
            {
                count++;
            }
            else
            {
                ans = max(ans, count);
                count = 1;
            }
        }
        ans = max(ans, count);
        return ans;
    }
    int characterReplacement(string s, int k)
    {
        int left = 0;
        while (left < s.length())
        {
            int count = k;
            if (s[left] != mostCommonChar(s) && count != 0)
            {
                s[left] = mostCommonChar(s);
                count--;
            }
            left++;
        }
        return longestSubString(s);
    }
};
int main()
{
    Solution s = Solution();
    string str = "ABAB";
    // cout << s.longestSubString(str);
    cout << s.characterReplacement(str, 2);
}