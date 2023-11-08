// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int i = 1;
//         int n = nums.size();
//         int safeP = 0;
//        for(int i = 1 ; i < n ; i++){
//             if(nums[i-1] == nums[i]){
//             }else{
//                 nums[++safeP] =  nums[i];
//             }
//         }
//         return( safeP + 1);
//     }
// };