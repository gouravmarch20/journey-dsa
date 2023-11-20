// class Solution {
// public:
//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//         int n = mat.size();
//         int m = mat[0].size();

//         int delrow[4] = {-1, 0, 1, 0};
//         int delcol[4] = {0, -1, 0, 1};

//         auto isValid = [&](int row, int col) -> bool {
//             return (row >= 0 && row < n && col >= 0 && col < m);
//         };

//         vector<vector<bool>> visited(n, vector<bool>(m, false));
//         queue<pair<int, int>> bfsQueue;

//         // Make an 2D matrix of same size to store dist of nearest 0
//         vector<vector<int>> ans(n, vector<int>(m, -1));
        
//         // Pushing all sources i.e. cells with 0 to the bfsQueue
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < m; j++){
//                 if(mat[i][j] == 0){
//                     visited[i][j] = true;
//                     ans[i][j] = 0;
//                     bfsQueue.push(make_pair(i, j));
//                 }
//             }
//         }

//         // running bfs until the q is not empty i.e. until we visit all cells
//         while(!bfsQueue.empty()){
//             int row = bfsQueue.front().first;
//             int col = bfsQueue.front().second;
//             int dist = ans[row][col];
//             bfsQueue.pop();

//             // For each neighbour of current cell store it distance as
//             // distance of current cell + 1 & push it to bfsQueue
//             for(int i=0; i<4; i++){
//                 int nrow = row + delrow[i];
//                 int ncol = col + delcol[i];

//                 if(isValid(nrow, ncol) && !visited[nrow][ncol]) {
//                     visited[nrow][ncol] = true;
//                     ans[nrow][ncol] = dist + 1;
//                     bfsQueue.push(make_pair(nrow, ncol));
//                 }
//             }
//         }

//         // In the end we get ans for every cell
//         return ans;
//     }
// };