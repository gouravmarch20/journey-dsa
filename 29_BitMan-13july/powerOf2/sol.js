/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfTwo = function (n) {
  //   const ans = (n & (n - 1)) === 0 ? true : false
  //   return ans
  if (n === 0 || n === -2147483648) return false
  if (n & (n - 1)) {
    console.log("message");
    return false
  } else {
    return true
  }
}
console.log(isPowerOfTwo(1))
