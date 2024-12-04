#include <vector>
#include <algorithm> // For std::max
using namespace std;

class Solution {
public:
    // Recursive function to calculate the maximum amount of money
    int robRec(vector<int>& nums, int n) {
        // Base cases
        if (n < 0) return 0; // If no houses are left, return 0
        if (n == 0) return nums[0]; // If only one house is left, return its value

        // Option 1: Include the current house and skip the previous one
        int include = robRec(nums, n - 2) + nums[n];

        // Option 2: Exclude the current house and consider the previous one
        int exclude = robRec(nums, n - 1);

        // Return the maximum of the two options
        return max(include, exclude);
    }

    // Main function to calculate the maximum amount of money that can be robbed
    int rob(vector<int>& nums) {
        int n = nums.size() - 1; // Last index of the nums array
        return robRec(nums, n); // Start recursion from the last house
    }
};
