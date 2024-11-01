#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate the maximum profit using recursion and memoization
int knapsack(int capacity, const vector<int>& weights, const vector<int>& profits, int n, vector<vector<int>>& memo) {
    // Base case: no items or capacity is 0
    if (n == 0 || capacity == 0) {
        return 0;
    }

    // Check if the result is already computed
    if (memo[n][capacity] != -1) {
        return memo[n][capacity];
    }

    // If the weight of the nth item is more than the capacity, skip it
    if (weights[n - 1] > capacity) {
        return memo[n][capacity] = knapsack(capacity, weights, profits, n - 1, memo);
    } else {
        // Return the maximum of including or excluding the nth item
        return memo[n][capacity] = max(
            profits[n - 1] + knapsack(capacity - weights[n - 1], weights, profits, n - 1, memo),
            knapsack(capacity, weights, profits, n - 1, memo)
        );
    }
}

int main() {
    // Number of items
    int N = 5;
    
    // Maximum capacity of the knapsack
    int M = 16;

    // Profits and weights of the items
    vector<int> profits = {8, 14, 7, 8, 5};
    vector<int> weights = {6, 5, 4, 3, 3};

    // Create a memoization table initialized with -1
    vector<vector<int>> memo(N + 1, vector<int>(M + 1, -1));

    // Calculate maximum profit
    int maxProfit = knapsack(M, weights, profits, N, memo);

    // Output the result
    cout << "Maximum profit: " << maxProfit << endl;

    return 0;
}
