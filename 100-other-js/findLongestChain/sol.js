/**
 * @param {number[][]} pairs
 * @return {number}
 */
var findLongestChain = function(pairs) {
    pairs.sort((a,b) => a[1] - b[1])
    let ans = 0
    let current = -1001
    for (const [a,b] of pairs) {
        if (a > current) {
            ans++
            current = b
        }
    }
    return ans
};