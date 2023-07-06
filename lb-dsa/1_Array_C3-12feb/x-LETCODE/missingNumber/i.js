/**
 * @param {number[]} nums
 * @return {number}
 */
const lS = (arr, key) => {
  for (let i = 0; i < arr.length; i++) {
    if (key === arr[i]) {
      return true
    }
  }
  return false
}
var missingNumber = function (nums) {
  nums.sort()
  for (let i = 0; i <= nums.length; i++) {
    if (!lS(nums, i)) {
      return i
    }
  }
}
const nums = [3, 0, 1]
console.log(missingNumber(nums))
// console.log(nums)w
