/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
// * O(n ^ 2 *  log(n)) --> at worst case 
// * O(n  *  log(n)) --> at best case 
// & 1
var countPairs = function (nums, target) {
  nums.sort((a, b) => a - b)
  let c = 0
  for (let i = 0; i < nums.length; i++) {
    for (let j = nums.length - 1; j > i; j--) {
      if (nums[i] + nums[j] < target) {
        let temp = j - i
        c = c + temp
        j = j - temp
      }
    }
  }
  return c;

}
const nums = [-6, 2, 5, -2, -7, -1, 3]
console.log(countPairs(nums, -2))
