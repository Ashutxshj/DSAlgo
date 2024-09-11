#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string dectoBin(int n)
    {
        string res = "";

        if (n == 0)
        {
            return "0";
        }

        while (n > 0)
        {
            res += (n % 2 == 1) ? '1' : '0';
            n = n / 2;
        }

        std::reverse(res.begin(), res.end());

        return res;
    }
    bool isPowerOfTwo(int n)
    {
        // 1 2 4 8 16
        // 0000 0010 0100 1000 10000
        bool ans = true;
        if(n<0){
            ans=false;
        }
        string res = dectoBin(n);
        int count_of_one = 0;
        if(res=="0"){
            ans=false;
        }
        for (int i = 0; i < res.length(); i++)
        {
            if (res[i] == '1')
            {
                count_of_one++;
            }
        }
        if (count_of_one > 1)
        {
            ans = false;
        }
        return ans;
    }
};
int main()
{
    Solution sol = Solution();
    cout << sol.isPowerOfTwo(3);
    // cout<<sol.dectoBin(7);
}