function kDistinctChar(s, k) {
  //your code goes here
  let l = 0,
    maxi = 0;
  let map = new Map();
  for (let r = 0; r < s.length; r++) {
    const currentChar = s[r];
    map.set(currentChar, (map.get(currentChar) || 0) + 1);
    if (map.size > k) {
      let leftChar = s[l];
      map.set(leftChar, map.get(leftChar) - 1);
      l++;

      if (map.get(leftChar) == 0) {
        map.delete(leftChar);
      }
    }
    if (map.size <= k) {
      maxi = Math.max(maxi, r - l + 1);
    }
  }
  return maxi;
}
const s = "aababbcaacc";
const k = 2;
const l = kDistinctChar(s, k);
console.log("-", l);
