/**
 * @param {number[]} nums
 * @return {number[]}
 */
var nextGreaterElements = function (nums) {
  let doubleNums = [...nums, ...nums];
  let n = doubleNums.length;
  let stack = [];
  stack.push(-1);
  let result = [-1];

  for (let i = n - 2; i >= 0; i--) {
    // console.log("Debu_" , i , doubleNums[i] , stack,result)
    let top = stack.pop();

    while (stack.length && doubleNums[i] >= top) {
      top = stack.pop();
    }
    if (doubleNums[i] >= top) {
      result.push(-1);
    } else {
      result.push(top);
      stack.push(top);
    }
    stack.push(doubleNums[i]);
  }
  // console.log("debug_" , result)
  return result.slice(nums.length).reverse();
};
