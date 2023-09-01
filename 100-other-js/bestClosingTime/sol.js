// /**
//  * @param {string} customers
//  * @return {number}
//  */
// var bestClosingTime = function(customers) {
//     const penalty = new Array(customers.length).fill(0)
//     let NLeft = 0
//     let YRight = customers.split('').filter(el => el === 'Y').length
//     for (let i = 0; i < customers.length; i++) {
//         const c = customers[i]
//         if (c === 'Y') YRight--
//         penalty[i] = (NLeft + YRight)
//         if (c === 'N') NLeft++
//     }
//     const minPenalty = Math.min(...penalty)
//     let hourWithMinPenalty = penalty.indexOf(minPenalty)
//     return hourWithMinPenalty > 0 || customers[0] === 'Y' ? hourWithMinPenalty  + 1 : 0
// };