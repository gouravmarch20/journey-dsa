/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
var combinationSum = function (candidates, target) {
  let result = [];
  let n = candidates?.length;
  function combination(path, start, target) {
    if (target == 0) {
      result.push([...path]);
      return;
    }
    if (target < 0) return;

    for (let i = start; i < n; i++) {
      path.push(candidates[i]);
      combination(path, i, target - candidates[i]);
      path.pop();
    }
  }
  combination([], 0, target);
  return result;
};
