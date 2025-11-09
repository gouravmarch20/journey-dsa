/**
 * @param {string[]} tokens
 * @return {number}
 */

var evalRPN = function (tokens) {
  let stack = [];
  let opM = {
    "+": function (n1, n2) {
      return n1 + n2;
    },
    "-": function (n1, n2) {
      return n1 - n2;
    },
    "*": function (n1, n2) {
      console.log("debug_m", n1, n2, n1 * n2);
      return n1 * n2;
    },
    "/": function (n1, n2) {
      if (n2 == 0) return 0;
      // m1: forgot to parseInt
      return parseInt(n1 / n2);
    },
  };
  for (token of tokens) {
    if (isNaN(token)) {
      let eS = stack.pop();
      let eF = stack.pop();
      let res = opM[token](Number(eF), Number(eS));
      console.log("debug__s", res, token);
      stack.push(res);
    } else {
      stack.push(token);
    }
  }
  // console.log("debug" , stack)

  //  return 5
  return Number(stack.pop());
};
