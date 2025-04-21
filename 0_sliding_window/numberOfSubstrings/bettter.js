/**
 * @param {string} s
 * @return {number}
 */

var numberOfSubstrings = function (s) {
  let map = new Map();
  let cnt = 0;
  for (let i = 0; i < s.length; i++) {
    const currChar = s[i];
    map.set(currChar, i);
    // !m1 : if (map.length == 3) {
    if (map.size == 3) {
      // !m2 ::       const arr = [...map.key()];

      const arr = [...map.values()];

      cnt += 1 + Math.min(arr[0], arr[1], arr[2]);
    }
  }
  return cnt;
};
