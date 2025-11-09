/**
 * @param {number[]} nums
 * @return {number[]}
 */
const merge = (leftS, rightS) => {
  let res = [];
  let i = 0,
    j = 0;
  while (i < leftS.length && j < rightS.length) {
    if (leftS[i] < rightS[j]) {
      res.push(leftS[i]);
      i++;
    } else {
      res.push(rightS[j]);
      j++;
    }
  }
  return [...res, ...leftS.slice(i), ...rightS.slice(j)];
};
var sortArray = function (nums) {
  if (nums.length <= 1) return nums;
  let mid = Math.floor(nums.length / 2);
  let leftS = sortArray(nums.slice(0, mid));
  let rightS = sortArray(nums.slice(mid)); // ! above mai we exclude --> mid
  return merge(leftS, rightS);
};
