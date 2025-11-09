/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function (digits) {
  let str = "";
  for (let val of digits) {
    str += val; // No need to use Number(val), since val is already a number
  }
  console.log(str);

  // Use BigInt to handle large numbers
  let bigNum = BigInt(str) + 1n;
  let res = [];

  for (let val of bigNum.toString()) {
    res.push(Number(val));
  }

  return res;
};

const r = plusOne([6, 1, 4, 5, 3, 9, 0, 1, 9, 5, 1, 8, 6, 7, 0, 5, 5, 4, 3]);
console.log(r);
