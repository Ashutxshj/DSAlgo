#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int maxPoints(const vector<vector<int>> &points) {
        int m = points.size();
        if (m == 0) return 0;
        int n = points[0].size();
        if (n == 0) return 0;

        vector<vector<int>> dp(m, vector<int>(n, 0));

        for (int j = 0; j < n; ++j) {
            dp[0][j] = points[0][j];
        }

        for (int i = 1; i < m; ++i) {
            vector<int> max_prev_row(n, INT_MIN);
            
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < n; ++k) {
                    max_prev_row[j] = max(max_prev_row[j], dp[i-1][k] - abs(k - j));
                }
            }
            
            for (int j = 0; j < n; ++j) {
                dp[i][j] = points[i][j] + max_prev_row[j];
            }
        }

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
