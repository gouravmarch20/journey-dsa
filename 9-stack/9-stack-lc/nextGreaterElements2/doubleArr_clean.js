/**
 * @param {number[]} nums
 * @return {number[]}
 */
var nextGreaterElements = function (nums) {
  let arr = [...nums, ...nums];
  let n = arr.length;
  let stack = [];
  let result = Array(n).fill(-1);
  //   ! pre push __ for next greater
  stack.push(arr[n - 1]);

  for (let i = n - 2; i >= 0; i--) {
    while (stack.length) {
      // * not remove early __ delay remove
      let top = stack[stack.length - 1];
      if (arr[i] < top) {
        result[i] = top;
        break;
      } else {
        // *  delay remove

        stack.pop();
      }
    }

    stack.push(arr[i]);
  }
  return result.slice(0, n / 2);
};
