// void dfs(vector<int> &visited, vector<int> &adjLs, int node) {
//   visited[node] = true;
//   for (auto it : adjLs[node]) {
//     if (!visited[node]) {
//       dfs(visited, )
//     }
//   }
// }
// int numIslands(vector<vector<char>> &grid) {
//   // Code here
//   vector<bool> visited(grid.size(), false);
//   vector<int> adjLs[grid.size()];
//   int count = 0;
//   //
//   for (int i = 0; i < grid.size(); i++) {
//     for (int j = 0; j < grid[0].size(); j++) {
//       adj[i].push_back(j);
//     }
//   }
//   //! doing for 1 loop only how horizonal , vertical case handle in visited
//   for (int i = 0; i < grid.size(); i++) {
//     for (int j = 0; j < grid[0].size(); j++) {
//       if (!visited[i][j]) {
//         count++;
//         dfs(visited, adjLs, i);
//       }
//     }
//   }
// }