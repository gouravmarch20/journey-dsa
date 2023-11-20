/**
 * @param {number[]} nums
 * @return {number}
 */
var minLengthAfterRemovals = function(nums) {
    let hashMap = new Map()
    for (const num of nums) {
        hashMap.set(num, hashMap.get(num) + 1 || 1)
    }
    // console.log(hashMap)
    
    const freqs = []
    
    hashMap.forEach((val, key) => {
        freqs.push(val)
    })
    freqs.sort((a,b) => b-a)
    if (freqs.length === 1) return freqs[0]
    
    if (freqs[0] > (nums.length - freqs[0])) {
        // console.log(freqs[0] - (nums.length - freqs[0]))
        return freqs[0] - (nums.length - freqs[0])
    }
    return nums.length % 2
    // console.log(freqs)
//     if (freqs.length === 1) return freqs[0]
//     let freq 
//     while(freqs.length > 1) {
//         freq = freqs.shift()
//         while(freq > 0 && freqs.length > 0) {
//             if (freq >= freqs[0]) {
//                 freq -= freqs[0]
//                 freqs.shift()
//             } else {
//                 freqs[0] -= freq
//                 if (freqs[0] === 0) freqs.shift()
                
//             }   
//         }
//     }
//     if (freq > 0) return freq
//     if (freqs[0] > 0) return freqs[0]
    return 0
};