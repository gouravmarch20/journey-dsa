/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function (nums) {
  let maxi = nums[0];
  let sum = nums[0];
  for (let i = 1; i < nums.length; i++) {
    if (sum < 0) {
      sum = 0;
    }
    sum += nums[i];

    maxi = Math.max(maxi, sum);
  }
  return maxi;
};
