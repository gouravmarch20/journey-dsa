/**
 * @param {number[][]} matrix
 * @return {number[]}
 */
var spiralOrder = function (matrix) {
  let r = matrix.length,
    c = matrix[0].length
  let [startRow, endRow, startCol, endCol] = [0, r - 1, 0, c - 1]

  let arr = []

  while (startRow <= endCol && startCol <= endRow) {
    for (let i = startRow; i <= endCol; i++) arr.push(matrix[startCol][i])
    startCol++

    for (let i = startCol; i <= endRow; i++) arr.push(matrix[i][endCol])
    endCol--

    if (startCol <= endRow) {
      // condition 1
      for (let i = endCol; i >= startRow; i--) arr.push(matrix[endRow][i])
      endRow--
    }

    if (startRow <= endCol) {
      // condition 2
      for (let i = endRow; i >= startCol; i--) arr.push(matrix[i][startRow])
      startRow++
    }
  }

  return arr
}
