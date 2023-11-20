// class Solution {
// public:
//     int sortWay(vector<int> nums) {
//        int isZero = false;
//        for(int i = 0 ; i < nums.size() ; i++){
           
//            if(nums[i] == 0) isZero = true;
//            else{
//                int a = abs(nums[i]);
//               nums[a-1] = nums[a-1] * -1;
//            }
//        }
//         if(isZero){
//         for(int i = 0 ; i < nums.size() ; i++){
//            cout << nums[i] <<" ";
//            if(nums[i] >= 0 ) return i + 1;
//          }
//         }
      
//        return 0;
        
//     }
//     int missingNumber(vector<int>& nums) {
//         return sortWay(nums);
//     }
// };