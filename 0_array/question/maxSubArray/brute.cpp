// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int maxi = INT_MIN;
//         int n = nums.size();
//         for(int i = 0 ; i < n ; i++){
                
//               for(int j = i  ; j < n ; j++){
                    
//                  int sum = 0;
//                  for(int k = j ; k < n ; k++){
//                     sum += nums[k];

//                        if(maxi < sum){
//                     maxi = sum;
//                 }
//                  }
              
              
//               }
//         }
//         return maxi;
//     }
// };