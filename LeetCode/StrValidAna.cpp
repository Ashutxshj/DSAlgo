
''' An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
'''

#include <iostream>
#include <algorithm>
#include <unordered_map>
                                                                                                    using namespace std;
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        unordered_map<char, int> mpp;
        for (int i = 0; i < s.size(); i++)
        {
            mpp[s[i]]++;
            mpp[t[i]]--;
        }
        for (auto it : mpp)
        {
            if (it.second != 0)
                return false;
        }
        return true;
    }
};
int main()
{
    Solution sol = Solution();
    cout << sol.isAnagram("anagram", "nagaram");
}