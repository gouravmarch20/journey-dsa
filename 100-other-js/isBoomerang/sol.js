/**
 * @param {number[][]} points
 * @return {boolean}
 */
const isBoomerang = (points) => {
    // return false for same points
    if (points[0][0] === points[1][0] && points[0][1] === points[1][1]) return false
    if (points[0][0] === points[2][0] && points[0][1] === points[2][1]) return false
    if (points[1][0] === points[2][0] && points[1][1] === points[2][1]) return false
    
    // calculate a and b in y = ax + b
    let dX = points[1][0] - points[0][0]
    let dY = points[1][1] - points[0][1]

    // if dX is zero return true if third point has a different x coordinate since then it is not a straight vertical line
    if (dX === 0) return points[0][0] !== points[2][0]
    let a = dY / dX
    let b = points[0][1] - a * points[0][0]
    // return true if the third point is not on the same line as the first 2
    return points[2][1] !== Math.round((a * points[2][0] + b) * 100000) / 100000 
};