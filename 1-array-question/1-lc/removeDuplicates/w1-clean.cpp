// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int uniqueCount = 1;//^ forgot logic on this base two pointer done
//         for( int i = 1; i < nums.size() ; i++){
//             if(nums[i-1] != nums[i]){
//                nums[uniqueCount] =  nums[i]  ;
//                uniqueCount++;
//             }
//         }
//         return uniqueCount;
//     }
// };