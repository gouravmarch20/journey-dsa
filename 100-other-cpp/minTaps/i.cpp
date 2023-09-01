// class Solution {
// public:
//     int solve(vector<vector<int>>&a,int i,int k,int n,vector<int>&dp){
//         if(k>=n)return 0;
//         if(i>=n+1)return 1e6;
//         if(dp[i]!=-1)return dp[i];
//         int ans = 1e6;
//         for(int j=i;j<n+1;++j){
//             if(k>=a[j][0]){
//                 ans = min(ans,1+solve(a,j+1,a[j][1],n,dp));
//             }
//             else break;
//         }
//         return dp[i] = ans;
//     }
//     int minTaps(int n, vector<int>& ranges) {
//         vector<vector<int>> a;
//         for(int i=0;i<n+1;++i){
//             a.push_back({i-ranges[i],i+ranges[i]});
//         }
//         sort(a.begin(),a.end(),[](vector<int>&p,vector<int>&q){
//             if(p[0]==q[0]){
//                 return (p[1]>q[1]);
//             }
//             return p[0]<q[0];
//         });
//         vector<int> dp(n+2,-1);
//         int ans = solve(a,0,0,n,dp);
//         return ans>=1e6 ? -1:ans; 
//     }
// };