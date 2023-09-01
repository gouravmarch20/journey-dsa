/**
 * @param {number[]} nums
 * @return {number}
 */

var tupleSameProduct = function(nums) {
    const hashMap = new Map()
    let answer = 0
    for (let i=0; i < nums.length - 1; i++) {
        for (let j = i + 1; j < nums.length; j++) hashMap.set(nums[i] * nums[j], hashMap.get(nums[i] * nums[j]) + 1 || 1)
    }
    hashMap.forEach(val => answer += ((val * (val - 1)) * 4))
    return answer
};