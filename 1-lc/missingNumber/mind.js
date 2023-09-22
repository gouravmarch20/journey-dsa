/**
 * @param {number[]} nums
 * @return {number}
 */

var missingNumber = function(nums) {
    let s = 0
  const n = nums.length
  for (const val of nums) {
    s += val
  }
    return n * ((n + 1) / 2 )- s

};