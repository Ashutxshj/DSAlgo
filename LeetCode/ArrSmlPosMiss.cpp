class Solution
{
public:
    int missingNumber(vector<int> &arr)
    {
        set<int> v;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > 0)
                v.insert(arr[i]);
        }
        int ans = 1;
        for (int i : v)
        {
            if (i == ans)
                ans++;
            else
                break;
        }
        return ans;
    }
};