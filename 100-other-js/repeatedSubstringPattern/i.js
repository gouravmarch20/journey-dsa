/**
 * @param {string} s
 * @return {boolean}
 */
var repeatedSubstringPattern = function(s) {
    return (s + s).slice(1,-1).includes(s)
    // for (let i = 1; i <= s.length / 2; i++) {
    //     if (s.length % i !== 0) continue
    //     let subString = s.slice(0, i)
    //     let accumulator = ''
    //     while(accumulator.length < s.length) accumulator += subString
    //     if (s === accumulator) return true
    // }
    // return false
};