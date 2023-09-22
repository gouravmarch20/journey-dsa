/**
 * @param {number[]} nums
 * @param {number} m
 * @param {number} k
 * @return {number}
 */
var maxSum = function(nums, m, k) {
    let hashMap = new Map()
    const almostUniqueSums = []
    let currentArr = nums.slice(0, k)
    currentArr.forEach(el => {
        hashMap.set(el, hashMap.get(el) + 1 || 1)
    })
    let arrSum = currentArr.reduce((a,c) => a+c,0)
    
    if (hashMap.size >= m) almostUniqueSums.push(arrSum)
    
    for (let i = k; i < nums.length; i++) {
        let remove = currentArr.shift()
        currentArr.push(nums[i])
        arrSum = arrSum + nums[i] - remove
        
        hashMap.set(nums[i], hashMap.get(nums[i]) + 1 || 1)
        
        hashMap.set(remove, hashMap.get(remove) - 1)
        
        if (hashMap.get(remove) === 0) hashMap.delete(remove)
        
        // console.log(hashMap, i , nums.length)

        if (hashMap.size >= m) {
            almostUniqueSums.push(arrSum)
        }
    }
    if (almostUniqueSums.length === 0) return 0
    return Math.max(...almostUniqueSums)

};