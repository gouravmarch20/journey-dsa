var plusOne = function (digits) {
  let carry = 1;
  let result = [];

  for (let i = digits.length - 1; i >= 0; i--) {
    let sum = digits[i] + carry;
    let digit = sum % 10;
    carry = Math.floor(sum / 10);
    result.push(digit);
  }

  if (carry > 0) {
    result.push(carry);
  }

  // Reverse the result since we filled it backwards
  result.reverse();
  return result;
};

const r = plusOne([6, 1, 4, 5, 3, 9, 0, 1, 9, 5, 1, 8, 6, 7, 0, 5, 5, 4, 3]);
console.log(r);
