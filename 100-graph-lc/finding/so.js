/**
 * @param {number} n
 * @param {number} k
 * @return {number}
 */
var minimumSum = function(n, k) {
    let numbersToAdd = []
    let numToAdd = 1
    for (let i = 0; i < n; i++) {
        if (!numbersToAdd.includes(k - numToAdd)) numbersToAdd.push(numToAdd++)
        else {
            numToAdd++
            n++
        }
    }
    return numbersToAdd.reduce((a,c) => a + c, 0)
};