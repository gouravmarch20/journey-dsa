/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let maxSum = nums[0]
 let tempSum = 0
 nums.forEach(n => {
   tempSum += n
   maxSum = Math.max(maxSum, tempSum)
   if (tempSum < 0) {
     tempSum = 0
   }
 })
 return maxSum
};