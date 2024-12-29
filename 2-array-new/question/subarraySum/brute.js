/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var subarraySum = function(nums, k) {
    let c = 0

for (let i = 0; i < nums.length; i++) {
  let s = 0
  for (let j = i; j < nums.length; j++) {
    s += nums[j]
    if (s === k) {
      c++
    }
   }
}
return c
};