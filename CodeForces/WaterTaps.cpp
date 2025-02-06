//! temp=Sum(x,t)/Sum(x)
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int tp(vector<int> water, vector<int> temp)
{
    int sum_water = 0, sum_water_temp = 0;
    for (int i = 0; i < water.size(); i++)
    {
        sum_water += water[i];
        sum_water_temp += water[i] * temp[i];
    }
    if (sum_water == 0)
        return 0;
    int ans = sum_water_temp / sum_water;
    return ans;
}
int solve(int n, int t, vector<int> water, vector<int> temp)
{
    int l = 0, r = 1e6, ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int mid = l + (r - l) / 2;
        if (tp(water, temp) == t)
        {
            ans = max(ans, water[mid]);
            l = mid + 1;
        }
        else if (tp(water, temp) > t)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return ans;
}
int main()
{
    int n, t;
    scanf("%d", &n);
    scanf("%d", &t);
    vector<int> water(n), temp(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &water[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp[i]);
    }
    cout << fixed << setprecision(15) << solve(n, t, water, temp) << endl;
}