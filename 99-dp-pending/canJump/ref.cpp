// class Solution {
// public:
//     int solve(int index,vector<int>&nums,vector<int>&dp){
//        if(index==nums.size()-1)
//        return 1;
//        if(nums[index]==0) return 0;
//        if(dp[index]!=-1)return dp[index];
//        int reach=index+nums[index];
//        for(int j=index+1;j<=reach;j++){
//            if(j<nums.size() && solve(j,nums,dp))
//            return dp[j]=true;
//        }
//        return dp[index]=false;
//     }
//     bool canJump(vector<int>& nums) {
//         vector<int>dp(nums.size(),-1);
//         return solve(0,nums,dp);
//     }
// };