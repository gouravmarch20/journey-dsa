function maxMeetings(start, end) {
    const n = start.length;
    const meetings = [];

    // Create array with start, end, and original index
    for (let i = 0; i < n; i++) {
        meetings.push([start[i], end[i], i]);
    }

    // Sort meetings by end time
    meetings.sort((a, b) => a[1] - b[1]);

    let count = 1;
    let lastEndTime = meetings[0][1];
    const selectedIndices = [meetings[0][2]];

    for (let i = 1; i < n; i++) {
        if (meetings[i][0] > lastEndTime) {
            count++;
            lastEndTime = meetings[i][1];
            selectedIndices.push(meetings[i][2]);
        }
    }

    return { count, selectedIndices };
}
