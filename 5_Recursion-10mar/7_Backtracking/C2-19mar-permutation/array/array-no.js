/**
 * @param {number[]} nums
 * @return {number[][]}
 */
const helper = (nums, i, res) => {
  if (i >= nums.length) {
    res.push([...nums])
    // return res;
    return
  }
  for (let j = i; j < nums.length; j++) {
    ;[nums[i], nums[j]] = [nums[j], nums[i]]
    helper(nums, i + 1, res)
    ;[nums[i], nums[j]] = [nums[j], nums[i]]
  }
}
var permute = function (nums) {
  let res = []
  helper(nums, 0, res)
  return res
}
const nums = [1, 2, 3]
console.log(permute(nums))
