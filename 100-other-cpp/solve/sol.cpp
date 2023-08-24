//*Sorting Three Groups

// class Solution {
// public:
//     int solve(int ind,int lastele,vector<int>&nums)
//     {
//         if(ind==nums.size())
//             return 0;
//         int moves=INT_MAX;
//         for(int i=lastele;i<=3;i++)
//         {
//             if(lastele<=i)
//             {
//                 if(nums[ind]==i)
//                 {
//                     moves=min(moves,solve(ind+1,i,nums));
//                 }
//                 else
//                     moves=min(moves,solve(ind+1,i,nums)+1);
//             }
//         }
//         return moves;
//     }
//     int minimumOperations(vector<int>& nums) {
        
        
//         return solve(0,1,nums);
        
//     }
// };