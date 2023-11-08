// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int maxOneCnt = 0;
//         int cnt = 0;
//         for(auto val : nums){
//             if(val == 1){
//                 cnt++;
//                 maxOneCnt = max(maxOneCnt , cnt);
//             }else{
//                 cnt = 0;
//             }
//         }
//         return maxOneCnt;
//     }
// };