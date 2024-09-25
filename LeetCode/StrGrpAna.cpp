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
        bool ans = false;
        ans = find(s.begin(), s.end(), arr) != s.end();
        return ans;
    }
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        for (int i = 0; i < strs.size(); i++)
        {
            bool HasAnagram = false;
            vector<string> part;
            int j = 0;
            while (j < strs.size())
            {
                if (isAnagram(strs[i], strs[j]))
                {
                    part.push_back(strs[j]);
                    HasAnagram = true;
                }
                j++;
            }
            // for (int j = 0; j < strs.size(); j++)
            // {
            //     if (isAnagram(strs[i], strs[j]))
            //     {
            //         part.push_back(strs[j]);
            //         HasAnagram = true;
            //     }
            // }
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
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> ans;

        for (auto &s : strs)
        {
            vector<int> count(26, 0);
            for (char c : s)
            {
                count[c - 'a']++;
            }
            //         ___
            //         | |
            //         | |
            //         | |
            //         \_/

            //* For "eat":
            //* Initialize a vector count of size 26 (for each letter of the alphabet) with zeros.

            //* For each character in the word "eat":

            //* 'e' increments count[4] (since 'e' is the 5th letter of the alphabet).
            //* 'a' increments count[0].
            //* 't' increments count[19].
            //* The count array becomes:
            //* [1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0]

            string key;
            for (int i : count)
            {
                key += "#" + to_string(i); //? To make hashable key,only for cpp
            }

            ans[key].push_back(s);
        }

        vector<vector<string>> result;
        for (auto &pair : ans)
        {
            result.push_back(pair.second);
        }

        return result;
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