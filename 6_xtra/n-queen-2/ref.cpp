// class Solution {
// public:
//     bool issafe(int row, int col,int n,vector<string>board)
//     {
//         int duprow = row;
//       int dupcol = col;

//       while (row >= 0 && col >= 0) {
//         if (board[row][col] == 'Q')
//           return false;
//         row--;
//         col--;
//       }

//       col = dupcol;
//       row = duprow;
//       while (col >= 0) {
//         if (board[row][col] == 'Q')
//           return false;
//         col--;
//       }

//       row = duprow;
//       col = dupcol;
//       while (row < n && col >= 0) {
//         if (board[row][col] == 'Q')
//           return false;
//         row++;
//         col--;
//       }
//       return true;
//     }
//     void solve(int col,int n,vector<string>&board,set<vector<string>>&st)
//     {
//         if(col==n)
//         {
//             st.insert(board);
//             return;
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(issafe(i,col,n,board))
//             {
//                 board[i][col]='Q';
//                 solve(col+1,n,board,st);
//                 board[i][col]='.';
//             }
//         }
//     }
//     int totalNQueens(int n) {
//         set<vector<string>>st;
//          vector < string > board(n);
//       string s(n, '.');
//       for (int i = 0; i < n; i++) {
//         board[i] = s;
//       }
//         solve(0,n,board,st);
//         return st.size();
//     }
// };