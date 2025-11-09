/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function (digits) {
  let i = digits.length - 1;
  let carry = 0;
  for (; i >= 0; i--) {
    let curr = digits[i];
    if (i == digits.length - 1) {
      curr = curr + 1;
    }

    curr = curr + carry;

    let tempD = curr % 10;
    carry = Math.floor(curr / 10);

    digits[i] = tempD;
  }
  // console.log("pre" , digits)
  if (carry) {
    digits.unshift(carry);
  }
  // console.log("post" , digits)

  return digits;
};
