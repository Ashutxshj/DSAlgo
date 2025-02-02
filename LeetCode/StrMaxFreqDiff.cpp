#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int maxDifference(string s)
    {
        unordered_map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        int ans = INT_MIN;
        // {a:5,b:2,c:1}
        //{1,2,5}
        vector<int> lol;
        for (auto m : mp)
        {
            lol.push_back(m.second);
        }
        for (int i = 0; i < lol.size(); i++)
        {
            for (int j = i + 1; j < lol.size(); j++)
            {
                if (lol[i] % 2 != 0 && lol[j] % 2 == 0)
                    ans = max(ans, (lol[i] - lol[j]));
                if (lol[i] % 2 == 0 && lol[j] % 2 != 0)
                    ans = max(ans, (lol[j] - lol[i]));
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    string l = "aaaaabbc";
    string t = "tzt";
    string y = " yzyyys";
    cout << s.maxDifference(y) << endl; // Should output -1
}
