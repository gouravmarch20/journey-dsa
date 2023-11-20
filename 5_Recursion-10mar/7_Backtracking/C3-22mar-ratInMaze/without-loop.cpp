// // User function template for C++

// class Solution {
//  public:
//   bool isSafe(int srcX, int srcY, int row, int col, vector<vector<int>> &maze,
//               vector<vector<bool>> &visited) {
//     //
//     if (
//         // range avoid out of bound
//         //! m2: miss use of >=

//         (srcX >= 0 && srcX < row) && (srcY >= 0 && srcY < col) &&
//         // avoid infinite loop case => not go back
//         (visited[srcX][srcY] == false) &&
//         // is allow to come here
//         (maze[srcX][srcY] == 1)) {
//       //
//       return true;
//     } else {
//       return false;
//     }
//   }
//   void solveMaze(vector<vector<int>> &maze, int row, int col, int srcX,
//                  int srcY, vector<vector<bool>> &visited, vector<string> &path,
//                  string output) {
//     // base case
//     if (srcX == row - 1 && srcY == col - 1) {
//       path.push_back(output);
//       return;
//     }
//     // down>> srcX + 1, srcY
//     if (isSafe(srcX + 1, srcY, row, col, maze, visited)) {
//       visited[srcX + 1][srcY] = true;
//       solveMaze(maze, row, col, srcX + 1, srcY, visited, path, output + 'D');
//       visited[srcX + 1][srcY] = false;
//     }

//     // left>>  srcX , srcY-1
//     if (isSafe(srcX, srcY - 1, row, col, maze, visited)) {
//       visited[srcX][srcY - 1] = true;
//       solveMaze(maze, row, col, srcX, srcY - 1, visited, path, output + 'L');
//       visited[srcX][srcY - 1] = false;
//     }
//     // right >> srcX , srcY + 1
//     if (isSafe(srcX, srcY + 1, row, col, maze, visited)) {
//       visited[srcX][srcY + 1] = true;
//       solveMaze(maze, row, col, srcX, srcY + 1, visited, path, output + 'R');
//       visited[srcX][srcY + 1] = false;
//     }
//     // up >> srcX - 1 , srcY
//     if (isSafe(srcX - 1, srcY, row, col, maze, visited)) {
//       visited[srcX - 1][srcY] = true;
//       solveMaze(maze, row, col, srcX - 1, srcY, visited, path, output + 'U');
//       visited[srcX - 1][srcY] = false;
//     }
//   }
  
  
//   vector<string> findPath(vector<vector<int>> &m, int n) {
//     // Your code goes here
//     int row = n;
//     int col = n;
//     vector<vector<bool>> visited(row, vector<bool>(col, false));
//     visited[0][0] = true;
//     vector<string> path;
//     string output = "";
//     int r = 0;
//     int j = 0;

//     if (m[0][0] == 0 || m[n - 1][n - 1] == 0) {
//       return path;
//     }

//     solveMaze(m, row, col, 0, 0, visited, path, output);

//     return path;
//   }
// };
