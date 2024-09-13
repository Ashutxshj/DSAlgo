#include <iostream>
#include <vector>
using namespace std;

// Top-Down Fibonacci with Memoization
int fibonacciTopDown(int n, vector<int>& memo) {
    if (n <= 1) return n;

    // If the value has already been computed, return it
    if (memo[n] != -1) {
        return memo[n];
    }

    // Compute and store the result in the memo array
    memo[n] = fibonacciTopDown(n - 1, memo) + fibonacciTopDown(n - 2, memo);
    return memo[n];
}

// Bottom-Up Fibonacci
int fibonacciBottomUp(int n) {
    if (n <= 1) return n;

    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

// Space-Optimized Fibonacci
int fibonacciSpaceOptimized(int n) {
    if (n <= 1) return n;

    int prev1 = 0, prev2 = 1;
    for (int i = 2; i <= n; i++) {
        int curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }

    return prev2;
}

int main() {
    int n = 10;

    // Bottom-Up Solution
    cout << "Bottom-Up Fibonacci: " << fibonacciBottomUp(n) << endl;

    // Top-Down Solution
    vector<int> memo(n + 1, -1); // Initialize memo array with -1
    cout << "Top-Down Fibonacci: " << fibonacciTopDown(n, memo) << endl;

    // Space-Optimized Solution
    cout << "Space-Optimized Fibonacci: " << fibonacciSpaceOptimized(n) << endl;

    return 0;
}
