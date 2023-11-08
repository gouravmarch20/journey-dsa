// class Solution {
// public:
// vector<int>dp;
//     int solve(int index,vector<int>&pre){
//         if(index==pre.size()-1)
//         return pre[index];
//         if(dp[index]!=INT_MIN)
//         return dp[index];
        
//     int op1=pre[index]-solve(index+1,pre);
//     int op2=solve(index+1,pre);
//     return dp[index]=max(op1,op2);
//     }
//     int stoneGameVIII(vector<int>& stones) {
//       int n=stones.size();
//       vector<int>pre(n,0);
//       dp.resize(n+1,INT_MIN);
//       pre[0]=stones[0];
//       for(int i=1;i<n;i++){
//           pre[i]=pre[i-1]+stones[i];
//       }
//       return solve(1,pre);
        
//     }
// };