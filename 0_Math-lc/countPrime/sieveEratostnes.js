/**
 * @param {number} n
 * @return {number}
 */
//* O(n log(log(n)))
// O(n) * n/2 + n / 3 + n /5 + n /7 ==> O(n) + n(1/2 + 1/3 + 1/5 + 1/7)
var countPrimes = function (n) {
  if (n === 0) return 0
  let prime = new Array(n).fill(true)
  prime[0], (prime[1] = false)
  let c = 0
  for (let i = 2; i < n; i++) {
    if (prime[i]) {
      c++

      let j = 2 * i

      while (j < n) {
        prime[j] = false
        j += i
      }
    }
  }
  console.log(c)
}
countPrimes(3 )
