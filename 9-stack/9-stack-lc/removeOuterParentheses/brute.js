/**
 * @param {string} s
 * @return {string}
 */
const removeOuter = (str) => {
  return str.slice(1, str.length - 1);
};
var removeOuterParentheses = function (s) {
  let validP = [];
  let open = 0,
    close = 0;
  let stackS = ""; // m1 stack is better
  let result = "";
  //
  for (let st of s) {
    stackS += st;
    if (st === "(") {
      open += 1;
    } else {
      close += 1;
    }
    if (open == close) {
      validP.push(stackS);
      stackS = "";
      open = 0;
      close = 0;
    }
  }
  for (let validPara of validP) {
    result += removeOuter(validPara);
  }
  return result;
  // console.log("debug" , validP)
};
