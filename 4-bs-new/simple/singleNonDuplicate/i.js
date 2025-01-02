/**
 * @param {number[]} nums
 * @return {number}
 */
/**
 * @param {number[]} nums
 * @return {number}
 */
const bs = (nums) => {
  let s = 0
  let e = nums.length - 1
  let m = s + Math.floor((e - s) / 2)
  let c = 0 

  while (s <= e) {
    if(c === 20){
        return 
      }
      c++;
    console.log(s , m , e)
    if (s == e) {
      return nums[s]
    }
    if (m % 2 === 0) {
      if (nums[m] === nums[m + 1]) {
        s = m + 2
      } else {
        e = m
      }
    } else {
      if (nums[m - 1] === nums[m]) {
        s = m + 1
      } else {
        e = m - 1
      }
    }
    m = s + Math.floor((e - s) / 2)

  }

}

var singleNonDuplicate = function (nums) {
  return bs(nums)
}
console.log(singleNonDuplicate([1, 1, 2, 3, 3, 4, 4, 8, 8]))
