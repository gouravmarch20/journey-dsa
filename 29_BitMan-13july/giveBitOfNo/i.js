const get_i_th_bit = (no, n) => {
  // function body
  let mask = 1
  for (let i = 0; i < n; i++) {
    mask <<= 1;
  }
  if(no & mask) return true
  return false
}
const no = 10

console.log(get_i_th_bit(no, 3))
console.log(get_i_th_bit(no, 2))
