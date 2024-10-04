//?Even/Odd
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 3 || n == 2)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        vector<int> ans;
        for (int i = 1; i < n + 1; i++)
        {
            if (i % 2 == 0)
            {
                ans.push_back(i);
            }
        }
        for (int i = 1; i < n + 1; i++)
        {
            if (i % 2 != 0)
            {
                ans.push_back(i);
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
}