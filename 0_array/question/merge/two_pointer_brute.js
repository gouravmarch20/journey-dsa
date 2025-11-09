/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */

var merge = function (nums1, m, nums2, n) {
  let p1 = m - 1,
    p2 = n - 1;
  let i = 0,
    j = 0;
  let res = [];
  while (p1 >= 0 && p2 >= 0) {
    console.log("loop_1");
    if (nums1[i] <= nums2[j]) {
      res.push(nums1[i]);
      i++;
      p1--;
    } else {
      res.push(nums2[j]);
      p2--;
      j++;
    }
  }
  while (p1 >= 0) {
    console.log("loop_2");

    res.push(nums1[i]);
    i++;
    p1--;
  }
  while (p2 >= 0) {
    res.push(nums2[j]);
    j++;
    p2--;
  }
  console.log("dd", res);
  return res;
};
