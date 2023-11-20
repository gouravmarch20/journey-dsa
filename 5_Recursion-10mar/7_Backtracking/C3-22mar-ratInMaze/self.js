const isSafe = (maze, isVisited, rowS, colS, srcX, srcY) => {
  if (
    //is_range
    srcX >= 0 &&
    srcX < rowS &&
    srcY >= 0 &&
    srcY < colS &&
    //is_not_visited
    !isVisited[srcX][srcY] &&
    //is allowed
    maze[srcX][srcY]
  ) {
    return true
  } else {
    return false
  }
}

const ratInMaze = (maze, isVisited, rowS, colS, srcX, srcY, path, output) => {
  // base case
  if (srcX === rowS - 1 && srcY === colS - 1) {
    output.push(path)
    return
  }
  //down
  if (isSafe(maze, isVisited, rowS, colS, srcX + 1, srcY)) {
    isVisited[srcX + 1][srcY] = true

    ratInMaze(maze, isVisited, rowS, colS, srcX + 1, srcY, path + "D", output)
    isVisited[srcX + 1][srcY] = true
  }
  //up >> srcX + 1
  if (isSafe(maze, isVisited, rowS, colS, srcX - 1, srcY)) {
    isVisited[srcX - 1][srcY] = true

    ratInMaze(maze, isVisited, rowS, colS, srcX - 1, srcY, path + "U", output)
    isVisited[srcX - 1][srcY] = true
  }
  //left
  if (isSafe(maze, isVisited, rowS, colS, srcX, srcY - 1)) {
    isVisited[srcX][srcY - 1] = true

    ratInMaze(maze, isVisited, rowS, colS, srcX, srcY - 1, path + "L", output)
    isVisited[srcX][srcY - 1] = true
  }
  //right
  if (isSafe(maze, isVisited, rowS, colS, srcX, srcY + 1)) {
    isVisited[srcX][srcY + 1] = true
    ratInMaze(maze, isVisited, rowS, colS, srcX, srcY + 1, path + "R", output)
    isVisited[srcX][srcY + 1] = true
  }
}
const maze = [
  [1, 0, 0],
  [1, 0, 0],
  [1, 1, 1],
]
const isVisited = [
  [0, 0, 0],
  [0, 0, 0],
  [0, 0, 0],
]
const rowS = 3
const colS = 3
const path = ""
const output = []
ratInMaze(maze, isVisited, rowS, colS, 0, 0, path, output)
console.log(output);
