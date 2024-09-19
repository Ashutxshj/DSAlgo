#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    int LongestRep(string s)
    {
        int ans = 1, count = 1;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == s[i - 1])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};
int main()
{
    Solution s = Solution();
    string str = "ATTCGGGA";
    //?         A     T      T      C     G     G     G    A
    //?       (L,R)
    //?         L     R
    //?             (L,R)
    //?               L       R
    //?               L              R
    //?                            (L,R)
    //?                              L    R
    //?                                 (L,R)
    //?                                   L     R
    //?                                   L             R
    //?
    cin>>str;
    cout << s.LongestRep(str);
}