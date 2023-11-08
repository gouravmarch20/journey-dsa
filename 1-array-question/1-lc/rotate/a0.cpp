// class Solution {
//  public:
//   void rotate(vector<int>& nums, int k) {
//     k = k % nums.size();  //! forgot k
//     reverse(nums.begin(), nums.end());

// //?         step2 :: from index  0 to k - 1
//  //^       reverse need --> end + 1  index so given ==> +k
// // L:how to do reverse 0 to mid index == > last need 1 index more

//     reverse(nums.begin(), nums.begin() + k);

//     //?         step3:: form k to n - 1
//     reverse(nums.begin() + k, nums.end());
//   }
// };