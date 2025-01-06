#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> minOperations(string boxes)
    {
        vector<int> ans;
        for (int i = 0; i < boxes.length(); i++)
        {
            int ops = 0;
            for (int j = 0; j < boxes.length(); j++)
            {
                if (boxes[j] == '1' && i != j)
                {
                    ops += abs(i - j);
                }
            }
            ans.push_back(ops);
        }
        return ans;
    }
};
int main()
{
    string lol = "110";
    Solution s = Solution();
    vector a = s.minOperations(lol);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
    }
}