var minNumberOfSemesters = function (n, es, k) {
    const g = Array.from({ length: n + 1 }, () => new Array())
    const indeg = new Array(n + 1).fill(0)
  
    for (const [u, v] of es) {
      g[u].push(v)
      indeg[v]++
    }
  
    let qSingleNodes = []
    let qIn0WithPath = []
    for (let u = 1; u <= n; ++u) {
      if (indeg[u] !== 0) continue
      if (g[u].length) qIn0WithPath.push(u)
      else qSingleNodes.push(u)
    }
  
    function generateCombos(qi0om) {
      let combos = []
  
      let temp = new Array(k)
      function generateUniqueCombinations(pos, j) {
        if (j === k) {
          combos.push([...temp])
          return
        }
        if (pos >= qi0om.length) return
  
        temp[j] = qi0om[pos]
        generateUniqueCombinations(pos + 1, j + 1)
        generateUniqueCombinations(pos + 1, j)
      }
  
      generateUniqueCombinations(0, 0)
      return combos
    }
  
    let minTimeToReachAllNodes = Number.MAX_VALUE
    function findMinSemesterTime(
      q,
      semisterCount = 0,
      prevVisited = new Set(),
      prevIndegrees = indeg
    ) {
      let visited = new Set(prevVisited)
      let indegrees = Array.from(prevIndegrees)
  
      for (let u of q) {
        if (visited.has(u)) continue
        visited.add(u)
        for (const v of g[u]) indegrees[v]--
      }
      ++semisterCount
  
      if (visited.size === n) {
        minTimeToReachAllNodes = Math.min(semisterCount, minTimeToReachAllNodes)
        return
      }
  
      let qSingleNodesNext = []
      let qIn0WithPath = []
      for (let u = 1; u <= n; ++u) {
        if (visited.has(u)) continue
        if (indegrees[u]) continue
  
        if (g[u].length) qIn0WithPath.push(u)
        else qSingleNodesNext.push(u)
      }
  
      if (qIn0WithPath.length > k) {
        const nqcs = generateCombos(qIn0WithPath)
        for (const queueCombo of nqcs) {
          findMinSemesterTime(queueCombo, semisterCount, visited, indegrees)
        }
      } else {
        while (qIn0WithPath.length < k && qSingleNodesNext.length) {
          qIn0WithPath.push(qSingleNodesNext.pop())
        }
        findMinSemesterTime(qIn0WithPath, semisterCount, visited, indegrees)
      }
    }
  
    if (qIn0WithPath.length > k) {
      const qcs = generateCombos(qIn0WithPath)
      for (const queueCombo of qcs) {
        findMinSemesterTime(queueCombo)
      }
    } else {
      while (qIn0WithPath.length < k && qSingleNodes.length) {
        qIn0WithPath.push(qSingleNodes.pop())
      }
      findMinSemesterTime(qIn0WithPath)
    }
    return minTimeToReachAllNodes
  }
  