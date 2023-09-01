/**
 * @param {number[][]} mat
 * @param {number} r
 * @param {number} c
 * @return {number[][]}
 */
var matrixReshape = function(mat, r, c) {
    if (mat.length * mat[0].length !== r * c) return mat
    let nums = [].concat(...mat)
    let newMat = []
    for (let i =0; i < r; i++) {
        let row = []
        for (let j = 0; j < c; j++) {
            row.push(nums.shift())
        }
        newMat.push(row)
    }
    return newMat
};