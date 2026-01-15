/**
 * @param {number[]} nums
 * @return {number[]}
 */

var nextGreaterElements = function (nums) {
  let n = nums.length;
  let stack = [-1];
  let result = [];

  for (let i = n * 2 - 2; i >= 0; i--) {
    let curr = nums[i % n];
    let top = stack[stack.length - 1];
    while (stack.length) {
      if (curr < top) {
        result[i % n] = top;
        break;
      } else {
        stack.pop();
        top = stack[stack.length - 1];
      }
    }
    // ! the case to pus in result 
    if (stack.length == 0) {
      result[i % n] = -1;
    }
    stack.push(curr);
  }
  console.log("result__9", result);

  return result;
};
