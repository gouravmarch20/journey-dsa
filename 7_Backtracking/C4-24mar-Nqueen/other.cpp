// class Solution {
//     void solve(int row, int n, vector<int>& queens, vector<vector<string>>& ans) {
//         if (row == n) {
//             vector<string> board;
//             for (int i = 0; i < n; i++) {
//                 string row_str(n, '.');
//                 row_str[queens[i]] = 'Q';
//                 board.push_back(row_str);
//             }
//             ans.push_back(board);
//             return;
//         }

//         for (int col = 0; col < n; col++) {
//             if (is_safe(row, col, queens)) {
//                 queens[row] = col;
//                 solve(row + 1, n, queens, ans);
//                 queens[row] = -1; 
//             }
//         }
//     }

//     bool is_safe(int row, int col, vector<int>& queens) {
//         for (int i = 0; i < row; i++) {
//             if (queens[i] == col || abs(queens[i] - col) == abs(i - row))
//                 return false;
//         }
//         return true;
//     }

// public:
//     vector<vector<string>> solveNQueens(int n) {
//         vector<vector<string>> ans;
//         vector<int> queens(n, -1); 

//         solve(0, n, queens, ans);
        
//         return ans;
//     }
// };
