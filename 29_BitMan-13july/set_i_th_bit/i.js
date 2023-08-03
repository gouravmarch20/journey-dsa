const set_i_th_bit = (no, n) => {
  // function body
  let mask = 1 << n

  return no | mask
}
const no = 10

console.log(set_i_th_bit(no, 2))//? add bit 1 at 2 , return new no
console.log(set_i_th_bit(no, 1))
console.log(set_i_th_bit(no, 5))
