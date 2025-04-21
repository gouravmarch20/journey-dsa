/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function (nums) {
  let maxRange = nums[0];
  let i = 0;
  let n = nums.length;
  if (i == n - 1) return true;

  for (let i = 0; i < nums.length; i++) {
    console.log(i, maxRange, nums[i]);
    if (i > maxRange) return false;
    maxRange = Math.max(maxRange, nums[i] + i);
  }

  return true;
};
const r = canJump([3, 2, 1, 0, 4]);
console.log(r);
