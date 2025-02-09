#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperation(string &s)
    {
        int n = s.length();
        unordered_map<char, int> c;

        for (char ch : s)
            c[ch]++;

        int ans = 0;
        for (char a = 'a'; a <= 'z'; a++)
        {
            char lc = a;
            char uc = a - 32;

            int l_count = c.count(lc) ? c[lc] : 0;
            int u_count = c.count(uc) ? c[uc] : 0;

            ans+=abs(l_count-u_count);
        }
        return ans / 2;
    }
};

int main()
{
    Solution sol;

    string s = "GAXkeaIDOzBwWqfzkLddxtSyZqnGlOJQZX";
    string s1="abBA";
    cout << sol.minOperation(s1) << endl;
    cout << sol.minOperation(s) << endl; // Expected output: 9

    return 0;
}
