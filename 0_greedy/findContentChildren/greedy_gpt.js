/**
 * Finds the maximum number of content children given cookie sizes.
 * Each child can be content with one cookie of size >= their greed factor.
 *
 * @param {number[]} g - Greed factors of the children.
 * @param {number[]} s - Sizes of the cookies.
 * @return {number} - Maximum number of content children.
 */
var findContentChildren = function (g, s) {
  // Sort greed factors and cookie sizes in ascending order
  const greed = g.sort((a, b) => a - b);
  const cookies = s.sort((a, b) => a - b);

  let child = 0;
  let cookie = 0;

  // Try to satisfy each child with the smallest sufficient cookie
  while (child < greed.length && cookie < cookies.length) {
    if (greed[child] <= cookies[cookie]) {
      child++; // Child is content
    }
    cookie++; // Move to the next cookie
  }

  return child;
};
