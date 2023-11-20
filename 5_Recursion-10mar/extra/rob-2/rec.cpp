class Solution {
 public:
  int rec(vector<int>& nums, int index, int size) {
    if (index > size) {
      return 0;
    }
    int opt1 = nums[index] + rec(nums, index + 2, size);
    int opt2 = rec(nums, index + 1, size);
    return max(opt1, opt2);
  }
  int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) {
      return nums[0];
    }
    int opt1 = rec(nums, 0, n - 2);
    int opt2 = rec(nums, 1, n - 1);
    return max(opt1, opt2);
  }
};