// /**
//  * @param {number} n
//  * @param {number} target
//  * @return {number}
//  */
// var minimumPossibleSum = function(n, target) {
//     const disAllowed = new Set()
//     let answer = []
//     let i = 1
//     while(answer.length < n) {
//         if (!disAllowed.has(i)) {
//             disAllowed.add(target - i)
//             answer.push(i)
//         }
//         i++
//     }
//     return answer.reduce((a,b) => a+b,0)
// };