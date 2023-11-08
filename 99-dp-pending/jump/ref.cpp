// class Solution {
// public:
//     int solve(int index,vector<int>&nums,vector<int>&dp)
//     {
//         if(index==nums.size()-1)
//         return 0;
//         if(index>=nums.size())
//         return 1e9;
//         if(dp[index]!=-1)
//         return dp[index];
//         int taken=1e9;
//         int reach=index+nums[index];
//         for(int i=index+1;i<=reach;i++){
//             if(i<nums.size())
//             taken=min(taken,solve(i,nums,dp)+1);
//         }
//         return dp[index]=taken;
//     }
//     int jump(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>dp(n+1,1e9);
//         // return solve(0,nums,dp)>=1e9?-1:solve(0,nums,dp);
//         dp[n-1]=0;
//         for(int i=n-1;i>=0;i--)
//         {
//             int reach=i+nums[i];
//             for(int j=i+1;j<=reach;j++)
//             {
//                 if(j<n)
//                 dp[i]=min(dp[i],dp[j]+1);
//             }
//         }
//         if(dp[0]>=1e9)
//         return -1;
//         else
//         return dp[0];
//     }
// };