const clearLastNBit = (no, noOfBitClearFromLast) => {
  // function body

  //? way1 -> 
  let mask = ~1 //all 111111
  mask = mask << noOfBitClearFromLast
  no = no & mask
  //? way2 --> ~0 : all bit 11111 , shift n time n time 0 intro at last
//   mask = ~0 << noOfBitClearFromLast
//   no = no & mask

  //? way3 --> -1 : all bit 11111 , shift n time n time 0 intro at last
//   mask = -1 << noOfBitClearFromLast
//   no = no & mask

  return no
}
console.log(clearLastNBit(15, 3)) //1111
//   let mask = -1 << noOfBitClearFromLast
//   no = no & mask
