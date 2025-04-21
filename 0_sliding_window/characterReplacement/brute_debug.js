var characterReplacement = function (s, k) {
  let n = s.length;
  let maxi = 0;

  for (let l = 0; l < n; l++) {
    let map = new Map();
    let maxF = 0;
    let maxChar = ""; // keep track of character with max frequency

    for (let r = l; r < n; r++) {
      map.set(s[r], (map.get(s[r]) || 0) + 1);

      if (maxF < map.get(s[r])) {
        maxF = map.get(s[r]);
        maxChar = s[r]; // update maxChar
      }

      const windowSize = r - l + 1;
      const change = windowSize - maxF;

      if (change <= k) {
        maxi = Math.max(maxi, windowSize);
        console.log(
          `Valid window: "${s.slice(
            l,
            r + 1
          )}" | maxChar: '${maxChar}' | maxF: ${maxF} | changes needed: ${change}`
        );
      } else {
        console.log(
          `Break: "${s.slice(
            l,
            r + 1
          )}" | maxChar: '${maxChar}' | maxF: ${maxF} | changes needed: ${change}`
        );
        break;
      }
    }

    console.log("-- End of l =", l, "| Current max length:", maxi, "--\n");
  }

  return maxi;
};

const r = characterReplacement("ZXYAA", 2);
console.log("Result:", r);
