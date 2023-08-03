// ? make mask of given number where left side  all 1
const markRightSide_1 = (i) => {
  // function body
  const mask = (1 << i) - 1

  return mask
}

console.log(markRightSide_1(3)) // 0111 => 7
console.log(markRightSide_1(5)) // 1 1111 => 31
