/**
 * @param {string} digits
 * @return {string[]}
 */
var letterCombinations = function (digits) {
  let result = [];
  const phoneMap = {
    1: "",
    2: "abc",
    3: "def",
    4: "ghi",
    5: "jkl",
    6: "mno",
    7: "pqrs",
    8: "tuv",
    9: "wxyz",
  };

  function combination(path, start) {
    if (start > digits.length) return;
    if (start == digits.length) {
      result.push(path);
      return;
    }
    let curr = phoneMap[digits[start]];
    for (let i = 0; i < curr.length; i++) {
      // path.push(curr[i]);
      // path += curr[i]
      combination(path + curr[i], start + 1);
      // path.pop()
    }
  }

  combination("", 0);

  return result;
};
