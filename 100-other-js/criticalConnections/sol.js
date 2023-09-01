// var criticalConnections = function (n, edges) {
//     const g = Array.from({ length: n }, () => new Array())
  
//     for (const [u, v] of edges) {
//       g[u].push(v)
//       g[v].push(u) // undirected
//     }
  
//     let time = 0 // elapsed time
  
//     // const pathCostFromStart = new Array(n).fill(Infinity)
//     const firstVisitedTimeOf = new Array(n).fill(0) // first discovery time to reach
//     const time_firstVertexInPossibleCycle = new Array(n).fill(0) // lowest time to reach
//     const ce = [] // critical edges
  
//     function dfs(u, uparent) {
//       firstVisitedTimeOf[u] = time_firstVertexInPossibleCycle[u] = ++time
  
//       for (const v of g[u]) {
//         // going back to parent - nothing to do
//         if (v === uparent) continue
  
//         // visited
//         if (firstVisitedTimeOf[v] !== 0) {
//           // ##1
//           // u->v  but v is already visited   => cycle
//           if (time_firstVertexInPossibleCycle[v] < time_firstVertexInPossibleCycle[u]) {
//             time_firstVertexInPossibleCycle[u] = time_firstVertexInPossibleCycle[v]
//           }
//           continue
//         }
  
//         // unvisited node v
//         dfs(v, u) // v, v's parent
  
//         if (firstVisitedTimeOf[u] < time_firstVertexInPossibleCycle[v]) {
//           ce.push([u, v])
//         }
//         // ##2
//         // same condition as ##1
//         if (time_firstVertexInPossibleCycle[v] < time_firstVertexInPossibleCycle[u]) {
//           time_firstVertexInPossibleCycle[u] = time_firstVertexInPossibleCycle[v]
//         }
//       }
//     }
  
//     dfs(0, -1)
//     return ce
//   }