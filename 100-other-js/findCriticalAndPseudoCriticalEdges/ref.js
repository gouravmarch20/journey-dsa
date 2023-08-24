/**
 * @param {number} n
 * @param {number[][]} edges
 * @return {number[][]}
 */

const unionFind = (edges, n) => {
    let parents = new Array(n)
    for (let i =0; i < parents.length; i++) parents[i] = i
    const find = (x) => parents[x] !== x ? find(parents[x]) : parents[x]
    const union = (left, right) => parents[find(right)] = find(left)
    edges.forEach(edge => union(edge[0], edge[1]))
    return ultimateParents = parents.map(p => find(p))
}

const getMSTForEdges = (edges, n, minimalWeightOfMST) => {
    let isConnected =false
    let i = 0
    const edgesInMST = []
    const indexesOfAddedEdges = []
    let prevUltimateParents = []
    let weight = 0
    while (!isConnected && i < edges.length && weight < minimalWeightOfMST) {
        edgesInMST.push(edges[i])
        const ultimateParents = unionFind(edgesInMST, n)
        const ultimateParentsSum = ultimateParents.reduce((a,c)=>a+c,0)
        if (ultimateParentsSum === prevUltimateParents) edgesInMST.pop()
        else weight += edges[i][2]
        prevUltimateParents = ultimateParentsSum
        isConnected = new Set(ultimateParents).size === 1
        i++
    }
    edgesInMST.forEach(e => indexesOfAddedEdges.push(e[3]))
    return [indexesOfAddedEdges, weight, isConnected]
}    

var findCriticalAndPseudoCriticalEdges = function(n, edges) {
    const requiredEdges = []
    let pseudoRequiredEdges = []
    
    for (let j = 0; j < edges.length; j++) {edges[j].push(j)}
    edges.sort((a,b) => a[2] - b[2])

    // Get basicMST with minimal weight
    const [indexesOfAddedEdges, minimalWeightOfMST] = getMSTForEdges(edges, n, Infinity)
    
    // find criticals
    for (let index = 0; index < edges.length; index++ ) {
        let trialEdges = [...edges]
        trialEdges.splice(index, 1)
        let [mst, mstWeight, isConnected] = getMSTForEdges(trialEdges, n, minimalWeightOfMST)
        if (mstWeight > minimalWeightOfMST || !isConnected) requiredEdges.push(edges[index][3])
        if (mstWeight === minimalWeightOfMST) pseudoRequiredEdges.push(...mst)
    }

    // find pseudo's
    for(let i = 0; i < edges.length; i++) {
        const trialEdges = [edges[i], ...edges]
        trialEdges.splice(i+1, 1)
        let [mst, mstWeight, isConnected] = getMSTForEdges(trialEdges, n, minimalWeightOfMST)
        if(isConnected && minimalWeightOfMST === mstWeight) pseudoRequiredEdges.push(...mst)
    }

    pseudoRequiredEdges = Array.from(new Set(pseudoRequiredEdges))
    pseudoRequiredEdges = pseudoRequiredEdges.filter(e => !requiredEdges.includes(e))
    pseudoRequiredEdges.sort((a,b) => a-b)
    requiredEdges.sort((a,b) => a-b)
    return [requiredEdges, pseudoRequiredEdges]
};