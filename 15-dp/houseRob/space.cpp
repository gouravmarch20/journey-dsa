#include <vector>
#include <algorithm> // For std::max
using namespace std;

class Solution {
public:
    // Space-optimized DP approach
    int tabRob(vector<int>& nums) {
        int n = nums.size();

        // Handle edge cases
        if (n == 0) return 0; // No houses to rob
        if (n == 1) return nums[0]; // Only one house

        // Initialize variables to store results for previous two houses
        int prev2 = 0;       // Represents dp[i-2]
        int prev1 = nums[0]; // Represents dp[i-1]

        // Iterate through houses starting from the second house
        for (int i = 1; i < n; i++) {
            int include = prev2 + nums[i]; // Include the current house
            int exclude = prev1;          // Exclude the current house

            // Calculate the current maximum
            int curr = max(include, exclude);

            // Update prev2 and prev1 for the next iteration
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1; // Final result is stored in prev1
    }

    // Main function
    int rob(vector<int>& nums) {
        return tabRob(nums);
    }
};
