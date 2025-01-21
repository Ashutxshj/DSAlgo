#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    void pushZerosToEnd(vector<int> &arr)
    {
        int zeroCount = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 0)
            {
                zeroCount++;
            }
        }
        remove(arr.begin(), arr.end(), 0);
        for (int i = 0; i < zeroCount + 1; i++)
        {
            arr.push_back(0);
        }
    }

    class Solution
    {
    public:
        void pushZerosToEnd(vector<int> &arr)
        {
            // code here
            int i = 0, j = 0;
            while (j < arr.size())
            {
                if (arr[j] != 0)
                {
                    arr[i] = arr[j];
                    i++;
                }
                j++;
            }
            while (i < arr.size())
                arr[i++] = 0;
        }
    };
};
int main()
{
    Solution s = Solution();
    vector<int> lol = {3, 5, 0, 0, 4};
    s.pushZerosToEnd(lol);
    for (int i = 0; i < lol.size(); i++)
    {
        cout << lol[i] << " ";
    }
}