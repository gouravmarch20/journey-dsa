/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
// * O(N log N)
//& O(1)
var countPairs = function (nums, target) {
  nums.sort((a, b) => a - b)
  let c = 0
  let i = 0
  let j = nums.length - 1
  //   ^ two pointer way so this case  , individual can not form pair
  for (; i < j; ) {
    // & while loop better option 
    while (j > i) {
      if (nums[i] + nums[j] < target) {
        let temp = j - i
        c += temp
        i++
      } else {
        j--
      }
    }
  }
  return c
}
const nums = [-6, 2, 5, -2, -7, -1, 3]
console.log(countPairs(nums, -2))
