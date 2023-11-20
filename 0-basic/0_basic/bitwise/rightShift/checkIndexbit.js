//? true value means it contain that bit , false means not contain 
const checkBitAt = (no, index) => {
  let mask = 1 << index
  const r = no & mask
return r
}

const no = 10
console.log(checkBitAt(no, 0)) // 
console.log(checkBitAt(no, 1)) //
console.log(checkBitAt(no, 2)) //
console.log(checkBitAt(no, 3)) //
