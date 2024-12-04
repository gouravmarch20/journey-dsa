#include <vector>
#include <algorithm> // For std::max
#include <iostream>  // For std::cout
using namespace std;

class Solution {
public:
    // Recursive function with memoization
    int robRec(vector<int>& nums, int n, vector<int>& dp) {
        // Base cases
        if (n < 0) return 0; // No houses left
        if (n == 0) return nums[0]; // Only one house

        // If the result is already computed, return it
        if (dp[n] != -1) return dp[n];

        // Include the current house and move to n-2
        int include = robRec(nums, n - 2, dp) + nums[n];

        // Exclude the current house and move to n-1
        int exclude = robRec(nums, n - 1, dp);

        // Store the result in dp[n] and return it
        dp[n] = max(include, exclude);
        return dp[n];
    }

    // Main function to calculate the maximum amount that can be robbed
    int rob(vector<int>& nums) {
        if (nums.empty()) return 0; // Handle empty input

        int n = nums.size() - 1; // Last index of the nums array
        vector<int> dp(nums.size(), -1); // DP array initialized with -1
        return robRec(nums, n, dp);
    }
};
