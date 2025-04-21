function kDistinctChar(s, k) {
  //your code goes here
  let l = 0,
    n = s.length,
    maxi = 0;
  for (let l = 0; l < n; l++) {
    let map = new Map();
    for (let j = l; j < n; j++) {
      map.set(s[j], (map.get(s[j]) || 0) + 1);
      if (map.size > k) break;
      //   console.log("-",  l, l, maxi);
      //   !m1:: confusion what is l , l      maxi = Math.max(maxi, j - l + 1);

      maxi = Math.max(maxi, j - l + 1);
    }
    console.log("-", maxi);
  }
  return maxi;
}
const s = "aababbcaacc";
const k = 2;
const l = kDistinctChar(s, k);
console.log("-", l);
