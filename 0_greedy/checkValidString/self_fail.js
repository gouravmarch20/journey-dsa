/**
 * @param {string} s
 * @return {boolean}
 */

var checkValidString = function (s) {
  let openClose = 0;
  let starCnt = 0;
  for (const val of s) {
    console.log("--", openClose, starCnt);
    if (val === "(") {
      if (openClose < 0 && starCnt == 0) {
        return false;
      }
      openClose++;
    } else if (val === ")") {
      if (openClose <= 0 && starCnt == 0) {
        return false;
      }
      //   else if (openClose == 0 && starCnt > 0) {
      //     starCnt--;
      //   }
      openClose--;
    } else if (val === "*") {
      console.log();
      if (openClose <= 0) {
        continue;
      }
      starCnt++;
    }
  }
  console.log("-----", openClose, starCnt);
  if (openClose == 0) {
    return true;
  } else if (openClose < 0) {
    if (openClose + starCnt >= 0) return true;
    return false;
  } else {
    console.log("the_");
    if (openClose <= starCnt) return true;
    return false;
  }
};

const r = checkValidString(
  "(((((*(((((*((**(((*)*((((**))*)*)))))))))((*(((((**(**)"
);
console.log(r);
