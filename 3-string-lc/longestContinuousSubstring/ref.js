// /**
//  * @param {string} s
//  * @return {number}
//  */
// var longestContinuousSubstring = function(s) {
//     let answer = 1
//     let currentStreak = 1
//     for (let i = 1; i < s.length; i++) {
//         if (s.charCodeAt(i) === s.charCodeAt(i-1)+1) currentStreak++
//         else currentStreak = 1
//         answer = Math.max(answer, currentStreak)
//     }
//     return answer
// };