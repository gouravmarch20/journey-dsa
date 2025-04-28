/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
    const arr = [...nums]
  for (let i = 0; i < arr.length; i++) {
    const t = (i + k) % arr.length
    nums[t] = arr[i]
  }

};