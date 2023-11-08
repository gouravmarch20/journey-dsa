class Solution {
  findPairs(nums, k) {
    nums.sort((a, b) => a - b)
    const ans = new Set()

    for (let i = 0; i < nums.length; i++) {
      const target = nums[i] + k
      let start = i + 1
      let end = nums.length - 1

      while (start <= end) {
        let mid = Math.floor((start + end) / 2)
        if (nums[mid] === target) {
          ans.add([nums[i], target])
          break
        } else if (nums[mid] < target) {
          start = mid + 1
        } else {
          end = mid - 1
        }
      }
    }
    return ans.size
  }
}
