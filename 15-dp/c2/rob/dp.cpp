// class Solution {
// public:
//     int robRec(vector<int>& nums , int n , vector<int> & dp ){
//         if(n < 0) return 0;
//         if(n == 0) {
//             cout << nums[0];
//             return nums[0];
//         }
//         if(dp[n] != -1) return dp[n];
//         //

//         int include = robRec(nums, n-2 , dp ) + nums[n];
//         int exclude = robRec(nums , n - 1 , dp) + 0 ;
//         // cout << exclude  << "-" << include << " " ;
//         return max(include , exclude);
//     }
//     int rob(vector<int>& nums) {
//         vector <int> dp(nums.size() + 1 , -1);
//         int n = nums.size() - 1;//^ array size , index mai access 
//         return robRec(nums , n , dp);
//     }
// };