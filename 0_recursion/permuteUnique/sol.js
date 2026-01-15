/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var permuteUnique = function (nums) {
  nums.sort((a, b) => a - b); // <-- required

  let result = [];
  function permute(path, arr) {
    let n = arr.length;
    if (arr.length == 0) {
      result.push([...path]);
      return;
    }
    for (let i = 0; i < n; i++) {
      if (i > 0 && arr[i] == arr[i - 1]) continue;

      path.push(arr[i]);
      permute(path, [...arr.slice(0, i), ...arr.slice(i + 1)]);
      path.pop();
    }
  }
  permute([], nums);
  return result;
};
