/**
 * @param {number[]} bills
 * @return {boolean}
 */
var lemonadeChange = function (bills) {
    let fiveCnt = 0;
    let tenCnt = 0;
  
    for (const bill of bills) {
      if (bill === 5) {
        fiveCnt++;
      } else if (bill === 10) {
        if (fiveCnt === 0) return false;
        fiveCnt--;
        tenCnt++;
      } else if (bill === 20) {
        // Prefer to give one $10 + one $5 (greedy), fallback to three $5s
        if (tenCnt >= 1 && fiveCnt >= 1) {
          tenCnt--;
          fiveCnt--;
        } else if (fiveCnt >= 3) {
          fiveCnt -= 3;
        } else {
          return false;
        }
      } else {
        // Unexpected bill value
        return false;
      }
    }
  
    return true;
  };
  