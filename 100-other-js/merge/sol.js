/**
 * @param {number[][]} intervals
 * @return {number[][]}
 */
var merge = function(intervals) {
    const answer = []
    intervals.sort((a,b) => {
        return a[0] - b[0]
    })
    let start = -1
    let end = -1
    for (const [a,b] of intervals) {
        if (a <= end) {
            if (a < start) start = a
            if (b > end) end = b
        } else {
            answer.push([start, end])
            start = a
            end = b
        }
    }
    answer.shift()
    answer.push([start, end])
    return answer
};