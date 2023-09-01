/**
 * @param {number} n
 * @return {number}
 */

const doQueensAttackEachOther = (queens, n) => {
    //don't have to check rows, because of the way we add queens
    
    // check colls
    let colls = queens.map(q => q[1])
    colls.sort()
    for (let i = 1; i < colls.length; i++) {
        if (colls[i] === colls[i-1]) return true
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

var totalNQueens = function(n) {
    let answer = 0

    const backTrack = (queens, row) => {
        if (queens.length > n) return
        
        if (doQueensAttackEachOther(queens, n)) return
        
        if (queens.length === n) {
            answer++
            return
        }
        
        for (let i = 0; i < n; i++) {
            queens.push([row, i])

            backTrack(queens.map(queen => [...queen]), row + 1)

            queens.pop()
        }
    }
    backTrack([], 0)

    return answer
};