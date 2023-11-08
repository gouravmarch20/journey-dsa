// class Solution {
// public:
//     int solve(int start,int end,vector<int>&stoneValue,vector<vector<int>>&dp)
//     {
//         // if(start==end)
//         // return stoneValue[start];
       
//         if(start>end)
//         return 0;
//         int total=0;
//         if(dp[start][end]!=-1)
//         return dp[start][end];
//         for(int i=start;i<=end;i++)
//         {
//             total+=stoneValue[i];
//         }
//         int sum=0,ans=0;
//         for(int i=start;i<end;i++)
//         {
//             sum+=stoneValue[i];
//             // total-=stoneValue[i];
//             if(total-2*sum>0)
//             ans=max(ans,sum+solve(start,i,stoneValue,dp));
//             else if(total-2*sum==0)
//             {
//                 int a=solve(start,i,stoneValue,dp);
//                 int b=solve(i+1,end,stoneValue,dp);
//                 ans=max(ans,sum+max(a,b));
//             }
//             else
//             ans=max(ans,(total-sum)+solve(i+1,end,stoneValue,dp));
//             // cout<<i<<" "<<ans<<"  "<<sum<<" "<<total<<endl;
//         }
//         return dp[start][end]=ans;
//     }
//     int stoneGameV(vector<int>& stoneValue) {
//         int n=stoneValue.size();
//         vector<vector<int>>dp(n,vector<int>(n,-1));
//         return solve(0,n-1,stoneValue,dp);
//     }
// };