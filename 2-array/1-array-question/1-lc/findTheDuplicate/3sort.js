/**
 * @param {number[]} nums
 * @return {number}
 */

var findDuplicate = function (nums) {
  nums.sort()
  //^ m1 ==> i < nums.length - 1 must be found before last i+1 :: ahead checking
  for (let i = 0; i < nums.length - 1; i++) {
    if (nums[i] === nums[i + 1]) {
      return nums[i]
    }
  }
  return false;
}
nums = [3, 1, 3, 4, 2]
console.log(findDuplicate(nums))
