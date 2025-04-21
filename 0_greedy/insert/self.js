/**
 * @param {number[][]} intervals
 * @param {number[]} newInterval
 * @return {number[][]}
 */
var insert = function (intervals, newInterval) {
  let i = 0;
  let res = [];
  let n = intervals.length;
  while (i < n && intervals[i][1] < newInterval[0]) {
    res.push(intervals[i]);
    i++;
  }
  //
  let minR = newInterval[0];
  let maxR = newInterval[1];
  while (i < n && intervals[i][0] <= newInterval[1]) {
    minR = Math.min(minR, intervals[i][0]);
    maxR = Math.max(maxR, intervals[i][1]);
    i++;
  }
  res.push([minR, maxR]);

  //
  while (i < n) {
    res.push(intervals[i]);
    i++;
  }

  return res;
};
