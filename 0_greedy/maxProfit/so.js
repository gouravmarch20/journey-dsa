/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
  let profit = 0;
  let nextH = 0;
  let low = 0,
    n = prices.length;
  while (nextH < n) {
    //
    while (prices[low] >= prices[low + 1]) {
      low += 1;
    }
    nextH = low;

    while (
      prices[nextH] <= prices[low] ||
      (n > nextH && prices[nextH] <= prices[nextH + 1])
    ) {
      nextH = nextH + 1;
    }

    // console.log("debug" , nextH , low , prices[nextH]  , prices[low])
    if (nextH < n) {
      profit += prices[nextH] - prices[low];
    }
    low = nextH + 1;
    nextH = nextH + 1;
    //
  }
  console.log("debug__", profit);
  return profit;
};
