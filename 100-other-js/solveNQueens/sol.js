/**
 * @param {number} n
 * @return {string[][]}
 */
const doQueensAttackEachOther = (queens, n) => {
    //don't have to check rows, because of the way we add queens
    
    // check colls
    const colls = new Set()
    for (let i = 0; i < queens.length; i++) {
        if (colls.has(queens[i][1])) return true
        else colls.add(queens[i][1])
    }

    //check diagonals
    for (const [x, y] of queens) {
        let i = x
        let j = y
        while (i < n && j < n && i >= 0 && j >= 0) {
            i += 1
            j += 1
            let queenToCheck = queens.find(q => q[0] === i)
            if (queenToCheck && queenToCheck[1] === j) return true
        }
        i = x
        j = y
        while (i < n && j < n && i >= 0 && j >= 0) {
            i -= 1
            j += 1
            let queenToCheck = queens.find(q => q[0] === i)
            if (queenToCheck && queenToCheck[1] === j) return true
        }
    }
    return false
}

const addBoardToAns = (queens, n, answer) => {
    const board = []
        for (const [i, j] of queens) {
            let row = ''
            for (let k = 0; k < n; k++) {
                k === j ? row += 'Q' : row += '.'
            }
            board.push(row)
        }
        answer.push(board)
    return 
}

var solveNQueens = function(n) {
    const answer = []

    const backTrack = (queens, row) => {                
        if (queens.length === n) {
            addBoardToAns(queens, n, answer)
            return
        }
        
        for (let i = 0; i < n; i++) {
            queens.push([row, i])
            
            if (!doQueensAttackEachOther(queens, n) && row < n) {
                backTrack(queens.map(queen => [...queen]), row + 1)
            }

            queens.pop()
        }
    }
    backTrack([], 0)

    return answer
};