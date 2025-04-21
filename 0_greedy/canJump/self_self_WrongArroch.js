/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function (nums) {
  nums.sort((a, b) => a - b);
  let i = 0;
  let element = nums[i];
  let n = nums.length;
  console.log("element", element);
  if (n == 1 && element == 0) {
    return true;
  }

  while (i < n) {
    console.log("", i, element);

    element = nums[i];
    if (element == 0) return false;

    i += nums[i];
    if (i == n) return true;
  }
  // if()
  return true;
};
