//* O( n)
const powerOfN = (n, base) => {
  // function body
  if (n === 0) return 0
  if (base === 0) return 1

  if (base % 2 === 1) {
    const ans = powerOfN(n, Math.floor(base / 2))
    return ans * ans
  } else {
    const ans = powerOfN(n, Math.floor(base / 2))
     return ans * ans * n
  }
}

const n = 3
const base = 4
console.log(powerOfN(n, base))
