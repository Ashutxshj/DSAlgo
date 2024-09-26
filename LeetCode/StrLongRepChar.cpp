#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
//! We want the character to match with the most common occuring character in the window
using namespace std;
class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        vector<int> count(26);
        int maxCount = 0;

        int i = 0;
        int j = 0;
        //? WindowLen - Count[Char] <= k
        int result = 0;

        while (j < s.size())
        {
            count[s[j] - 'A']++;
            maxCount = max(maxCount, count[s[j] - 'A']);
            if (j - i + 1 - maxCount > k)
            {
                count[s[i] - 'A']--;
                i++;
            }
            result = max(result, j - i + 1);
            j++;
        }

        return result;
    }
};

int main()
{
    Solution s = Solution();
    string str = "ABAB";
    // cout << s.longestSubString(str);
    cout << s.characterReplacement(str, 2);
}