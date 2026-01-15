/**
 * @param {number} n
 * @param {number} k
 * @return {number[][]}
 */
var combine = function (n, k) {
  let result = [];
  function backT(curr, start) {
    if (curr.length == k) {
      result.push([...curr]);
      return;
    }

    for (let i = start; i <= n; i++) {
      curr.push(i);
      //! m not start ___ loop wise next decide  
      // backT(curr ,  start + 1)
      backT(curr, i + 1);
      curr.pop();
    }
  }
  backT([], 1);
  return result;
};
