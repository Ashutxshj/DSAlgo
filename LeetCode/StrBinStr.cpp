#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;
class Solution
{
public:
    // n=1
    // 0 1
    // n=2
    // 00 11 10 01
    // n=3
    // 000 001 010 011 100 101 110 111
    vector<string> generate(int n)
    {
        if (n == 0)
            return {""};
        vector<string> l1 = generate(n - 1);
        vector<string> res;
        for (string s : l1)
        {
            res.push_back(s + '0');
            res.push_back(s + '1');
        }
        return res;
    }
    string findDifferentBinaryString(vector<string> &nums)
    {
        int n = nums[0].size();
        vector<string> lol = generate(n);
        set<string> s1(nums.begin(), nums.end());
        for (const string &s : lol)
        {
            if (s1.find(s) == s1.end())
                return s;
        }
        return "";
    }
};
int main()
{
    Solution s = Solution();
    vector<string> pog = s.generate(2);
    for (int i = 0; i < pog.size(); i++)
    {
        cout << pog[i] << " ";
    }
    cout<<s.findDifferentBinaryString(pog)<<" ";
}