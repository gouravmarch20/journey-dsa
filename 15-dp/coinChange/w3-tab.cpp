#include <vector>
#include <climits> // For INT_MAX
#include <algorithm> // For std::min
using namespace std;

class Solution {
public:
    // Tabulation approach to solve the problem
    int solveTab(vector<int>& coins, int amount) {
        // Step 1: Create dp array
        vector<int> dp(amount + 1, INT_MAX);

        // Step 2: Base case
        dp[0] = 0; // 0 coins are needed to make amount 0

        // Step 3: Iterate through all amounts from 1 to `amount`
        for (int target = 1; target <= amount; target++) {
            for (int i = 0; i < coins.size(); i++) {
                // Check if using the current coin is valid
                if (target - coins[i] >= 0 && dp[target - coins[i]] != INT_MAX) {
                    dp[target] = min(dp[target], 1 + dp[target - coins[i]]);
                }
            }
        }

        // Step 4: Return the result
        return (dp[amount] == INT_MAX) ? -1 : dp[amount];
    }

    // Main function
    int coinChange(vector<int>& coins, int amount) {
        return solveTab(coins, amount);
    }
};
