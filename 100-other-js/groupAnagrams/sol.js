/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    const answer = []
    const hashMap = new Map()

    for (const s of strs) {
        let charCountArray = new Array(26).fill(0)

        for (let i = 0; i < s.length; i++) charCountArray[s.charCodeAt(i) - 97]++
        const key = charCountArray.join('-')
        
        if (hashMap.has(key)) {
            const arr = hashMap.get(key)
            arr.push(s)
            hashMap.set(key, arr)
            continue
        }
        hashMap.set(key, [s])
    }
    hashMap.forEach(val => answer.push(val))
    return answer
}