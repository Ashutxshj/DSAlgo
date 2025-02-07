#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
typedef vector<int> v;

//! Recursive
//* Input-Output Method
class Solution
{
public:
    vector<v> ans;

    int subSum(vector<int> arr)
    {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
        }
        return sum;
    }

    void solve(v ip, v op, int k)
    {
        if (ip.empty())
        {
            if (subSum(op) == k && !op.empty())
            {
                ans.push_back(op);
            }
            return;
        }

        v op1 = op;
        op1.push_back(ip[0]);

        v ip1 = ip;
        ip1.erase(ip1.begin());

        solve(ip1, op1, k);
        solve(ip1, op, k);
    }

    bool isSubsetSum(vector<int> &arr, int target)
    {
        ans.clear();
        v op;
        solve(arr, op, target);
        return !ans.empty();
    }
};
//* IBH
class Solution
{
public:
    bool solve(vector<int> &arr, int k, int n)
    {
        if (n == 0 || k < 0)
            return false;
        if (k == 0)
            return true;
        bool inc = solve(arr, k - arr[n - 1], n - 1);
        bool exc = solve(arr, k, n - 1);
        return inc || exc;
    }
    bool isSubsetSum(vector<int> &arr, int target)
    {
        int n = arr.size();
        return solve(arr, target, n);
    }
};
//* Memoization
class Solution
{
public:
    vector<vector<int>> t;
    bool solve(vector<int> &arr, int k, int n)
    {
        if (n == 0 || k < 0)
            return false;
        if (k == 0)
            return true;

        if (t[n][k] != -1)
            return t[n][k];
        bool inc = (k >= arr[n - 1]) ? solve(arr, k - arr[n - 1], n - 1) : false;
        bool exc = solve(arr, k, n - 1);
        return t[n][k] = inc || exc;
    }
    bool isSubsetSum(vector<int> &arr, int target)
    {
        int n = arr.size();
        t.assign(n + 1, vector<int>(target + 1, -1));
        return solve(arr, target, n);
    }
};
int main()
{
    Solution sol;
    vector<int> arr = {3, 34, 4, 12, 5, 2};

    cout << sol.isSubsetSum(arr, 9) << endl;
    cout << sol.isSubsetSum(arr, 30) << endl;
    return 0;
}
