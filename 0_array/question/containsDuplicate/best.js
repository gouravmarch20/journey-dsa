/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function (nums) {
  let cntDuplicate = [];

  for (let i = 0; i < nums.length; i++) {
    if (cntDuplicate[nums[i]] == -1) {
      return true;
    }
    cntDuplicate[nums[i]] = -1;
  }
  return false;
};
