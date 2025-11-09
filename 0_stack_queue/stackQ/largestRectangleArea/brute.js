/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function (height) {
  let n = height.length;
  //
  let area = 0;
  for (let i = 0; i < n; i++) {
    let selectedH = height[i];
    for (let j = i + 1; j < n; j++) {
      let curr = height[j];
      const h = Math.min(selectedH, curr);
      const width = j - i;
      area = Math.max(area, width * h);
    }
  }
  return area;
};
