/**
 * @param {number} n
 * @param {number[][]} roads
 * @return {number}
 */
var maximalNetworkRank = function(n, roads) {
    let roadsPerCity = new Array(n).fill(0)
    for (const road of roads) {
        roadsPerCity[road[0]]++
        roadsPerCity[road[1]]++
    }
    const sortedRoadsPerCity = [...roadsPerCity]
    sortedRoadsPerCity.sort((a,b)=> a-b)
    const mostConnectedCity1 = sortedRoadsPerCity[sortedRoadsPerCity.length-1] 
    const mostConnectedCity2 = sortedRoadsPerCity[sortedRoadsPerCity.length-2]
    if (mostConnectedCity1 === mostConnectedCity2) {
        let citiesWithMaxConnections = []
        roadsPerCity.forEach((el, i) => {
            if (el === mostConnectedCity1) citiesWithMaxConnections.push(i)
        })
        for (let i = 0; i < citiesWithMaxConnections.length; i++) {
            let citiesWithMaxConnectionsCopy = [...citiesWithMaxConnections]
            let currentCity = citiesWithMaxConnectionsCopy[i]
            roads.filter(r => r[0] === currentCity || r[1] === currentCity)
            const roadsFromMostConnectedCity = roads.filter(r => r.includes(currentCity))
            citiesWithMaxConnectionsCopy = citiesWithMaxConnectionsCopy.filter(c => roadsFromMostConnectedCity.every(r => r[0] !== c && r[1] !== c))
            if (citiesWithMaxConnectionsCopy.length > 0) return mostConnectedCity1 + mostConnectedCity2
        }
        return mostConnectedCity1 + mostConnectedCity2 - 1 
    } else { 
        let mostConnectedCity = roadsPerCity.indexOf(mostConnectedCity1)
        let citiesWithMaxConnections = []
        roadsPerCity.forEach((el, i) => {
            if (el === mostConnectedCity2) citiesWithMaxConnections.push(i)
        })
        const roadsFromMostConnectedCity = roads.filter(r => r.includes(mostConnectedCity))
        citiesWithMaxConnections = citiesWithMaxConnections.filter(c => roadsFromMostConnectedCity.every(r => r[0] !== c && r[1] !== c))
        if (citiesWithMaxConnections.length > 0) return mostConnectedCity1 + mostConnectedCity2
        else return mostConnectedCity1 + mostConnectedCity2 - 1
    }
};