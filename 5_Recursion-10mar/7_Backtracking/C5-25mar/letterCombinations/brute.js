/**
 * @param {string} digits
 * @return {string[]}
 */
const obj = {
    2 : 'abc',
    3 : 'def',
    4 : 'ghi',
    5 : 'jkl',
    6 : 'mno',
    7 : 'pqrs',
    8 : 'tuv',
    9 : 'wxyz',
}
var letterCombinations = function(digits) {
    if (digits.length === 1) {
       const res = obj[digits[0]]
        console.log(res.split(""));
    }
};
letterCombinations('23');