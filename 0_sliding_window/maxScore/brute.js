/**
 * Brute-force iterative approach (non-recursive)
 * @param {number[]} cardPoints
 * @param {number} k
 * @return {number}
 */
var maxScore = function (cardPoints, k) {
  let maxScore = 0;

  for (let i = 0; i <= k; i++) {
    let leftScore = 0;
    let rightScore = 0;

    // Take i cards from the left
    for (let l = 0; l < i; l++) {
      leftScore += cardPoints[l];
    }

    // Take k - i cards from the right
    for (let r = 0; r < k - i; r++) {
      rightScore += cardPoints[cardPoints.length - 1 - r];
    }

    maxScore = Math.max(maxScore, leftScore + rightScore);
  }

  return maxScore;
};
