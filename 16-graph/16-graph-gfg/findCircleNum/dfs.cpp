// class Solution {
//  public:
//   //*L: when vector size is fixed :: in parans not & , [] tell fixed
//   void dfs(int node, vector<int> adjLs[], vector<int>& visited) {
//     visited[node] = true;
//     for (auto it : adjLs[node]) {
//       if (!visited[it]) {
//         dfs(it, adjLs, visited);
//       }
//     }
//   }
//   int findCircleNum(vector<vector<int>>& isConnected) {
//     int n = isConnected.size();
//     int count = 0;
//     vector<int> visited(n, false);
//     vector<int> adjLs[n];
//     for (int i = 0; i < n; i++) {
//       for (int j = 0; j < n; j++) {
// M not bool type it's integer
//!         // if(isConnected[i] && isConnected[j]){
//         if (isConnected[i][j] == 1 && i != j) {
//           adjLs[i].push_back(j);
//? adjLs[j].push_back(i); no need we iterate whole matrix even undirected graph
//         }
//       }
//     }
//     //
//     for (int i = 0; i < n; i++) {
//       if (!visited[i]) {
//         count++;
//         dfs(i, adjLs, visited);
//       }
//     }
//     return count;
//   }
// };