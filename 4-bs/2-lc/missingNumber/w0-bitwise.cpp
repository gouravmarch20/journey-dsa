// class Solution {
//  public:
//   int bitWise(vector<int>& nums) {
//     int ans = 0;
//     for (int i = 0; i < nums.size(); i++) {
//       ans ^= nums[i];
//     }
//     for (int i = 0; i <= nums.size(); i++) {
//       ans ^= i;
//     }

//     return ans;
//   }
//   int missingNumber(vector<int>& nums) { return bitWise(nums); }
// };