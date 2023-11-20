/**
 * @param {number[]} nums
 * @return {number}
 */

var missingNumber = function (nums) {
  let sum = 0
  const n = nums.length
  for (const val of nums) {
    sum += val
  }
  const totalSum = n * n + 1 / 2
  return totalSum - sum
}
