/**
 * @param {number[]} bills
 * @return {boolean}
 */
var lemonadeChange = function (bills) {
  function dfs(index, fiveCnt, tenCnt) {
    if (index === bills.length) return true;

    const bill = bills[index];

    if (bill === 5) {
      return dfs(index + 1, fiveCnt + 1, tenCnt);
    }

    if (bill === 10) {
      if (fiveCnt === 0) return false;
      return dfs(index + 1, fiveCnt - 1, tenCnt + 1);
    }

    if (bill === 20) {
      // Try path 1: give one $10 and one $5
      if (tenCnt >= 1 && fiveCnt >= 1) {
        if (dfs(index + 1, fiveCnt - 1, tenCnt - 1)) return true;
      }
      // Try path 2: give three $5s
      if (fiveCnt >= 3) {
        if (dfs(index + 1, fiveCnt - 3, tenCnt)) return true;
      }
      return false;
    }

    return false; // Invalid bill
  }

  return dfs(0, 0, 0);
};
