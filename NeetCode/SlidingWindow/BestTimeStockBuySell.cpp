class Solution
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
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int MP = 0;
        int mini = prices[0];
        for (int i = 0; i < prices.size(); i++)
        {
            int cost = prices[i] - mini;
            MP = max(MP, cost);
            mini = min(mini, prices[i]);
        }
        return MP;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=1;
        int ans=0;
        while(j<prices.size()){
            int profit=prices[j]-prices[i];
            if(profit<0)
                i=j;
            else
                j++;
            ans=max(profit,ans);
        }
        return ans;
    }
};