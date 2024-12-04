// class Solution {
// public:
//     int recSol(vector<int> nums , int curr , int prev ){
//         if(curr >= nums.size() ) return 0;

//         int include = 0;
//         if(prev == -1 ||  nums[curr] > nums[prev]){
//             include = 1 +  recSol(nums , curr + 1 , curr);
//         } 
//         int exclude = recSol(nums , curr + 1 , prev);
//         int ans = max(include , exclude);
//         return ans;
//     }
//     int lengthOfLIS(vector<int>& nums) {
//         return recSol(nums , 0 , -1);
//     }
// };