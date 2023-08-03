//* O( n)
const powerOfN = (n, base) => {
  // function body
  if (n === 0) return 0
  if (base === 0) return 1

  let ans = powerOfN(n, Math.floor(base / 2))
  
  if (base % 2 === 1) {
    return ans * ans * n
  } else {
    return ans * ans
  }
}

const n = 3
const base = 4
console.log(powerOfN(n, base))
