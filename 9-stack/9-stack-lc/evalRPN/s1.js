/**
 * @param {string[]} tokens
 * @return {number}
 */
var evalRPN = function (tokens) {
  let stack = [];
  for (let token of tokens) {
    const type = Number(token);
    let toPush;
    let expression;
    //! m1 :: learning ==> 0 as falsy =-> as operator case mai gott but
    // if(type){
    //     toPush = token;
    // }
    const num = Number(token);

    if (!isNaN(num)) {
      toPush = num;
    } else {
      const eS = stack.pop();
      const eF = stack.pop();
      //   expression = eF + token + eS ;
      //
      expression = `${eF} ${token} ${eS} `;

      //   const res = (eS) token (eF)
      if (token == "/" && eF == 0) {
        toPush = 0;
      } else {
        //*learning
        //  const res =  Math.floor(eval(expression))
        //  const res =  (eval(expression)).toFixed(0)
        const res = parseInt(eval(expression));

        toPush = res;
      }
    }

    console.log("pre_push", toPush, expression);
    stack.push(toPush);
  }
  //!m3 number type is mush
  return Number(stack.pop());
};
