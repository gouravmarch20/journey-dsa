/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
var characterReplacement = function (s, k) {
  let n = s.length;
  let maxi = 0;
  for (let l = 0; l < n; l++) {
    let map = new Map();
    let maxF = 0;

    for (let r = l; r < n; r++) {
      map.set(s[r], (map.get(s[r]) || 0) + 1);

      if (maxF < map.get(s[r])) {
        maxF = map.get(s[r]);
      }
      // ! making case fail , how to decide it continuse sting
      const change = r - l + 1 - maxF;
      if (change <= k) {
        maxi = Math.max(maxi, r - l + 1);
      } else {
        break;
      }
      console.log("change", change, r, l);
    }
    console.log("--", maxi, "--", map);
  }
  return maxi;
};

const r = characterReplacement("ZXYAA", 2);
console.log(r);
