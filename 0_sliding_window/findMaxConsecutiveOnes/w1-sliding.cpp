// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int i = 0;
//         int n = nums.size();
//         int maxOneCons = 0;
//         while( i < n && nums[i] == 1 ){
//             maxOneCons++;
//             i++;
//         }

//         for( ; i < n ; i++){
//             int tempOneCons = 0;
//         //^ i < n ::: forgot address issue
//         while( i < n && nums[i] == 1){
//             tempOneCons++;
//             i++;
//         }
//         if(tempOneCons > maxOneCons) maxOneCons = tempOneCons;
//         }
//         return maxOneCons;
//     }
    
// };