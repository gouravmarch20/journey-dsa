/**
 * @param {number} x
 * @return {number}
 */
var reverse = function (x) {
  let revNo = 0;
  let xCopy = Math.abs(x);

  while (xCopy > 0) {
    let rem = xCopy % 10;
    revNo = revNo * 10 + rem;
    xCopy = Math.floor(xCopy / 10);
  }
  let maxLimit = Math.pow(2, 31) - 1; // 2,147,483,647
  let minLimit = -Math.pow(2, 31); // -2,147,483,648

  if (revNo > maxLimit || revNo < minLimit) {
    return 0;
  }

  if (x > 0) {
    return revNo;
  }
  return -revNo;
};
