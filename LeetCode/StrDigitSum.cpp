#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    string StrtoNum(string s)
    {
        unordered_map<char, string> mp; //!NEW
        mp['a'] = "1"; 
        mp['b'] = "2";
        mp['c'] = "3";
        mp['d'] = "4";
        mp['e'] = "5";
        mp['f'] = "6";
        mp['g'] = "7";
        mp['h'] = "8";
        mp['i'] = "9";
        mp['j'] = "10";
        mp['k'] = "11";
        mp['l'] = "12";
        mp['m'] = "13";
        mp['n'] = "14";
        mp['o'] = "15";
        mp['p'] = "16";
        mp['q'] = "17";
        mp['r'] = "18";
        mp['s'] = "19";
        mp['t'] = "20";
        mp['u'] = "21";
        mp['v'] = "22";
        mp['w'] = "23";
        mp['x'] = "24";
        mp['y'] = "25";
        mp['z'] = "26";
        
        string ans = "";
        for (char c : s)
        {
            ans += mp[c];
        }
        return ans;
    }

    int getLucky(string s, int k)
    {
        string numStr = StrtoNum(s);

        int sum = 0;
        for (char c : numStr)
        {
            sum += c - '0';  // Convert each character digit to an integer and sum it up //! NEW
        }

        for (int i = 1; i < k; i++)
        {
            int newSum = 0;
            while (sum > 0)
            {
                newSum += sum % 10;
                sum /= 10;
            }
            sum = newSum;
        }

        return sum;
    }
};

int main()
{
    Solution sol;
    cout << sol.getLucky("iiii", 1) << endl;  // Example usage
}
