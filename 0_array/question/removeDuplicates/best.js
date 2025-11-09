/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
  let lastCheckIndex = 0;
  for (let i = 1; i < nums.length; i++) {
    if (nums[i] != nums[lastCheckIndex]) {
      nums[++lastCheckIndex] = nums[i];
    }
  }

  return lastCheckIndex + 1;
};
