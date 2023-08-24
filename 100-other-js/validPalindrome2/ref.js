// /**
//  * @param {number} n
//  * @param {number} m
//  * @param {number[]} group
//  * @param {number[][]} beforeItems
//  * @return {number[]}
//  */
// var topoSortGroups = (n, prerequisites) => {
//     const answer = []
//     const indegree = new Array(n).fill(0)
//     const adj = new Array(n).fill(0).map(el => new Array())
//     const coursesWithNoPrerequisits = []

//     prerequisites.forEach(course => {
//         indegree[course[0]]++
//         adj[course[1]].push(course[0])
//     })

//     indegree.forEach((course,index) => {
//         if (course === 0) {
//             coursesWithNoPrerequisits.push(index)
//             answer.push(index)
//         }
//     })

//     while(coursesWithNoPrerequisits.length > 0) {
//         const course = coursesWithNoPrerequisits.pop()
//         adj[course].forEach(c =>{
//             indegree[c]--
//             if (indegree[c] === 0) {
//                 coursesWithNoPrerequisits.push(c)
//                 answer.push(c)
//             }
//         })
//     }
//     return answer.length === n ? answer : []
// };

// var topoSort = (n, prerequisites, currentGroup) => {
//     const answer = []
//     const indegree = new Map()
//     const adj = new Map()
//     const coursesWithNoPrerequisits = []
//     currentGroup.forEach(el => {
//         indegree.set(el, 0)
//         adj.set(el, [])
//     })

//     prerequisites.forEach(course => {
//         if (!indegree.has(course[1])) indegree.set(course[1], 0)
//         if (indegree.has(course[0])) indegree.set(course[0], indegree.get(course[0]) + 1)
//         else indegree.set(course[0], 1)

//         if (adj.has(course[1])) {
//             let arr =  adj.get(course[1])
//             arr.push(course[0])
//             adj.set(course[1], arr)
//         }
//         else adj.set(course[1], [course[0]])
//     })

//     indegree.forEach((course, index) => {
//         if (course === 0) {
//             coursesWithNoPrerequisits.push(index)
//             answer.push(index)
//         }
//     })
//     // console.log(adj, indegree, coursesWithNoPrerequisits)
//     while(coursesWithNoPrerequisits.length > 0) {
//         const course = coursesWithNoPrerequisits.pop()
//         let arr = adj.get(course)
//         arr?.forEach(c =>{
//             indegree.set(c, indegree.get(c) - 1)
//             if (indegree.get(c) === 0) {
//                 coursesWithNoPrerequisits.push(c)
//                 answer.push(c)
//             }
//         })
//     }
//     // console.log(answer, n)
//     return answer.length === n ? answer : []
// };


// var sortItems = function(n, m, group, beforeItems) {
//     // put every singleton in its own group and increase m
//     for (let i = 0; i < group.length; i++) {
//         if (group[i] === -1) {
//             group[i] = m
//             m++
//         }
//     }
//     // create arrays
//     const graph = new Array(m).fill(0).map(el => new Array(0))
//     const groupsGraph = []
//     let groupDependencies = new Array(m).fill(0).map(el => new Array(0))
//     let groups = new Array(m).fill(0).map(el => new Set())
    
//     // get (unique) inter-group-dependencies
//     for (let i = 0; i < group.length; i++) {
//         let deps = beforeItems[i].filter(el => group[el] !== group[i])
//         deps = deps.map(el => group[el])
//         groupDependencies[group[i]].push(...deps)
//     }
//     groupDependencies = groupDependencies.map(arr => arr = Array.from(new Set(arr)))
    
//     // create groups with members
//     for (let i = 0; i < group.length; i++) {
//         groups[group[i]].add(i)
//     }
//     //console.log(groups, groupDependencies)

//     // create groupsGraph
//     for (let i = 0; i < m; i++) {
//         let deps = groupDependencies[i]
//         if (deps.length > 0) deps.forEach(dep => groupsGraph.push([i, dep]))
//     }
//     //console.log('groupsGraph ', groupsGraph)

//     // topo sort groups graph, if not sortable return empty array
//     const topoSortedGroupGraph = topoSortGroups(m, groupsGraph)
//     if (topoSortedGroupGraph.length === 0) return []
    
//     // console.log('topoSortedGroupGraph ', topoSortedGroupGraph)

//     // create graph per group
//     for (let i = 0; i < group.length; i++) {
//         let deps = beforeItems[i].filter(el => group[el] === group[i])
//         if (deps.length > 0) deps.forEach(dep => graph[group[i]].push([i, dep]))
//     }
//     // console.log('graph', graph)

//     // topo sort each group and put into topoSortedGroups
//     const topoSortedGroups = []
//     for (let i = 0; i < m; i++) {
//         // console.log(i, topoSortedGroupGraph)
//         const currentGroup = topoSortedGroupGraph[i]
        
//         if (graph[currentGroup].length === 0) {
//             topoSortedGroups.push(groups[currentGroup])
//             continue
//         }
//         let topoSortedGroup = topoSort(groups[currentGroup].size, graph[currentGroup], groups[currentGroup])
//         // console.log(i, topoSortedGroup, graph[currentGroup], currentGroup, groups[currentGroup])
//         if (topoSortedGroup.length === 0) return []
//         topoSortedGroup = topoSortedGroup.filter(el => groups[currentGroup].has(el))
//         topoSortedGroups.push(topoSortedGroup)
//     }

//     // console.log('topoSortedGroups ', topoSortedGroups)

//     // create anser from topoSortedGroupGraph
//     const answer = []
//     for (let i = 0; i < m; i++) {
//         answer.push(...topoSortedGroups[i])
//     }

//     return answer
// };