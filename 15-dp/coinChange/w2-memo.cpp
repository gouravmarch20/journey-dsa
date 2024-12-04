#include <vector>
#include <climits>   // For INT_MAX
#include <algorithm> // For std::min
using namespace std;

class Solution
{
public:
    // Recursive function to calculate the minimum coins required
    int solveUsingMemo(vector<int> &coins, int amount, vector<int> dp)
    {
        // Base cases
        if (amount < 0)
            return INT_MAX; // If amount is negative, not possible
        if (amount == 0)
            return 0; // If amount is 0, no coins are needed
        if (dp[amount] != -1)
        {
            return dp[amount]; // Return the value from memoization array if exists
        }

        int mini = INT_MAX;

        // Try each coin to find the minimum combination
        for (int i = 0; i < coins.size(); i++)
        {
            int res = solveUsingMemo(coins, amount - coins[i], dp);

            // Avoid overflow when res is INT_MAX
            if (res != INT_MAX)
            {
                mini = min(mini, res + 1); // Current result + 1 coin
            }
        }
        dp[amount] = mini; // Store the result in memoization array for future use

        return mini;
    }

    // Main function to calculate the minimum number of coins
    int coinChange(vector<int> &coins, int amount)
    {
        // !m1 ::
        // vector<int> dp(coins.size(), -1);
        vector<int> dp(amount, -1);
        int ans = solveUsingMemo(coins, amount, dp);

        // If no solution is found, return -1
        return (ans == INT_MAX) ? -1 : ans;
    }
};
