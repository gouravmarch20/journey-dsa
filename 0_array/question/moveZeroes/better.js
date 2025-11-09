/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function (nums) {
  let zeroPoint = 0;
  let i = 0;
  for (; i < nums.length; i++) {
    if (nums[i] !== 0) {
      nums[zeroPoint] = nums[i];
      zeroPoint++;
    }
  }
  while (zeroPoint < i) {
    nums[zeroPoint] = 0;
    zeroPoint++;
  }
  return nums;
};
