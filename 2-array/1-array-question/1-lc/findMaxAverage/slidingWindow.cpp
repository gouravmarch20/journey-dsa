// class Solution {
// public:
//     double doubleSlidingWindow (vector<int>& nums, int k) {

//         int i = 0 , j = k  , n = nums.size() , maxKSum = 0 ;
//         //^ window 1st done 
//         for(int i = 0 ; i < j ; i++){
//             maxKSum += nums[i];
//         }
//         int currSum = maxKSum;//M : need varible to track each window sum 

//         while(j < n){
//             //^ window 2 done , and so on till n - k
//             currSum = currSum - nums[i] + nums[j];
//             i++;
//             j++;
//             maxKSum = max(maxKSum ,currSum );
//         }
//         return maxKSum / (double)k;
//     }
//     double findMaxAverage(vector<int>& nums, int k) {
//        return  doubleSlidingWindow(nums , k );
//     }
// };