// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int maxi = INT_MIN;
//         int n = nums.size();
//         for(int i = 0 ; i < n ; i++){
//                 int sum = 0;
//               for(int j = i  ; j < n ; j++){
//                    sum += nums[j];

//                 if(  maxi < sum){
//                     maxi = sum ;
//                 }
              
//               }
//         }
//         return maxi;
//     }
// };