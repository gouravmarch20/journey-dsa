// class Solution {
//  public:
//   int findPairs(vector<int>& nums, int k) {
//     set<pair<int, int>> ans;
//     for (int i = 0; i < nums.size(); i++) {
//       for (int j = i + 1; j < nums.size(); j++) {
//         int val = abs(nums[i] - nums[j]);
//         if (val == k) {
//           //*L :: if {2 , 1 } & {1,2} avoid min max base avoid duplicate
//           set<pair<int, int>>::iterator it = ans.find(nums[i]);

//           int mini = min(nums[i], nums[j]);
//           int maxi = max(nums[i], nums[j]);
//           ans.insert({mini, maxi});
//         }
//       }
//     }
//     return ans.size();
//   }
// };