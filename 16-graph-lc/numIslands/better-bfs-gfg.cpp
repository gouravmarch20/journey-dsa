// class Solution {
//   public:
//     // Function to find the number of islands.
//     //! M visited is 2 array here , forgot 30 min debug found params declation
//     void bfs(vector<vector<char>> &grid, vector<int> &visited, int i, int j) {
//         visited[i][j] = 1;

//      //
//      queue <pair<int,int>> q;
//      q.push({i,j});
//      int n = grid.size();
//      int m = grid[0].size();
//      while(!q.empty()){
//          int row = q.front().first;
//          int col = q.front().second;
//          q.pop();
//          //
//          for(int delRow = -1 ; delRow <= 1 ; delRow++){
//              for(int delCol = -1 ; delCol <= 1 ; delCol++){
//                  int nrow = row + delRow;
//                  int ncol = col + delCol;
//                 if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && grid[nrow][ncol] == '1' && !visited[nrow][ncol]) {
//                     bfs(grid, visited, nrow, ncol);
//                 }
//              }
//          }
//      }
//     }

//     int numIslands(vector<vector<char>>& grid) {
//         // Code here
//         int n = grid.size();
//         int m = grid[0].size();
//         int count = 0 ;
//         vector<vector <int>> vis(n , vector<int>(m , 0));
//         for(int i = 0 ; i < n ; i++){
//           for(int j = 0 ; j < m ; j++){
//               //! m consider grid value as int
//             if(!vis[i][j] && grid[i][j] == '1'){
//                 count++;
//                 bfs(grid , vis , i , j);
//             }
//           }
//         }
//         return count ;
//     }
// };