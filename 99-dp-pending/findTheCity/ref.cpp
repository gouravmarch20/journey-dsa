// class Solution {
// public:
//     int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
//         vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
//         for(auto it:edges)
//         {
//             dp[it[0]][it[1]]=it[2];
//             dp[it[1]][it[0]]=it[2];
//         }
//         for(int i=0;i<n;i++)
//         {
//             dp[i][i]=0;
//         }
//         for(int k=0;k<n;k++)
//         {
//             for(int i=0;i<n;i++)
//             {
//                 for(int j=0;j<n;j++)
//                 {
//                     if(dp[i][k]==INT_MAX || dp[k][j]==INT_MAX)
//                     continue;
//                     dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
//                 }
//             }
//         }
//         int index=-1,maxv=0;
//         for(int i=0;i<n;i++)
//         {
//             int count=0;
//             for(int j=0;j<n;j++)
//             {
//                 if(dp[i][j]>distanceThreshold)
//                 count++;
//             }
//             if(count>=maxv)
//             {
//                 maxv=count;
//                 index=i;
//             }
//         }
//         return index;
//     }
// };