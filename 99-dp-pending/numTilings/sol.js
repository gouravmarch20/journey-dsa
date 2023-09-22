/**
 * @param {number} n
 * @return {number}
 */
var numTilings = function(n) {
    let val1 = 1
    let val2 = 1
    let val3 = 2
    if (n === 1) return 1
    if (n === 2) return 2
    for (let i = 3; i <= n; i++) {
      let newVal = (val3 * 2 + val1) % 1000000007
      val1 = val2
      val2 = val3 
      val3 = newVal
    }
    return val3
};