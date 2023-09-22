/**
 * @param {number[]} groupSizes
 * @return {number[][]}
 */
var groupThePeople = function(groupSizes) {
    const answer = []
    const hashMap = new Map()
    for (let i = 0; i < groupSizes.length; i++) {
        let size = groupSizes[i]
        hashMap.set(size, hashMap.has(size) ? [...hashMap.get(size), i] : [i])
    }
    for (const [key, val] of hashMap) {
        while(val.length > 0) {
            const arr = []
            while(arr.length < key) {
                let i = val.shift()
                arr.push(i)
            }
            answer.push([...arr])
        }
    }
    return answer
};