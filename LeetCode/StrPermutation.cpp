#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        vector<int> s1Count(26, 0);
        vector<int> s2Count(26, 0);
        for (int i = 0; i < s1.length(); i++)
        {
            s1Count[s1[i] - 'a']++;
            s2Count[s2[i] - 'a']++;
        }
        for (int i = s1.length(); i < s2.length(); i++)
        {
            if (s1Count == s2Count)
                return true;

            s2Count[s2[i - s1.length()] - 'a']--;
            s2Count[s2[i] - 'a']++;
        }
        return s1Count == s2Count;
    }
};
int main()
{
    string a1 = "ab";
    string a2 = "eidbaooo";
    Solution s = Solution();
    cout << s.checkInclusion(a1, a2);
}