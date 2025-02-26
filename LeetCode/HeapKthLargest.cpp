class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        // priority_queue<int,vector<int>,greater<int>>pq;
        priority_queue<int> pq;
        for (int i = 0; i < nums.size(); i++)
        {
            pq.push(nums[i]);
        }
        int f = k - 1;
        while (f > 0)
        {
            pq.pop();
            f--;
        }
        return pq.top();
    }
};

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        //priority_queue<int>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
            if(pq.size()>k)
                pq.pop();
        }
        // int f=k-1;
        // while(f>0){
        //     pq.pop();
        //     f--;
        // }
        return pq.top();
    }
};