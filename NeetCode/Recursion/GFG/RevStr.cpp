#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    string reverseString(string s)
    {
        if (s.length() <= 1)
            return s;

        return reverseString(s.substr(1)) + s[0];
    }
};
int main()
{
    Solution s1 = Solution();
    cout << s1.reverseString("Geeks") << endl;
}