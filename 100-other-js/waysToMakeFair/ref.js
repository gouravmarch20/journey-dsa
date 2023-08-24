/**
 * @param {number[]} nums
 * @return {number}
 */
var waysToMakeFair = function(nums) {
    let answer = 0
    const sums = [[nums[0],0]]
    for (let i = 1; i < nums.length; i++) {
        let [even, odd] = sums[i - 1]
        if (i % 2 === 0) sums.push([even + nums[i], odd])
        else sums.push([even, odd + nums[i]])
    }
    if (sums[sums.length-1][0] - nums[0] === sums[sums.length-1][1] ) answer++
    for (let i = 1; i < nums.length; i++) {
        let totalOdd = sums[i-1][1] + sums[sums.length-1][0] - sums[i-1][0]
        let totalEven = sums[i-1][0] + sums[sums.length-1][1] - sums[i-1][1]
        if (i % 2 === 0) totalOdd -= nums[i]
        else totalEven -= nums[i]
        if (totalOdd === totalEven) answer++
    }
    return answer
};