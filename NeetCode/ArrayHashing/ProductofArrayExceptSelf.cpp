class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output;
        for(int i=0; i<n; i++){
            int product = 1;
            for(int j=0; j<n; j++){
                if(i == j) continue;
                product *= nums[j];
            }
            output.push_back(product);
        }
        return output;
    }
};
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> res;
        int totalProduct = 1;
        int zeroCount = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                totalProduct *= nums[i];
            }
            else
            {
                zeroCount++;
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (zeroCount > 1)
            {
                res.push_back(0);
            }
            else if (zeroCount == 1)
            {
                if (nums[i] == 0)
                {
                    res.push_back(totalProduct);
                }
                else
                {
                    res.push_back(0);
                }
            }
            else
            {
                res.push_back(totalProduct / nums[i]);
            }
        }
        return res;
    }
};


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),1);
        for(int i=1;i<nums.size();i++)
        {
            ans[i]=ans[i-1]*nums[i-1];
        }
        int postfix=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            ans[i]*=postfix;
            postfix*=nums[i];
        }
        return ans;
    }
};