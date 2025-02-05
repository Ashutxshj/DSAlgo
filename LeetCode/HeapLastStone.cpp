#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        priority_queue<int> pq(stones.begin(), stones.end()); // Max heap

        while (pq.size() > 1)
        {
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();

            if (x != y)
            {
                pq.push(y - x);
            }
        }

        return pq.empty() ? 0 : pq.top();
    }
};

int main()
{
    vector<int> vi = {2, 7, 4, 1, 8, 1};
    Solution s;
    cout << s.lastStoneWeight(vi) << endl;
    return 0;
}
