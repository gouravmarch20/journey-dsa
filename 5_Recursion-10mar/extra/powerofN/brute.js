//* O( n)
const powerOfN = (n, x) => {
  // function body
  if (x === 0) {
    return 1
  }
  const ans = powerOfN(n, x - 1)
  return ans * n
}

const n = 3
const x = 4
console.log(powerOfN(n, x))
