/**
 * @param {number[][]} grid
 * @return {number}
 */
var orangesRotting = function (grid) {
  let queue = [];
  let cnt = 0;
  let m = grid.length,
    n = grid[0].length;
  // !m1:: i , j miss match
  for (let i = 0; i < m; i++) {
    for (let j = 0; j < n; j++) {
      if (grid[i][j] == 2) {
        queue.push([i, j, 0]);
      }
    }
  }
  while (queue.length) {
    let [x, y, level] = queue.shift();
    // top
    if (x > 0 && grid[x - 1][y] == 1) {
      grid[x - 1][y] = 2;
      queue.push([x - 1, y, level + 1]);
    }
    // bottom
    if (x < m - 1 && grid[x + 1][y] == 1) {
      grid[x + 1][y] = 2;
      queue.push([x + 1, y, level + 1]);
    }
    // left

    if (y > 0 && grid[x][y - 1] == 1) {
      grid[x][y - 1] = 2;

      queue.push([x, y - 1, level + 1]);
    }
    // right
    // !m2:: written m
    if (y < n - 1 && grid[x][y + 1] == 1) {
      grid[x][y + 1] = 2;

      queue.push([x, y + 1, level + 1]);
    }
    console.log("the_", queue);

    cnt = Math.max(cnt, level);
  }
  console.log("debug_9", grid);

  for (let i = 0; i < m; i++) {
    for (let j = 0; j < n; j++) {
      if (grid[i][j] == 1) {
        return -1;
      }
    }
  }
  return cnt;
};
