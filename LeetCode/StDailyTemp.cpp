#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution2
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        vector<int> sol;
        for (int i = 0; i < temperatures.size(); i++)
        {
            bool foundWarmer = false;
            int j = i;
            while (j < temperatures.size())
            {
                if (temperatures[i] < temperatures[j])
                {
                    foundWarmer = true;
                    sol.push_back(j - i);
                    break;
                }
                j++;
            }
            if (!foundWarmer)
            {
                sol.push_back(0);
            }
        }
        return sol;
    }
};
class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        vector<int> sol;
        stack<int>st;
        
    }
};
int main()
{
    Solution s = Solution();
    vector<int> ans = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> ans2 = s.dailyTemperatures(ans);
    for (int i = 0; i < ans2.size(); i++)
    {
        cout << ans2[i] << " ";
    }
}