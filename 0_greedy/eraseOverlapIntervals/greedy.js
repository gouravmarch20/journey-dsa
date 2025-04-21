/**
 * @param {number[][]} intervals
 * @return {number}
 */
var eraseOverlapIntervals = function (intervals) {
  intervals.sort((a, b) => a[1] - b[1]);
  // console.log("--" , intervals)
  let lastConsumed = intervals[0][1];
  let cnt = 1;
  let n = intervals.length;
  for (let i = 1; i < n; i++) {
    if (intervals[i][0] >= lastConsumed) {
      cnt++;
      lastConsumed = intervals[i][1];
    }
  }
  return intervals.length - cnt;
};
