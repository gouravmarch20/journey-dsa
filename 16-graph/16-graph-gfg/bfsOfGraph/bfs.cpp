// class Solution {
//  public:
//   // Function to return Breadth First Traversal of given graph.
//   vector<int> bfsOfGraph(int V, vector<int> adj[]) {
//     // Code here
//     vector<int> visited(V, 0);  //^ read propr question
//     queue<int> q;
//     vector<int> ans;
//     q.push(0);
//     visited[0] = 1;
//     while (!q.empty()) {
//       int node = q.front();
//       q.pop();
//       ans.push_back(node);
//       for (auto conectedNode : adj[node]) {
//         if (!visited[conectedNode]) {
//           visited[conectedNode] = 1;
//           q.push(conectedNode);  //^m pushing in ans
//         }
//       }
//     }
//     return ans;
//   }
// };