/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
var combinationSum2 = function (candidates, target) {
  let result = [];
  let n = candidates?.length;
  candidates.sort((a, b) => a - b);

  function combination(path, start, target) {
    if (target == 0) {
      result.push([...path]);
      return;
    }

    if (target < 0) return;
    //
    for (let i = start; i < n; i++) {
      if (i > start && candidates[i] === candidates[i - 1]) continue;

      path.push(candidates[i]);
      combination(path, i + 1, target - candidates[i]);
      path.pop();
    }
  }
  combination([], 0, target);
  return result;
};
