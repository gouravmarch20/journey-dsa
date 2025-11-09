/**
 * @param {string} s
 * @return {string}
 */

var removeOuterParentheses = function (s) {
  let result = "";
  let stack = [];
  //
  for (let st of s) {
    if (st === "(") {
      stack.push(st);
      let level = stack.length;

      if (level > 1) {
        result += st;
      }
    } else {
      // !m1 pre pop==>
      let level = stack.length;
      // !m2  not equal sign>

      if (level > 1) {
        result += st;
      }
      stack.pop();
    }
  }

  return result;
  // console.log("debug" , validP)
};
