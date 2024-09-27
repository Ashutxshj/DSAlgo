class Solution
{
public:
    int maxElem(vector<int> lol)
    {
        int maxi = INT_MIN;
        for (int i = 0; i < lol.size(); i++)
        {
            maxi = max(maxi, lol[i]);
        }
        return maxi;
    }
    vector<int> slicing(const vector<int> &pog, int x, int y)
    {
        return vector<int>(pog.begin() + x, pog.begin() + y + 1);
    }
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> arr;
        int l = 0;
        int r = k - 1;
        while (r < nums.size())
        {
            arr.push_back(maxElem(vector<int>(nums.begin() + l, nums.begin() + r + 1)));
            l++;
            r++;
        }
        return arr;
    }
};
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> output(nums.size()-k+1);
        deque<int> q;
        int l=0,r=0;
        while(r<nums.size()){
            while(!q.empty() && nums[q.back()] <nums[r]){
                q.pop_back();
            }
            q.push_back(r);
            if(l>q.front()){
                q.pop_front();
            }
            if(r+1>=k){
                output[l]=nums[q.front()];
                l++;
            }
            r++;
        }
        return output;
    }
};