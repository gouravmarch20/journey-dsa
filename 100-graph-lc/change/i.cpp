// class Solution {
//     int f(int ind,vector<int>& coins, int t,int n,vector<vector<int>>&dp){
//         if(ind>=n-1) {
//             if(t%coins[n-1]==0) return 1;
//             if(coins[n-1]==t) return 1;
//             else return 0;
//         }
//         if(t==0) return 1;

//         if(dp[ind][t]!=-1) return dp[ind][t];


//         int nottake=f(ind+1,coins,t,n,dp);
//         int take=0;
//         if(coins[ind]<=t){
//             take=f(ind,coins,t-coins[ind],n,dp);
//         }

//         return dp[ind][t]=take+nottake;
//     }

// public:
//     int change(int amount, vector<int>& coins) {
//         int n=coins.size();
//         vector<vector<int>>dp(n,vector<int>(amount+1,-1));
//         int ans =f(0,coins,amount,n,dp);
//         return ans;
//     }
// };