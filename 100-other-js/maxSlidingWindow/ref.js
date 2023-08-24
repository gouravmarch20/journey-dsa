/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var maxSlidingWindow = function(nums, k) {
    console.log(nums.length)
    const window = nums.slice(0,k)
    let lastMax = Math.max(...window)
    const answer = [lastMax]
    let countOfMaxValue = 1
    for (let i = k; i < nums.length; i++) {
        let removedVal = window.shift()
        let newVal = nums[i]
        window.push(newVal)
        if (newVal > lastMax) {
            lastMax = newVal
            countOfMaxValue = 1
        } else {
            if (newVal === lastMax) countOfMaxValue++
            if (removedVal === lastMax) countOfMaxValue--
        }
        if (countOfMaxValue === 0) {
            lastMax = Math.max(...window)
            countOfMaxValue = 0
            for (let j = 0; j < window.length; j++) {
                if (window[j] === lastMax) countOfMaxValue++
            }
        }
        answer.push(lastMax)
    }
    return answer
}; 