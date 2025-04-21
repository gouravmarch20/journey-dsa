/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
  let max = 0;
  for (let i = 0; i < s.length; i++) {
    let obj = {};

    let cnt = 0;
    for (let j = i; j < s.length; j++) {
      if (!obj[s[j]]) {
        obj[s[j]] = 1;
      } else {
        break;
      }
      cnt++;
    }

    max = Math.max(cnt, max);
  }
  return max;
  //
};

const r = lengthOfLongestSubstring("abcbabcde");
console.log("d", r);
