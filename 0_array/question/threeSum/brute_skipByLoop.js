/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function (nums) {
  let n = nums.length;

  let result = [];
  nums = nums.sort((a, b) => a - b);

  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      for (let k = j + 1; k < n; k++) {
        if (nums[i] + nums[j] + nums[k] == 0) {
          let arr = [nums[i], nums[j], nums[k]];
          console.log("pre_", i, j, k);

          result.push(arr);

          console.log(
            "the_i",
            i,
            i + 1 < n,
            arr[i] == arr[i + 1],
            arr[i],
            arr[i + 1]
          );

          while (j + 1 < n && nums[j] == nums[j + 1]) {
            j = j + 1;
          }
          while (i + 1 < n && nums[i] == nums[i + 1]) {
            i = i + 1;
          }
          while (k + 1 < n && nums[k] == nums[k + 1]) {
            k = k + 1;
          }
          console.log("post_", i, j, k);
        }
      }
    }
  }
  return result;
};
