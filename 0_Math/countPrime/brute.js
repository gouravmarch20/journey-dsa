/**
 * @param {number} n
 * @return {number}
 */
//  ? TIME LIMIT EXCEED
const isPrime = (n) => {
  if (n <= 1) {
    return false
  }
  for (let i = 2; i < n; i++) {
    
    if (n % i === 0) {
      return false
    }
  }
  return true
}
var countPrimes = function (n) {
  let count = 0
  for (let i = 0; i < n; i++) {
    if (isPrime(i)) {
      count++
    }
  }
  return count
}
const n = 1
// console.log(countPrimes(10))
console.log(countPrimes(2))
