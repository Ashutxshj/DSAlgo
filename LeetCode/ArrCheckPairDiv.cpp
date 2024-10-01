#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> remainderCount;
        
        // Count the frequency of each remainder when dividing by k
        for (int num : arr) {
            int rem = ((num % k) + k) % k; // Handling negative numbers
            remainderCount[rem]++;
        }
        
        // Now check if pairs can be formed
        for (int num : arr) {
            int rem = ((num % k) + k) % k; // Handle negative numbers
            
            // Special case for remainder 0: it should pair with another 0
            if (rem == 0) {
                if (remainderCount[rem] % 2 != 0)
                    return false;
            } 
            // Otherwise, the remainder rem should pair with remainder k - rem
            else if (remainderCount[rem] != remainderCount[k - rem]) {
                return false;
            }
        }
        
        return true;
    }
};

int main() {
    Solution s = Solution();
    vector<int> lol = {1, 2, 3, 4, 5, 10, 6, 7, 8, 9};
    cout << s.canArrange(lol, 10) << endl; // Should output 1 (true)
}
