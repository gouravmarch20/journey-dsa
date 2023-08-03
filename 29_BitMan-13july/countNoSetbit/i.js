const countNoOfBit = (no) => {
  // function body
  while (no) {
    let c = 0
    while (no !== 0) {
      no = no & (no - 1)
      c++

    }
    return c
  }
}

console.log(countNoOfBit(7))
//   console.log(countNoOfBit(no, 2))
