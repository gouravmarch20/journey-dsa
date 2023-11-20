// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         int maxSum = INT_MIN;
//         int i = 0 , j = k - 1;
//         while(j < nums.size()){
//             int sum = 0 ;
//             for(int u = i ;  u <= j ; u++)
//                  sum += nums[u];
                
//             maxSum = max(maxSum , sum);
//             ++j , ++i ;  
//         }
//         // return maxSum / double(k); //!M wrong syntax 

//         return maxSum / (double)k;

//     }
// };