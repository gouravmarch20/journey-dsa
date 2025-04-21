const helper = (s, index, openClose) => {
  // console.log("--", openClose, starCnt);
  if (index == s.length) {
    if (openClose == 0) return true;
    return false;
  }
  if (openClose < 0) return false;
  const val = s[index];

  if (val === "(") {
    return helper(s, index + 1, openClose + 1);
  } else if (val === ")") {
    // openClose -= 1;
    return helper(s, index + 1, openClose - 1);
  } else if (val === "*") {
    return (
      helper(s, index + 1, openClose + 1) ||
      helper(s, index + 1, openClose - 1) ||
      helper(s, index + 1, openClose)
    );
  }
};
var checkValidString = function (s) {
  return helper(s, 0, 0);
};
const r = checkValidString("((");
console.log(r);
