// class Solution {
// public:
//     int helper(vector<int> &nums, int i, int sum, vector<int> &dp) {
//         if (nums.size() <= i) {
//             return sum;
//         }
//         if (dp[i] != -1) return dp[i];
//         int maxi = INT_MIN;

//         int a = helper(nums, i + 2, sum + nums[i], dp);
//         int b = helper(nums, i + 1, sum, dp);
//         maxi = max(a, b);
//         dp[i] = maxi;
//         // You had a comment symbol here instead of a closing curly brace
//         return maxi;
//     }

//     int rob(vector<int>& nums) {
//         vector<int> dp(nums.size() + 1, -1);
//         return helper(nums, 0, 0, dp);
//     }
// };
