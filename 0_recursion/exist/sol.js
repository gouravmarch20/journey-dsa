// /**
//  * @param {character[][]} board
//  * @param {string} word
//  * @return {boolean}
//  */

var exist = function (board, word) {
  let result = false;
  let m = board.length;
  let n = board[0].length;

  const dfs = (x, y, idx) => {
    if (idx === word.length) return true;
    if (x < 0 || y < 0 || x >= m || y >= n || board[x][y] !== word[idx])
      return false;

    const temp = board[x][y];
    board[x][y] = "#"; // mark visited

    // explore neighbors
    const found =
      dfs(x + 1, y, idx + 1) ||
      dfs(x - 1, y, idx + 1) ||
      dfs(x, y + 1, idx + 1) ||
      dfs(x, y - 1, idx + 1);

    board[x][y] = temp; // restore cell
    return found;
  };
  for (let i = 0; i < m; i++) {
    for (let j = 0; j < n; j++) {
      if (dfs(i, j, 0)) return true;
    }
  }
  return result;
};
