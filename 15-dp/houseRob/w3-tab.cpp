#include <vector>
#include <algorithm> // For std::max
using namespace std;

class Solution {
public:
    // Tabulation approach (iterative DP)
    int tabRob(vector<int>& nums) {
        int n = nums.size();

        // Handle edge cases
        if (n == 0) return 0; // No houses to rob
        if (n == 1) return nums[0]; // Only one house

        // Create a dp array to store maximum amounts
        vector<int> dp(n, 0);

        // Base cases
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        // Fill the dp array iteratively
        for (int i = 2; i < n; i++) {
            int include = dp[i - 2] + nums[i]; // Include current house
            int exclude = dp[i - 1];           // Exclude current house
            dp[i] = max(include, exclude);     // Store the maximum
        }

        return dp[n - 1]; // Maximum amount robbed is at the last house
    }

    // Main function
    int rob(vector<int>& nums) {
        return tabRob(nums);
    }
};
