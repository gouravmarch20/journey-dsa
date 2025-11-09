/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function (nums) {
  let leftP = [];
  let rightP = [];
  for (let i = 0; i < nums.length; i++) {
    if (i == 0) {
      leftP.push(1);
    } else {
      leftP.push(nums[i - 1] * leftP[i - 1]);
    }
  }

  for (let i = nums.length - 1; i >= 0; i--) {
    console.log("d", nums[i]);
    if (i == nums.length - 1) {
      rightP[i] = 1;
    } else {
      // ! issue not  rightP[i]
      // ! nums[i + 1]
      rightP[i] = nums[i + 1] * rightP[i + 1];
    }
  }
  console.log("rightP", rightP);

  let res = [];
  for (let i = 0; i < nums.length; i++) {
    res[i] = leftP[i] * rightP[i];
  }
  return res;
};
