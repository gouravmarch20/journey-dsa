function maxMeetings(start, end) {
  const n = start.length;
  const meetings = [];

  // Combine start and end times into a single array
  for (let i = 0; i < n; i++) {
    meetings.push([start[i], end[i]]);
  }

  // Sort meetings by end time
  meetings.sort((a, b) => a[1] - b[1]);

  let count = 1;
  let lastEndTime = meetings[0][1];

  for (let i = 1; i < n; i++) {
    if (meetings[i][0] > lastEndTime) {
      count++;
      lastEndTime = meetings[i][1];
    }
  }

  return count;
}
