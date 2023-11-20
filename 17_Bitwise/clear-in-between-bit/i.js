const clearInBetweenBit = (n, i, j) => {
  const mask1 = -1 << (i + 1) //^left side  1111...n_time0 -> 1111111000
  const mask2 = (1 << j) - 1 //^ right side 1 ko sift j time --> 10000 but -1 --> 1111
  const mask = mask1 | mask2 // 1111_00000_0000 | 0000_00000_1101 -> 0000_0000_1101
  n = n & mask
  return n
}
console.log(clearInBetweenBit(15, 2, 1))
