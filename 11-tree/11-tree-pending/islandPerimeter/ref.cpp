// class Solution {
// public:
//     int solve(vector<int>&vec,vector<vector<int>>&dp,int i,int j,int x)
//     {
//         if(i>=vec.size()|| j<0|| i>j)
//         return 0;
//         if(dp[i][j]!=-1)
//         return dp[i][j];
//         int a=vec[i+1]-vec[i]+solve(vec,dp,i+2,j,x);
//         int b=vec[j]-vec[j-1]+solve(vec,dp,i,j-2,x);
//         int c=x+solve(vec,dp,i+1,j-1,x);
//         return dp[i][j]=min(a,min(b,c));
//     }
//     int minOperations(string s1, string s2, int x) {
//         vector<int>vec;
//         for(int i=0;i<s1.size();i++)
//         {
//             if(s1[i]!=s2[i])
//             vec.push_back(i);
//         }
//         if(vec.size()%2)
//         return -1;
//         int n=vec.size();
//         vector<vector<int>>dp(n,vector<int>(n,-1));
//         int ans=solve(vec,dp,0,vec.size()-1,x);
//         return ans;
        
//     }
// };