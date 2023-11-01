// class Solution {
// public:
//     int findMaximumXOR(vector<int>& nums) {
//         int maxi = INT_MIN;
//         for(int i = 0 ; i < nums.size() ; i++){
//             for(int j = i+1 ; j < nums.size() ; j++){
//                 maxi = max(maxi , (nums[i] ^ nums[j]));
//             }
//         }
//         if(maxi == -2147483648){
//             return 0;
//         }
//        return maxi;
//     }
// };