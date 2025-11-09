var plusOne = function (digits) {
  for (let i = digits.length - 1; i >= 0; i--) {
    if (digits[i] === 9) {
      digits[i] = 0;
    } else {
      // ! ==> if digits ... 9 then only loop  too add carry +1 no impact in other

      digits[i]++;
      return digits;
    }
  }
  digits.unshift(1);
  return digits;
};
