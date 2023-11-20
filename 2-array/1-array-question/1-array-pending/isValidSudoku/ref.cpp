// class Solution {
// public:
//     bool check(int row,int col,vector<vector<char>>&board)
//     {
//         unordered_set<char>fi,se,thir;
//         int fv=0,sv=0,tv=0;
//         for(int k=0;k<9;k++)
//         {
//             if(board[row][k]!='.')
//             {
//                 fv++;
//                 fi.insert(board[row][k]);
//             }
//             if(board[k][col]!='.'){
//                 sv++;
//                 se.insert(board[k][col]);
//             }
//             if(board[3*(row/3)+k/3][3*(col/3)+k%3]!='.')
//             {
//                 tv++;
//                 thir.insert(board[3*(row/3)+k/3][3*(col/3)+k%3]);
//             }
//         }
//         return thir.size()==tv && fv==fi.size() && sv==se.size();
//     }
//     bool isValidSudoku(vector<vector<char>>& board) {
//         for(int i=0;i<9;i++)
//         {
//             for(int j=0;j<9;j++)
//             {
//                 if(board[i][j]!='.')
//                 {
//                     if(check(i,j,board)==false)
//                      return false;
//                 }
//             }
//         }
//         return true;
//     }
// };