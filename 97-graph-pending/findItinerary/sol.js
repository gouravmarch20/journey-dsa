/**
 * @param {string[][]} tickets
 * @return {string[]}
 */
var findItinerary = function(tickets) {
    const graph = {}

    for (const [s,d] of tickets) {
        if (!graph[s]) graph[s] = []
        graph[s].push(d)
    }

    for (let key in graph) {
        graph[key].sort().reverse()
    }
    
    const answer = []

    const dfs = (airport) => {
        while(graph[airport] && graph[airport].length > 0) {
            dfs(graph[airport].pop())
        }
        answer.push(airport)
    }

    dfs("JFK")

    return answer.reverse()
    
};