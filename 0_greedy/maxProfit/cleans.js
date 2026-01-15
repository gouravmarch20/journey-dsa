/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
  let ans = 0;
  for (let i = 0; i < prices.length; i++) {
    const profit = prices[i] - prices[i - 1];
    if (profit > 0) {
      ans += profit;
    }
  }
  return ans;
};
