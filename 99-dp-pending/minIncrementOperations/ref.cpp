// class Solution {
// public:
//     long long int solve(int index,vector<int>&nums,int k,vector<long long int>&dp){
//         if(index>nums.size()-3)
//         return 0;
//         if(dp[index]!=-1)
//         return dp[index];
//         long long int op1=solve(index+1,nums,k,dp)+max(0,k-nums[index]);
//         long long int op2=solve(index+2,nums,k,dp)+max(0,k-nums[index+1]);
//         long long int op3=solve(index+3,nums,k,dp)+max(0,k-nums[index+2]);
//         return dp[index]=min(op1,min(op2,op3));
//     }
//     long long minIncrementOperations(vector<int>& nums, int k) {
        
//         vector<long long int>dp(nums.size(),-1);
//         return solve(0,nums,k,dp);

//     }
// };