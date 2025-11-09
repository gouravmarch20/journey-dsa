/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function (height) {
  let left = 0,
    right = height.length - 1,
    area = 0;
  while (left < right) {
    let h = Math.min(height[left], height[right]);
    let width = right - left;
    //
    area = Math.max(area, h * width);
    if (height[left] < height[right]) {
      left++;
    } else {
      right--;
    }
  }
  return area;
};
