#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int maxPoints(const vector<vector<int>> &points) {
        int m = points.size();
        int n = points[0].size();
        
        // dp table to store maximum points at each cell
        vector<vector<int>> dp(m, vector<int>(n, 0));
        
        // Initialize the first row of dp table
        for (int j = 0; j < n; ++j) {
            dp[0][j] = points[0][j];
        }
        
        // Fill the dp table
        for (int i = 1; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int maxPrev = INT_MIN;
                for (int k = 0; k < n; ++k) {
                    maxPrev = max(maxPrev, dp[i-1][k] - abs(k - j));
                }
                dp[i][j] = points[i][j] + maxPrev;
            }
        }
        
        // Get the maximum value from the last row of dp table
        int result = INT_MIN;
        for (int j = 0; j < n; ++j) {
            result = max(result, dp[m-1][j]);
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    cout << sol.maxPoints({{0, 3, 0, 4, 2}, {5, 4, 2, 4, 1}, {5, 0, 0, 5, 1}, {2, 0, 1, 0, 3}}) << endl;
}
