var findShortestCycle = function (n, edges) {
    let g = Array.from({ length: n }, () => new Array())
    for (let [u, v] of edges) {
      g[u].push(v)
      g[v].push(u)
    }
  
    let shortestCycle = Infinity
  
    let findShortestCycleInGraph = (s) => {
      let result = Infinity
      let distance = Array(n).fill(Infinity)
      distance[s] = 0
  
      let q = [[s, -1]]
      while (q.length) {
        let [u, parent] = q.shift()
        for (let v of g[u]) {
          if (v === parent) continue
          if (distance[u] + 1 > distance[v]) {
            let cycleLength = distance[u] + 1 + distance[v]
            result = Math.min(result, cycleLength)
          } else {
            distance[v] = distance[u] + 1
            q.push([v, u])
          }
        }
      }
      return result
    }
  
    for (let s = 0; s < n; s++) {
      shortestCycle = Math.min(shortestCycle, findShortestCycleInGraph(s))
    }
  
    return shortestCycle === Infinity ? -1 : shortestCycle
  }