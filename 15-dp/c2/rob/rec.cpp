// class Solution {
// public:
//     int robRec(vector<int>& nums , int n ){
//         if(n < 0) return 0;
//         if(n == 0) return nums[0];

//         int include = robRec(nums, n-2 ) + nums[n];
//         int exclude = robRec(nums , n - 1) + 0 ;
//         return max(include , exclude);
//     }
//     int rob(vector<int>& nums) {
//         int n = nums.size() - 1;
//         return robRec(nums , n);
//     }
// };