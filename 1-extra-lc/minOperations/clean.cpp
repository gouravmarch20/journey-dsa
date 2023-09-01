// class Solution {
// public:
//     int minOperations(vector<int>& nums) {
//         int prev = nums[0];
//         int c = 0;
//         for(int i = 1 ; i < nums.size() ; i++){
                // int curr =  nums[i];
//             if(curr <= prev ){
//                 int diff = prev -curr + 1;
//                curr =curr + diff ;
//                 // prev =curr;//M go outside if block
//                 c += diff;
//             }
//             prev =curr;
//         }
//         return c;
        
//     }
// };