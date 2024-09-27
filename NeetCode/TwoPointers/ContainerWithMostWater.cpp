class Solution{
public:
int maxArea(vector<int> &height)
    {
        int AreaMax = INT_MIN;
        for (int i = 0; i < height.size(); i++)
        {
            for (int j = i + 1; j < height.size(); j++)
            {
                int area = 1;
                if (height[i] > height[j])
                {
                    area = height[j] * (j-i);
                }
                else
                {
                    area = height[i] * (j-i);
                }
                AreaMax = max(AreaMax, area);
            }
        }
        return AreaMax;
    }
};
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
    }
};