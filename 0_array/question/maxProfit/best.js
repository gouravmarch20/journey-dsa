/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
  let maxi = prices[0],
    profit = 0;
  let mini = prices[0];
  let n = prices.length;
  for (let i = 0; i < n; i++) {
    let currPrice = prices[i];

    if (mini > currPrice) {
      mini = currPrice;
      maxi = currPrice;
    }

    maxi = Math.max(maxi, currPrice);
    profit = Math.max(profit, maxi - mini);
  }
  return profit;
};
