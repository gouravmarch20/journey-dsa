// class Solution {
//  public:
//   void dfsRec(int node, vector<int> adj[], vector<int> &visited,
//     vector<int> &ans) {
//     visited[node] = 1;    //^ write inside if condition
//     ans.push_back(node);  //^ written inside if block
//?     // traverse neighbour
//     for (auto it : adj[node]) {
//       if (!visited[it]) {
//         dfsRec(it, adj, visited, ans);
////*L: getting segmentation fault  function wrong argument passed
//       }
//     }
//   }
//   vector<int> dfsOfGraph(int V, vector<int> adj[]) {
//     // Code here
//     vector<int> visited(V, 0);
//     vector<int> ans;
//^ asign size V --> using push_back so after V size insert
//     int start = 0;  //^ need to tell source node
/// M! cycle loop case  code written
//                     // for(int i = 0 ; i < V ; i++){
//                     // if(!visited[i]){
//     dfsRec(start, adj, visited, ans);

//     return ans;
//   }
// };