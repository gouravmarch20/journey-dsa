// class Solution {
//  public:
//   int solveTab(vector<int>& coins, int amount) {
//     // step1: create dp array
//     vector<int> dp(amount + 1, INT_MAX);
//     // step2: base case dekho
//     dp[0] = 0;
//     // step3: check the range and flow of top down approach and code
//     // accordingly
//      for (int target = 1; target <= amount; target++) {
//       int mini = INT_MAX;
//       for (int i = 0; i < coins.size(); i++) {
// //^ valid array check ->target - coins[0] tell which dp index sai value take
//         if (target - coins[i] >= 0) {
//           int ans = dp[target - coins[i]];//* taking min coin to make it prev
//           if (ans != INT_MAX) {
//             mini = min(mini, 1 + ans);
//           }
//         }
//       }
//       dp[target] = mini;
//     }
//     return dp[amount];
//   }

//   int coinChange(vector<int>& coins, int amount) {
//     int ans = solveTab(coins, amount);
//     if (ans == INT_MAX)
//       return -1;
//     else
//       return ans;
//   }
// };