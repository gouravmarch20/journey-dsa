/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
var characterReplacement = function (s, k) {
  let n = s.length;
  let maxiCnt = 0;
  let maxF = 0;
  let l = 0;
  let map = new Map();
  for (let r = 0; r < n; r++) {
    map.set(s[r], (map.get(s[r]) || 0) + 1);
    if (maxF < map.get(s[r])) {
      maxF = map.get(s[r]);
    }
    let change = r - l + 1 - maxF;
    if (change <= k) {
      maxiCnt = Math.max(maxiCnt, r - l + 1);
    } else {
      // !m ::: need to delete ==>
      map.set(s[l], map.get(s[l]) - 1);
      l++;
    }
  }
  return maxiCnt;
};
