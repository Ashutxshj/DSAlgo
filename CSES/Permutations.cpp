#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long x;
    cin >> x;
    vector<long long> ans;
    if (x == 2 || x == 3)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        // First, append even numbers
        for (long long i = 2; i <= x; i += 2)
        {
            ans.push_back(i);
        }
        // Then append odd numbers
        for (long long i = 1; i <= x; i += 2)
        {
            ans.push_back(i);
        }

        // Print the result
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
}
