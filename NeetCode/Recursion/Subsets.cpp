#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    typedef std::vector<int> v;
    vector<v> res;
    vector<v> subsets(v nums)
    {
        v op;
        solve(nums, op);
        return res;
    }
    void solve(v ip, v op)
    {
        if (ip.empty())
        {
            res.push_back(op);
            return;
        }
        v op1 = op;
        v op2 = op;

        op1.push_back(ip[0]);
        ip.erase(ip.begin() + 0);

        solve(ip, op1);
        solve(ip, op2);

        return;
    }
};