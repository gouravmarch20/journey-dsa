#include <vector>
#include <climits> // For INT_MAX
#include <algorithm> // For std::min
using namespace std;

class Solution {
public:
    // Recursive function to calculate the minimum coins required
    int coinChangeRec(vector<int>& coins, int amount) {
        // Base cases
        if (amount < 0) return INT_MAX; // If amount is negative, not possible
        if (amount == 0) return 0;      // If amount is 0, no coins are needed

        int mini = INT_MAX;

        // Try each coin to find the minimum combination
        for (int i = 0; i < coins.size(); i++) {
            int res = coinChangeRec(coins, amount - coins[i]);

            // Avoid overflow when res is INT_MAX
            if (res != INT_MAX) {
                mini = min(mini, res + 1); // Current result + 1 coin
            }
        }

        return mini;
    }

    // Main function to calculate the minimum number of coins
    int coinChange(vector<int>& coins, int amount) {
        int ans = coinChangeRec(coins, amount);

        // If no solution is found, return -1
        return (ans == INT_MAX) ? -1 : ans;
    }
};
