/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (s) {
  let sta = [];
  // if(s.length % 2 != 0) return false ;
  for (st of s) {
    if (st === "(" || st === "{" || st === "[") {
      sta.push(st);
    } else {
      let top = sta.pop(st);
      if (!top) return false;

      if (st === ")") {
        if (top != "(") return false;
      } else if (st === "}") {
        if (top != "{") return false;
      } else if (st === "]") {
        if (top != "[") return false;
      }
      //
    }
  }
  //!m1 :: stack must be emapthy ==> "({" case
  return sta.length == 0;
};
