/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */

var longestOnes = function (nums, k) {
  let r = 0,
    l = 0,
    maxi = 0,
    n = nums.length,
    zeroCnt = 0;
  while (r < n) {
    if (nums[r] == 0) {
      zeroCnt++;
    }
    if (zeroCnt > k) {
      while (nums[l] != 0) {
        l++;
      }
      l++;
      zeroCnt -= 1;
    }
    a;
    console.log(r, l);
    maxi = Math.max(maxi, r - l + 1);
    r++;
  }
  return maxi;
};
