/**
 * @param {string} s
 * @return {number}
 */
var numberOfSubstrings = function (s) {
    // ! not maxi ask cnt ==> total cnt atleast 3 char abc
  let cnt = 0,
    n = s.length;
  for (let l = 0; l < n; l++) {
    let map = new Map();
    for (let r = l; r < n; r++) {
      map.set(s[r], map.get(s[r] + 1));
      if (map.size >= 3) {
        cnt++;
      }
      if (map.size > 3) break;
    }
  }
  return cnt;
};
