// class Solution {
//  public:
//   vector<int> twoPointer(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> ans(n);
//     int positiveP = 0;  // positive begain with --> first index
//     int negativeP = 1;
//     for (int i = 0; i < n; i++) {
//       if (nums[i] < 0) {
//         ans[negativeP] = nums[i];
//         negativeP += 2;
//       } else {
//         ans[positiveP] = nums[i];
//         positiveP += 2;
//       }
//     }
//     return ans;
//   }
//   vector<int> rearrangeArray(vector<int>& nums) {
//     return twoPointer(nums);
//   }
// };