/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
  let map = {},
    maxi = 0,
    i = 0,
    j = 0,
    n = s.length;
  if (s.length == 0) return 0;
  //
  for (; j < n; j++) {
    let curr = s[j];
    //!m1::   equal case too ___ to remove index if include
    //!m2::  map[curr] == 0 consider as falsy
    if (map[curr] != undefined && map[curr] >= i) {
      //!m4 ::: 
      //  i += map[curr] + 1 ;
      i = map[curr] + 1;
    }
    //!m3 :: +1 must to cnt window
    map[curr] = j;

    maxi = Math.max(maxi, j - i + 1);
  }
  return maxi ? maxi : 1;
};
