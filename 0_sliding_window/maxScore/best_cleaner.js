/**
 * Calculates the maximum score by picking k cards from either end.
 * @param {number[]} cardPoints - Array of card point values.
 * @param {number} k - Number of cards to pick.
 * @return {number} - Maximum score achievable.
 */
var maxScore = function (cardPoints, k) {
  const n = cardPoints.length;
  let leftSum = 0;
  let rightSum = 0;
  let maxPoints = 0;

  // Initial sum: take all k cards from the left
  for (let i = 0; i < k; i++) {
    leftSum += cardPoints[i];
  }

  maxPoints = leftSum;

  // Slide the window: move cards from left to right
  for (let i = 1; i <= k; i++) {
    leftSum -= cardPoints[k - i]; // remove from left end
    rightSum += cardPoints[n - i]; // add from right end
    maxPoints = Math.max(maxPoints, leftSum + rightSum);
  }

  return maxPoints;
};
