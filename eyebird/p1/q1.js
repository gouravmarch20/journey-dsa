// 926. Flip String to Monotone Increasing
// N noble people from the court of King Bob are standing in a line (1 to M. Each person is either wise or strong (not both). His prime advisor advised Bob that all wise people should be standing first followed by strong people (first means lower index). Bob cannot change the order of the noble people standing but he can do one thing ask his court magician to transform the type of person standing at any position. You are given the type of N persons as a string ('S' means strong and 'W' means wise).

// Determine the minimum number of times the magician must apply his trick so that the ordering is as per his advisor's advice.

// Notes

// • It is possible that after applying the magic trick, the number of either form of people becomes 0.

// • Bob can ask his magician to change the same type of person several times.

// TC 1:
// Input : n = 10, str = "SSWWSWWSWW"
// Output : 4

// TC 2:
// Input : n = 5, str = "SSSSS"
// Output : 0
function minFlipsBruteForce(s) {
  let n = s.length;
  let ans = n;

  for (let i = 0; i <= n; i++) {
    let flips = 0;

    // left part -> make all W
    for (let j = 0; j < i; j++) {
      if (s[j] === "S") flips++;
    }

    // right part -> make all S
    for (let j = i; j < n; j++) {
      if (s[j] === "W") flips++;
    }
    console.log("debug", i, flips, ans);

    ans = Math.min(ans, flips);
  }
  return ans;
}

console.log(minFlipsBruteForce("SWS"));
// console.log(minFlipsBruteForce("SSWWSWWSWW")); // 4
// console.log(minFlipsBruteForce("SSSSS")); // 0
// console.log(minFlipsBruteForce("WSWSWS")); // 2
