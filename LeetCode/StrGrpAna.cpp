#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
    bool isInArr(vector<vector<string>> s, vector<string> arr)
    {
        bool ans=false;
        ans=find(s.begin(), s.end(), arr) != s.end();
        return ans;
    }
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        for (int i = 0; i < strs.size(); i++)
        {
            bool HasAnagram = false;
            vector<string> part;
            for (int j = 0; j < strs.size(); j++)
            {
                if (isAnagram(strs[i], strs[j]))
                {
                    part.push_back(strs[j]);
                    HasAnagram = true;
                }
            }
            if (!part.empty() && !isInArr(ans, part))
            {
                ans.push_back(part);
            }
            if (!HasAnagram)
            {
                ans.push_back({strs[i]});
            }
        }
        return ans;
    }
};
int main()
{
    Solution s = Solution();
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> lol = s.groupAnagrams(strs);
    for (int i = 0; i < lol.size(); i++)
    {
        for (int j = 0; j < lol.size(); j++)
        {
            cout << lol[i][j] << " ";
        }
    }
}