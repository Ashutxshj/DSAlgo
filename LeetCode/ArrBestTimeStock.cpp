#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price=INT_MAX;
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            min_price=min(min_price,prices[i]);
            int profit=prices[i]-min_price;
            maxProfit=max(maxProfit,profit);
        }
        return maxProfit;
    }
};

class Solution2
{
public:
    int maxProfit(vector<int> &prices)
    {
        int MaxProfit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            for (int j = i + 1; j < prices.size(); j++)
            {
                int profit = prices[j] - prices[i];
                MaxProfit = max(MaxProfit, profit);
            }
        }
        return MaxProfit;
    }
};
int main()
{
    Solution s = Solution();
    vector<int> ans = {2,1,4};
    cout << s.maxProfit(ans);
}