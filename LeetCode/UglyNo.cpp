#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool isUgly(int num)
    {
        if (num > 0)
            for (int i = 2; i < 6; i++)
                while (num % i == 0)
                    num /= i;
        return num == 1;
    }
};
int main()
{
    Solution sol;
    cout << sol.isUgly(6);
}