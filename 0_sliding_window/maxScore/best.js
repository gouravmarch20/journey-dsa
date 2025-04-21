/**
 * @param {number[]} cardPoints
 * @param {number} k
 * @return {number}
 */
var maxScore = function (cardPoints, k) {
  let range = k;
  let leftScore = 0;
  let rightScore = 0;
  let n = cardPoints.length;
  let maxPoint = 0;
  //
  for (let i = 0; i < k; i++) {
    leftScore += cardPoints[i];
  }

  while (range >= 0) {
    if (range != k) {
      leftScore -= cardPoints[range];
    }
    console.log("leftScore", leftScore);
    if (range != k) {
      rightScore += cardPoints[n - (k - range)];
    }

    range--;
    maxPoint = Math.max(maxPoint, rightScore + leftScore);
  }
  return maxPoint;
};
