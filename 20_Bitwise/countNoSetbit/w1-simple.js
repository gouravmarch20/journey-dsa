const countNoOfBit = (no) => {
  // function body
  while (no) {
    let c = 0
    while (no !== 0) {
      if(no & 1){
        c++;
      }
      no = no >> 1;
    }
    return c
  }
}

console.log(countNoOfBit(7))
console.log(countNoOfBit(15))
console.log(countNoOfBit(9))

