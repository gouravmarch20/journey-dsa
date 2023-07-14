/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function (n) {
  if (n === 0 || n === 1) {
    return 1
  }

  if (n === 2) {
    return 2
  }

  return climbStairs(n - 1) + climbStairs(n - 2)
}
console.log(climbStairs(45))
