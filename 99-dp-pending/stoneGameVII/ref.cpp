// class Solution {
// public:
//     int solve(int start,int end,vector<int>&stones,int sum,vector<vector<int>>&dp)
//     {
//         if(start>=end)
//         return 0;
//         if(sum<=0)
//         return 0;
//         if(dp[start][end]!=-1)
//         return dp[start][end];
//         int a=(sum-stones[start])-solve(start+1,end,stones,sum-stones[start],dp);
//         int b=(sum-stones[end])-solve(start,end-1,stones,sum-stones[end],dp);
//         return dp[start][end]=max(a,b);
//     }
//     int stoneGameVII(vector<int>& stones) {
//         int n=stones.size();
//         int sum=0;
//         for(auto it:stones){
//             sum+=it;
//         }
//         vector<vector<int>>dp(n,vector<int>(n,-1));
//         int value=solve(0,n-1,stones,sum,dp);
//         return value;
//     }
// };