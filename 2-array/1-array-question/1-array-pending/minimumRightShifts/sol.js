/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumRightShifts = function(nums) {
    let i = 1
    while (nums[i] > nums[i-1]) {
        i++
    }
    let ans = nums.length - i
    let low = 0
    for (let j = i; j < nums.length; j++) {
        if (nums[j] < nums[j-1]) low++
    }
    if (nums[0] < nums[nums.length - 1]) low++
    return low < 2 ? ans : -1
};