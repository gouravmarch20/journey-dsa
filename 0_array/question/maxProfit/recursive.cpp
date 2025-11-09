#include <algorithm>
#include <climits>
#include <deque>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

class Solution {
 public:
  void helperMaxProfit(vector<int>& prices, int i, int& minBuyPrice,
                       int& maxProfit) {
    if (i == prices.size()) {
      return;
    }

    if (prices[i] < minBuyPrice) {
      minBuyPrice = prices[i];
    }
    int todayProfit = prices[i] - minBuyPrice;
    maxProfit = max(todayProfit, maxProfit);
    helperMaxProfit(prices, i + 1, minBuyPrice, maxProfit);
  }
  int maxProfit(vector<int>& prices) {
    int minBuyPrice = INT_MAX;
    int maxProfit = INT_MIN;
    helperMaxProfit(prices, 0, minBuyPrice, maxProfit);
    return maxProfit;
  }
};

int main() {
  // Create an instance of the Solution class
  Solution solution;

  // Define the input stock prices
  vector<int> prices = {7, 1, 5, 3, 6, 4};

  // Call the maxProfit function to calculate the maximum profit
  int result = solution.maxProfit(prices);

  // Print the result
  cout << "Maximum Profit: " << result << endl;

  return 0;
}
