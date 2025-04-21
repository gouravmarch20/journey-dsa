/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function (nums) {
  let maxRange = nums[0];
  let i = 0;
  let n = nums.length;
  if (i == n - 1) return true;

  while (i < n) {
    if (maxRange >= n - 1) return true;
    if (nums[i] == 0 && maxRange == i) {
      return false;
    }

    maxRange = Math.max(nums[i] + i, maxRange);
    i++;
  }

  return true;
};
