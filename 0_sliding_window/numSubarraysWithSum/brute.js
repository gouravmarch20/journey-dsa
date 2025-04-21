/**
 * @param {number[]} nums
 * @param {number} goal
 * @return {number}
 */
const getSum = (nums, i, j) => {
  let sum = 0;
  for (let x = i; x <= j; x++) {
    sum += nums[x];
  }
  return sum;
};
var numSubarraysWithSum = function (nums, goal) {
  let n = nums.length;
  let cnt = 0;
  for (let i = 0; i < n; i++) {
    for (let j = i; j < n; j++) {
      if (getSum(nums, i, j) == goal) {
        cnt++;
      }
    }
  }
  return cnt;
};
