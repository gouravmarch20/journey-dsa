// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int c = 0;
//         for(int i = 0 ; i < nums.size() ; i++){
// M : nums[c-2] writen nums[i-1]
// NOTE : need to check pointer value , 2 continues same avoid
//           if(i == 0 || i == 1 || nums[c-2] != nums[i] ){
//             nums[c] = nums[i];
//             c++;
//           }
//         }
// for(auto e:nums){
//   if(c == 0 || c == 1 || nums[c-2] != e ){
//     nums[c] = e;
//     c++;
//   }
// }
//         return c;
//     }
// };