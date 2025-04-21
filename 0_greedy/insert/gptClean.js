/**
 * @param {number[][]} intervals
 * @param {number[]} newInterval
 * @return {number[][]}
 */
var insert = function(intervals, newInterval) {
    const res = [];
    let i = 0;
    const n = intervals.length;
  
    // Add intervals before newInterval
    while (i < n && intervals[i][1] < newInterval[0]) {
      res.push(intervals[i]);
      i++;
    }
  
    // Merge overlapping intervals
    let [start, end] = newInterval;
    while (i < n && intervals[i][0] <= end) {
      start = Math.min(start, intervals[i][0]);
      end = Math.max(end, intervals[i][1]);
      i++;
    }
    res.push([start, end]);
  
    // Add remaining intervals
    while (i < n) {
      res.push(intervals[i]);
      i++;
    }
  
    return res;
  };
  