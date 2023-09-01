/**
 * @param {string} moves
 * @return {number}
 */
var furthestDistanceFromOrigin = function(moves) {
    let Rs = moves.split('').filter(char => char === 'R').length
    let Ls = moves.split('').filter(char => char === 'L').length
    return (Ls > Rs) ? moves.length - (2 * Rs) : moves.length - (2 * Ls)
};