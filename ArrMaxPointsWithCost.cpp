#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class Solution
{
public:
    long long maxNo(const vector<int> &arr)
    {
        if (arr.empty())
            return -1;
        int i = 0;
        while (i < arr.size() - 1)
        {
            if (arr[i] <= arr[i + 1])
                i++;
            else
                break;
        }
        return arr[i];
    }
    int maxPoints(const vector<vector<int>> &points)
    {
        int score_add = 0, score_sub = 0;
        vector<int> ans;
        for (int i = 0; i < points.size(); i++)
        {
            bool maxPicked=false;
            for (int j = 0; j < points[i].size(); j++)
            {
                if (!maxPicked && points[i][j] == maxNo(points[i]))
                {
                    score_add += points[i][j];
                    ans.push_back(j);
                    maxPicked=true;
                }
            }
        }
        for (int k = 0; k < ans.size() - 1; k++)
        {
            score_sub += abs(ans[k] - ans[k + 1]);
        }
        return score_add-score_sub;
    } // [[0,3,0,4,2], ==> 4 (0,3)         ===>[3,0,0,4]  [3,0,3,4]
    //    [5,4,2,4,1], ==> 5 (1,0)             3-0+0-0+0-4=>1
    //    [5,0,0,5,1], ==> 5 (2,0),(2,3)       3-0+0-3+3-4=>1
    //    [2,0,1,0,3]] ==> 3 (3,4)
};
int main()
{
    Solution sol;
    cout << sol.maxPoints({{0,3,0,4,2},{5,4,2,4,1},{5,0,0,5,1},{2,0,1,0,3}}) << endl;
}
