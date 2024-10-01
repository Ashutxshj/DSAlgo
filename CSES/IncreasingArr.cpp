#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    long long MinMoves(vector<long long> ans)
    {
        long long count = 0;
        for (int i = 1; i < ans.size(); i++)
        {
            if (ans[i] < ans[i - 1])
            {
                long long pog = ans[i] - ans[i - 1];
                count += abs(pog);
                ans[i] = ans[i- 1];
            }
        }
        return count;
    }
};
int main()
{
    long long n;
    cin >> n;
    vector<long long> ans(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> ans[i];
    }
    // for (long long i = 0; i < n; i++)
    // {
    //     cout << ans[i] << " ";
    // }
    Solution s = Solution();
    // vector<long long> lol = {3, 2, 5, 1, 7};
    // cout << s.MinMoves(lol);
    cout<<s.MinMoves(ans);
}