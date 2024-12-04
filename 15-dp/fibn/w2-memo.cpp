#include <vector>
using namespace std;

class Solution {
public:
    // Top-down approach (recursive with memoization)
    int topDown(int n, vector<int>& dp) {
        // Base cases
        if (n == 0 || n == 1) return n;

        // Step 3: Check if the result for n is already computed
        if (dp[n] != -1) {
            return dp[n]; // Return the cached result
        }

        // Step 2: Compute and store the result in dp[n]
        dp[n] = topDown(n - 1, dp) + topDown(n - 2, dp);

        return dp[n]; // Return the computed value
    }

     int fib(int n) {
        // Step 1: Create a dp array initialized with -1
        vector<int> dp(n + 1, -1);
        return topDown(n, dp);  
    }
};
