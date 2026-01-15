/**
 * @param {number} k
 * @param {number} n
 * @return {number[][]}
 */
var combinationSum3 = function (k, n) {
  let result = [];

  function combination(path, target, start) {
    if (path.length >= k) {
      if (path.length == k && target == 0) {
        result.push([...path]);
      }
      return;
    }
    for (let i = start; i <= 9; i++) {
      path.push(i);
      combination(path, target - i, i + 1);
      path.pop();
    }
  }
  combination([], n, 1);
  return result;
};
