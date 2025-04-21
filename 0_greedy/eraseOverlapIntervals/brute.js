var eraseOverlapIntervals = function(intervals) {
    const OFFSET = 50000;// for netive 0 to 5000 range book ... question -5 * 10^4 <= starti < endi <=
    const MAX_TIME = 100001;
    const timeline = new Array(MAX_TIME).fill(0);

    let overlaps = 0;

    for (const [start, end] of intervals) {
        let hasConflict = false;

        for (let t = start + OFFSET; t < end + OFFSET; t++) {
            if (timeline[t]) {
                hasConflict = true;
                break;
            }
        }

        if (hasConflict) {
            overlaps++;
        } else {
            for (let t = start + OFFSET; t < end + OFFSET; t++) {
                timeline[t] = 1;
            }
        }
    }

    return overlaps;
};
