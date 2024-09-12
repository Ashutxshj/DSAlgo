#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string dectoBin(int n)
    {
        if (n == 0)
        {
            return "0";
        }
        string res = "";
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                res += "1";
            }
            else
            {
                res += "0";
            }
            n = n / 2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
    int minBitFlips(int start, int goal)
    {
        int xor_val = start ^ goal; // XOR to find differing bits
        int count = 0;

        while (xor_val > 0)
        {
            count += xor_val & 1;  // Check if the last bit is 1
            xor_val >>= 1;         
        }

        return count;
    }
};
int main()
{
    Solution s = Solution();
    cout << s.minBitFlips(10, 7);
    // cout<<s.dectoBin(7);
}