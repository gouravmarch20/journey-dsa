const removeTheGivenBit = (no, toRemove) => {
  // function body
  let mask = 1 << toRemove // all 0 , except remove index no
  mask = ~mask // all 1 except , remove index no
  return no & mask
}
const no = 7
console.log(removeTheGivenBit(no, 2))
console.log(removeTheGivenBit(no, 1))
console.log(removeTheGivenBit(no, 0))

