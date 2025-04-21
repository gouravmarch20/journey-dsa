/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var subarraysWithKDistinct = function (nums, k) {
  let cnt = 0;
  for (let i = 0; i < nums.length; i++) {
    let set = new Set();
    for (let j = i; j < nums.length; j++) {
      set.add(nums[j]);
      if (set.size == k) {
        cnt++;
      }
      if (set.size > k) {
        break;
      }
    }
  }
  return cnt;
};
const r = subarraysWithKDistinct([1, 2, 1, 2, 3], 2);
console.log(`  `, r);
