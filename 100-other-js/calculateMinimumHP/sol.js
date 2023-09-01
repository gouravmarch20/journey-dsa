/**
 * @param {number[][]} dungeon
 * @return {number}
 */
var calculateMinimumHP = function(dungeon) {
    for (let i = dungeon.length - 1; i >= 0; i--) {
        for (let j = dungeon[0].length - 1; j >= 0; j--) {
            if (j !== dungeon[0].length - 1 && i !== dungeon.length - 1) dungeon[i][j] = Math.max(dungeon[i+1][j], dungeon[i][j+1]) + dungeon[i][j] 
            else if (j !== dungeon[0].length - 1) dungeon[i][j] += dungeon[i][j+1]
            else if (i !== dungeon.length - 1) dungeon[i][j] += dungeon[i+1][j]
            
            if (dungeon[i][j] > 0) dungeon[i][j] = 0
        }
    }
    return dungeon[0][0] * -1 + 1
};