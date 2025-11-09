/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
  let obj = {};
  let res = [];
  for (let i = 0; i < nums.length; i++) {
    const curr = nums[i];
    const req = target - curr;
    // ! faling 0 value --> obj[curr] making false
    if (obj.hasOwnProperty(curr)) {
      res = [obj[curr], i];
      break;
    }
    obj[req] = i;
  }
  return res;
};
