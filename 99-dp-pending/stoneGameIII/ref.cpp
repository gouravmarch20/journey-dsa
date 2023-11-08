// class Solution {
// public:
//     int solve(int index,vector<int>&arr,int chance,vector<vector<int>>&dp)
//     {
//         if(index>=arr.size())
//         return 0;
//         int taken=chance==0?INT_MIN:INT_MAX;
//         int sum=0;
//         if(dp[index][chance]!=-1)
//         return dp[index][chance];
//         for(int i=0;i<3;i++)
//         {
//             int pid=index+i;
//             if(pid>=arr.size())
//             break;
//             sum+=arr[pid];
//            if(chance==0)
//            {
//                 int alice=solve(pid+1,arr,chance^1,dp);
//                 int to=sum+alice;
//                  taken=max(taken,to);
//            }
//            else
//            {
//                int alice=solve(pid+1,arr,chance^1,dp);
//                taken=min(taken,alice);
//            }

//         }
//         return dp[index][chance]=taken;
//     }
//     string stoneGameIII(vector<int>& stoneValue) {
//         int sum=0;
//         int n=stoneValue.size();
//         vector<vector<int>>dp(n,vector<int>(2,-1));
//         for(auto it:stoneValue){
//             sum+=it;
//         }
//          if(sum-2*solve(0,stoneValue,0,dp)>0)
//          return "Bob";
//          else if(sum-2*solve(0,stoneValue,0,dp)==0)
//          return "Tie";
//          else
//          return "Alice";
//     }
// };