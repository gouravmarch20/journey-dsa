/**
 * @param {character[][]} maze
 * @param {number[]} entrance
 * @return {number}
 */
var nearestExit = function(maze, entrance) {
    entrance.push(1)
    maze[entrance[0]][entrance[1]] = "+"
    const queue = [entrance]
    const moves = [[0, 1], [0, -1], [1, 0], [-1, 0]]
    while(queue?.length > 0) {
        let [i, j, l] = queue.shift()
        for (const move of moves) {
            let newCell = [i + move[0], j + move[1]]
            if (newCell[0] < 0 || newCell[0] >= maze.length || newCell[1] < 0 || newCell[1] >= maze[0].length|| maze[newCell[0]][newCell[1]] === "+" ) continue
            if ((newCell[0] === 0 || newCell[1] === 0 || newCell[0] === maze.length - 1 || newCell[1] === maze[0].length - 1) && l > 0) {return l}
            maze[newCell[0]][newCell[1]] = "+"
            queue.push([newCell[0], newCell[1], l+1])
        }
    }
    return -1
};