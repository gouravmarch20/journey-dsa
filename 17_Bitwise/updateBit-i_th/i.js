//^ make 0 to given index bit
const clear_i_th_bit = (no, i) => {
  const mask = ~(1 << i)
  no = no & mask
  return no
}
const updateBit_i_th = (no, index, toAdd) => {
  let removedNo = clear_i_th_bit(no, index)
  console.log(removedNo)

  let mask = toAdd << index //^ mask for 1
  removedNo = removedNo | mask //^ update to 1 if mask has 1,else same
  return removedNo
}
const no = 7

// remove
console.log(updateBit_i_th(no, 2, 0))
console.log(updateBit_i_th(no, 1, 0))
// add
console.log(updateBit_i_th(no, 3, 1))
console.log(updateBit_i_th(no, 4, 1))
// console.log(updateBit_i_th(no, 1, 1))
