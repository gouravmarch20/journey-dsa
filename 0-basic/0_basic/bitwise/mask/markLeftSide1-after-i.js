// ? make mask of given number where left side  all 1
const markRightSide_1_afterI = (i) => {
    // function body
    const mask = (-1 << i+1)
    return mask
  }
  
  console.log(markRightSide_1_afterI(3)) // 1111 1111 1111 0000
  console.log(markRightSide_1_afterI(5)) // 1 1111 => 31
  