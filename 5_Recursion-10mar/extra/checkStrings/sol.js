/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */
var checkStrings = function(s1, s2) {
    let ans = true
    let hashMap1Even = new Map()
    for (let i = 0; i < s1.length; i+=2) {
        hashMap1Even.set(s1[i], hashMap1Even.get(s1[i]) + 1 || 1)
    }
    
    let hashMap2Even = new Map()
    for (let i = 0; i < s2.length; i+=2) {
        hashMap2Even.set(s2[i], hashMap2Even.get(s2[i]) + 1 || 1)
    }
    
    let hashMap1UnEven = new Map()
    for (let i = 1; i < s1.length; i+=2) {
        hashMap1UnEven.set(s1[i], hashMap1UnEven.get(s1[i]) + 1 || 1)
    }
    
    let hashMap2UnEven = new Map()
    for (let i = 1; i < s2.length; i+=2) {
        hashMap2UnEven.set(s2[i], hashMap2UnEven.get(s2[i]) + 1 || 1)
    }
    if (hashMap1Even.size !== hashMap2Even.size) ans = false
    if (hashMap1UnEven.size !== hashMap2UnEven.size) ans = false
        
    hashMap1Even.forEach((val, key) => {
        if (hashMap2Even.get(key) !== val) ans = false
    })
    hashMap1UnEven.forEach((val, key) => {
        if (hashMap2UnEven.get(key) !== val) ans = false
    })
    return ans
};