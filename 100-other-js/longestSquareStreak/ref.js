/**
 * @param {number[]} nums
 * @return {number}
 */
var longestSquareStreak = function(nums) {
    const numsSet = new Set(nums)
    let answer = 0
    for (const num of nums) {
        let numAns = 0
        let root = (num ** 0.5)
        if (numsSet.has(root)) numAns++
        while(numsSet.has(root)) {
            numAns++
            root = (root ** 0.5)
        }
        answer = Math.max(answer, numAns)
    }
    return answer === 0 ? -1 : answer
};