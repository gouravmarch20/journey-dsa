// /**
//  * @param {number[][]} mat
//  * @return {number[]}
//  */
// var rowAndMaximumOnes = function(mat) {
//     let ans = [0,0]
//     for (let i = 0; i < mat.length; i++) {
//         let ones = mat[i].filter(el => el === 1).length
//         if (ones > ans[1]) ans = [i, ones]
//     }
//     return ans
// };