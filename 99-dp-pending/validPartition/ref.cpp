// class Solution {
// public: 
//     bool rec(int i, vector<int>& nums, vector<int>& dp){
//       int n = nums.size();
//       if(i>=n) return true; 
//       if(dp[i]!=-1) return dp[i];
//       if(i+1<n){
//         if(nums[i+1]==nums[i]){
//           if(i+2<n){
//             if(nums[i+2]==nums[i]){
//               return dp[i] = rec(i+2,nums,dp) || rec(i+3,nums,dp);
//             }
//             return dp[i] = rec(i+2,nums,dp);
//           }
//           return dp[i] = true;
//         }
//         if(nums[i+1]==nums[i]+1){
//           if(i+2>=n) return dp[i] = false;
//           if(nums[i+2]==nums[i]+2) return dp[i] = rec(i+3,nums,dp);
//           return dp[i] = false;
//         }
//         return dp[i] = false;
//       }
//       return dp[i] =  false;
//     }
//     bool validPartition(vector<int>& nums) {
//       int n = nums.size();
//       vector<int> dp(n,-1);
//       return rec(0,nums,dp);
//     }
// };