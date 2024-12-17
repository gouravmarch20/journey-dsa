// class Solution {
//  public:
//   vector<int> solve(vector<int> nums) {
//     vector<int> pos, neg;
//     for (auto i : nums) {
//       if (0 < i)
//         pos.push_back(i);
//       else
//         neg.push_back(i);
//     }

//     int index = 0;
// //* L:  for loop multi assignment
//     for (int i = 0; i < nums.size(); i += 2, index++) {
//       nums[i] = pos[index];
//       nums[i + 1] = neg[index];
//     }
//     return nums;
//   }


//   vector<int> rearrangeArray(vector<int>& nums) {
//     return solve(nums);

//   }
// };