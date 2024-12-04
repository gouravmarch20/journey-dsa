// /**
//  * @param {string} s
//  * @return {number}
//  */
// var longestPalindromeSubseq = function(s) {
//     const n = s.length
//   let dp = Array(n).fill(0).map(() => Array(n).fill(0));

//   for (let i=0; i<n; i++) dp[i][i] = 1
 
//   for (let gap=2; gap<=n; gap++) {
//       for (let i=0; i<n-gap+1; i++) {
//         j = i+gap-1
//       if (s[i] == s[j]) {
//           dp[i][j] = 2 + dp[i+1][j-1]
//       }
//       else {
//           dp[i][j] = Math.max(dp[i+1][j], dp[i][j-1])
//       }
//     }
//   }
//   return dp[0][n-1]
// };