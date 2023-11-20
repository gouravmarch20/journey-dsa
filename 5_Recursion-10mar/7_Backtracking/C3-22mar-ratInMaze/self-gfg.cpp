
// bool isValid(vector<vector<int>> &m, vector<vector<bool>> &visited, int srcRow,
//              int srcCol) {
//   if ((srcRow >= 0 && srcRow < m.size()) &&
//       (srcCol >= 0 && srcCol < m.size()) && m[srcRow][srcCol] == 1 &&
//       visited[srcRow][srcCol] == false) {
//     return true;
//   }
//   return false;
// }

// void explorePath(vector<vector<int>> &m, vector<string> &ans,
//                  vector<vector<bool>> &visited, int srcRow, int srcCol,
//                  string temp) {
//   if (srcRow == m.size() - 1 && srcCol == m.size() - 1) {
//     ans.push_back(temp);
//     return;
//   }
//   // down
//   if (isValid(m, visited, srcRow + 1, srcCol)) {
//     // srcRow += 1;x
//     // temp.push_back('D');
//     // visited[srcRow + 1][srcCol] = 1;
//     visited[srcRow + 1][srcCol] = true;
//     explorePath(m, ans, visited, srcRow + 1, srcCol, temp + 'D');
//     visited[srcRow + 1][srcCol] = false;
//     // temp.pop_back();
//   }
//   // top
//   if (isValid(m, visited, srcRow - 1, srcCol)) {
//     // srcRow -= 1;
//     // temp.push_back('T');
//     // visited[srcRow - 1][srcCol] = 1;
//     visited[srcRow - 1][srcCol] = true;
//     explorePath(m, ans, visited, srcRow - 1, srcCol, temp + 'T'); 
//      // go to that index
//     // L: came back after rec

//     visited[srcRow - 1][srcCol] = false;  // that index ko unfinised as finished
//     // temp.pop_back();  // L:: this stack mai add string so avoid
//   }


//   // left
//   if (isValid(m, visited, srcRow, srcCol - 1)) {
//     // srcRow += 1;x
//     // temp.push_back('L');
//     visited[srcRow][srcCol - 1] = true;
//     explorePath(m, ans, visited, srcRow, srcCol - 1, temp + 'L');
//     visited[srcRow][srcCol - 1] = false;
    
//     // temp.pop_back();
//   }

//   // right

//   if (isValid(m, visited, srcRow, srcCol + 1)) {
//     // srcRow += 1;x
//     // temp.push_back('R');
//     visited[srcRow][srcCol + 1] = true;
//     explorePath(m, ans, visited, srcRow, srcCol + 1, temp + 'R');
//     visited[srcRow][srcCol + 1] = false;
//     // temp.pop_back();
//   }
// }


// vector<string> findPath(vector<vector<int>> &m, int n) {
//   // Your code goes here
//   int row = n;
//   int col = n;

//   vector<vector<bool>> visited(n, vector<bool>(n, false));

//   visited[0][0] = true;  //! m2 :: 15 min debug
//   //! m1:: string neeed
//   vector<string> ans;
//   // string temp ;//concat not possilbe without
//   string temp = "";

//   explorePath(m, ans, visited, 0, 0, temp);
//   return ans;

//   // if (m[0][0] == 0 || m[n - 1][n - 1] == 0) {
//   //     return path;
//   // }
// }