/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var countPairs = function (nums, target) {
  let c = 0
  //   nums.sort()//M1: negative value not handle by it
  //   nums.sort(a, b => a-b)// M2: miss the () in a,b wrapper
    nums.sort((a, b) => a - b)

  for (let i = 0; i < nums.length; i++) {
    const val1 = nums[i]
    for (let j = i + 1; j < nums.length; j++) {
      const val2 = nums[j]
      console.log(val1, val2)
      if (val1 + val2 < target) {
        c++
      }
    }
    console.log("-----")
  }

  return c
}
const nums = [-6, 2, 5, -2, -7, -1, 3]
console.log(countPairs(nums, -2))
