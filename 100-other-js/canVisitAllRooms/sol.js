/**
 * @param {number[][]} rooms
 * @return {boolean}
 */
var canVisitAllRooms = function(rooms) {
    const queue = [...rooms[0]]
    const visited = new Set([0])
    while(queue.length > 0) {
        let key = queue.shift()
        if (visited.has(key)) continue
        queue.push(...rooms[key])
        visited.add(key)
    }
    return visited.size === rooms.length
};