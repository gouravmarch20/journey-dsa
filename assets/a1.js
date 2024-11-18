/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
const recCombi = (can, sum, i, ans, curr) => {
   
  if (sum === 0) {
     const res = [...curr]
    ans.push(res);
    return;
  }
  if (sum < 0 || i >= can.length) {
    return;
  }
  const k = can[i];
  curr.push(k);

  recCombi(can, sum - can[i], i + 1, ans, curr);

  curr.pop();
  if (i < can.length && can[i] === can[i + 1]) {
    while (i < can.length && can[i + 1] === can[i]) {
      i++;
    }
  }

  
  recCombi(can, sum, i + 1, ans, curr);
};
var combinationSum2 = function (candidates, target) {
  candidates.sort();
  const ans = [];
  const curr = [];
  recCombi(candidates, target, 0, ans, curr);
  console.log(ans);
};
combinationSum2( [10,1,2,7,6,1,5] , 8);
// [
//   [1,1,6],
//   [1,2,5],
//   [1,7],
//   [2,6]
//   ]