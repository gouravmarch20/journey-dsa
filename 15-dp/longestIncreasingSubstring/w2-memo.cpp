// class Solution {

// public:
//     int memSol(vector<int> & nums , int curr , int prev ,  vector <vector<int>> & dp ){
//         if(curr >= nums.size() ) return 0;
//         if(dp[curr][prev + 1 ] != -1) return dp[curr][prev + 1 ];
//         // 

//         int include = 0;
//         if(prev == -1 ||  nums[curr] > nums[prev]){
//             include = 1 +  memSol(nums , curr + 1 , curr , dp) ;
//         } 
//         int exclude = memSol(nums , curr + 1 , prev , dp);
//         int ans = max(include , exclude);
//         // 
//          dp[curr][prev + 1 ] = ans;

//           return ans;
//     }
//     int lengthOfLIS(vector<int>& nums) {
//         vector <vector<int>> dp(nums.size() + 1 , vector<int>(nums.size() + 1 , -1));
//         return memSol(nums , 0 , -1 , dp);
//     }
// };