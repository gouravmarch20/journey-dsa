/**
 * @param {number[][]} mat
 * @return {number[][]}
 */
var updateMatrix = function(mat) {
    for (let i = 0; i < mat.length; i++) {
        for (let j = 0; j < mat[0].length;j++) {
            if (mat[i][j] === 1) mat[i][j] = 20001
        }
    }
    for (let i = 0; i < mat.length; i++) {
        for (let j = 0; j < mat[0].length;j++) {
            if (mat[i][j] === 0) {
                queue = [[i, j, 0]]
                while(queue.length > 0) {
                    let [i, j, length] = queue.shift()
                    
                    if (i > 0 && mat[i-1][j] > length + 1) {
                        mat[i-1][j] = length + 1
                        queue.push([i-1, j, length + 1])
                    }
                    if (j > 0 && mat[i][j-1] > length + 1) {
                        mat[i][j-1] = length + 1
                        queue.push([i, j-1, length + 1])
                    }
                    if (i < mat.length - 1 && mat[i+1][j] > length + 1) {
                        mat[i+1][j] = length + 1
                        queue.push([i+1, j, length + 1])
                    }
                    if (j < mat[0].length - 1 && mat[i][j+1] > length + 1) {
                        mat[i][j+1] = length + 1
                        queue.push([i, j+1, length + 1])
                    }
                }
            } 
        }
    }
    return mat
};