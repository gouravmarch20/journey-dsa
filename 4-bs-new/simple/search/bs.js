/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function (nums, target) {
  let l = 0,
    r = nums.length - 1;
  while (l <= r) {
    let m = Math.floor((l + r) / 2);
    console.log("d", m, l, r);

    if (nums[m] == target) {
      return m;
    } //!m1 :: == equal to sign needed
    else if (nums[l] <= nums[m]) {
      if (nums[l] <= target && target < nums[m]) {
        r = m - 1;
      } else {
        l = m + 1;
      }
    } else {
      //!m2 :: nums[m] <= target ==> equal to sign needed

      if (nums[m] <= target && target <= nums[r]) {
        l = m + 1;
      } else {
        r = m - 1;
      }
    }
  }
  return -1;
};
