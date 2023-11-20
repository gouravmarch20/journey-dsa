// class Solution {
// public:
//     int prefixSum(vector<int>& nums) {
//         int n = nums.size();
////      ^ init all 0 ::: leftSum[0] , rightSum[n-1] ==> no worries
//         vector <int> leftSum(n , 0 ) ;
//         vector <int> rightSum(n , 0) ;
       

//         //^ i = 1
//         for(int i = 1 ; i < n ; i++){
//             leftSum[i] = leftSum[i-1] + nums[i-1];
//         }
//         //^ i = n -1
//         for(int i = n - 2 ; i >= 0 ; i--){
//             rightSum[i] = rightSum[i+1] + nums[i+1];
//         }
//         //~ why 0 sia start --> in question asked left most pivot
//         for(int i = 0 ; i < n ; i++){
//             if(leftSum[i] == rightSum[i]){
//                 return i ;
//             }
//         }
//         return -1;

       
//     }
//     int pivotIndex(vector<int>& nums) {
//         return prefixSum(nums);
//     }
// };