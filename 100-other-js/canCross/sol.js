/**
 * @param {number[]} stones
 * @return {boolean}
 */

const recursiveFunction = (stones, stonesSet, position, jump, memo = {}) => {
    const key = `${position}-${jump}`
    if (key in memo) return memo[key]
    memo[key] = false
    if (jump  < 1) return false
    if (position === stones[stones.length -1]) return true
    if (stonesSet.has(position)) {
        return recursiveFunction(stones, stonesSet, position + jump, jump+1, memo) || 
            recursiveFunction(stones, stonesSet, position + jump, jump, memo) ||          
            recursiveFunction(stones, stonesSet, position + jump, jump-1, memo)    
    }
    return false;
}

const canCross = (stones) => recursiveFunction(stones, new Set(stones), 0, 1);
