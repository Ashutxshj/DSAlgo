#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        bool ans = false;
        for (int i = 0; i < s2.size(); i++)
        {
            int j = s1.size();
            string s3 = s2.substr(i, j);
            sort(s3.begin(), s3.end());
            sort(s1.begin(), s1.end());
            if (s1 == s3)
            {
                ans = true;
            }
        }
        return ans;
    }
};
int main()
{
    string a1 = "ab";
    string a2 = "eidbaooo";
    Solution s = Solution();
    cout << s.checkInclusion(a1, a2);
}