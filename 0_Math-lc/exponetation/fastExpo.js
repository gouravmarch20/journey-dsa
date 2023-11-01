// * O(log(n))
const fastExponentiation = (a, b) => {
  let ans = 1
  while (b  > 0) {
    let am = a
    let bm = b
    if (b & 1) {
      ans = ans * a
    }
    a = a * a
    b >>= 1//^ make half each time
  }
  return ans
}
const base = 2
const power = 6
console.log(fastExponentiation(base, power))
