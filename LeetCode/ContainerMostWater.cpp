#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int AreaMax = 0;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            int area=min(height[i],height[j])*(j-i);
            AreaMax=max(AreaMax,area);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return AreaMax;
        //?  Conditions for maxArea:-
        //?  1.height[i]>height[j]
        //?  2.Area=height[j]*(j-i)
    }
};
int main()
{
    Solution s = Solution();
    vector<int> ans = {8,7,2,1};
    cout << s.maxArea(ans);
}