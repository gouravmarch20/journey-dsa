// class Solution {
//  public:
//   int gpt(vector<int>& nums, int k) {
//     set<pair<int, int>> ans;
//     for (int i = 0; i < nums.size(); i++) {
//       for (int j = i + 1; j < nums.size(); j++) {
//         int val = abs(nums[i] - nums[j]);
//         if (val == k) {
//&           // smart way
//           int mini = min(nums[i], nums[j]);
//           int maxi = max(nums[i], nums[j]);
//           ans.insert({mini, maxi});
//         }
//       }
//     }
//     return ans.size();
//   }
//   int safe(vector<int>& nums, int k) {
//     set<pair<int, int>> ans;
//     for (int i = 0; i < nums.size(); i++) {
//       for (int j = i + 1; j < nums.size(); j++) {
//         int val = abs(nums[i] - nums[j]);
//         if (val == k) {
//           pair<int, int> p1({nums[i], nums[j]});
//           pair<int, int> p2({nums[j], nums[i]});

//           auto it1 = ans.find(p1);
//           auto it2 = ans.find(p2);

//           if (it1 == ans.end() && it2 == ans.end()) {
//             ans.insert(p1);
//           }
//         }
//       }
//     }
//     return ans.size();
//   }

//   int findPairs(vector<int>& nums, int k) {
   
//     safe(nums , k);
//     gpt(nums , k);
//   }
// };