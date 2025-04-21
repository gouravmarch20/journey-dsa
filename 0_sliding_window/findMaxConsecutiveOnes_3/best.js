/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */

var longestOnes = function (nums, k) {
  let l = 0,
    maxi = 0,
    n = nums.length,
    zeroCnt = 0;
  for (let r = 0; r < nums.length; r++) {
    const element = nums[r];
    if (element == 0) zeroCnt++;
    if (zeroCnt > k) {
      if (nums[l] == 0) {
        zeroCnt--;
      }
      l++;
    }
    if (zeroCnt <= k) {
      maxi = Math.max(maxi, r - l + 1);
    }
  }
  return maxi;
};
const r = longestOnes([1, 0, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1], 2);
console.log(" ", r);
