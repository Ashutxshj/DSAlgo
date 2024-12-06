class Solution
{
public:
    int maxCount(vector<int> &banned, int n, int maxSum)
    {
        int sum = 0, count = 0;
        set<int> st(banned.begin(), banned.end()); 
        for (int i = 1; i <= n; i++)
        {
            if (st.find(i) == st.end() && sum + i <= maxSum)
            {
                sum += i;
                count++;
            }
        }
        return count;
    }
};
