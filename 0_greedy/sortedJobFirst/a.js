class Solution {
  /**
   * Function to calculate average waiting time
   * using Shortest Job First (SJF) scheduling.
   * @param {number[]} bt - Array of job burst times.
   * @return {number} - Average waiting time (floored).
   */
  solve(bt) {
    // Sort jobs by burst time (Shortest Job First)
    bt.sort((a, b) => a - b);

    let waitTime = 0; // How long this job had to wait
    let totalTime = 0; // After running this job, time increases
    const n = bt.length;

    // Calculate total waiting time
    for (let i = 0; i < n; ++i) {
      waitTime += totalTime;
      totalTime += bt[i];
      console.log("", waitTime, totalTime);
    }

    // Return average waiting time
    return Math.floor(waitTime / n);
  }
}

// Example usage
const jobs = [1, 2, 3, 4, 7];
console.log("Array Representing Job Durations:", jobs);

const solution = new Solution();
const avgWait = solution.solve(jobs);

console.log("Average Waiting Time (SJF):", avgWait);
