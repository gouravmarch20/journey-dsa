const slowExponent = (base, power) => {
  let ans = 1
  for (let i = 0; i < power; i++) {
    ans = base * ans
  }
  return ans;
}
const base = 2
const power = 6
console.log(slowExponent(base, power))
