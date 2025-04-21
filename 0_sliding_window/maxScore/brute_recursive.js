/**
 * Brute-force approach (O(2^k)): Try all combinations of taking cards from left or right
 * @param {number[]} cardPoints
 * @param {number} k
 * @return {number}
 */
var maxScore = function(cardPoints, k) {
    const dfs = (left, right, k) => {
      if (k === 0) return 0;
  
      // Choose either left or right and recurse
      return Math.max(
        cardPoints[left] + dfs(left + 1, right, k - 1),
        cardPoints[right] + dfs(left, right - 1, k - 1)
      );
    };
  
    return dfs(0, cardPoints.length - 1, k);
  };
  