/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
  let max = 0;
  let right = 0;
  let left = 0;
  let n = s.length;
  let hash = {};
  while (right < n) {
    const element = s[right];
    if (!hash[element]) {
      // !m1:: 0 cosider  as falsy 
      hash[element] = String(right);
      right++;
    } else {
      const index = hash[element];
      if (left <= index && left < right) {
        left++;
      } else {
        hash[element] = right;

        right++;
      }
    }
    // console.log("---", right, left, hash, max);

    max = Math.max(max, right - left);
  }
  return max;
  //
};