// class Solution {
//  public:
//   void rotate(vector<int>& nums, int k) {
//     // !     forget this edge case
//     if (n < k) {
//       k = k % n;
//     }
//     vector<int> temp(k);
//     int n = nums.size();

//     int lastKFistIndex = n - k;
//     for (int i = 0; i < k; i++) {
//       temp[i] = nums[lastKFistIndex++];
//     }

//     for (int i = n - k - 1; i >= 0; i--) {
//       nums[k + i] = nums[i];
//     }

//     for (int i = 0; i < k; i++) {
//       nums[i] = temp[i];
//     }
//   }
// };