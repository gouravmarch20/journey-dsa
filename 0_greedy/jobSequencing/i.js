// Function to calculate maximum profit
function jobScheduling(jobs) {
  // Sort jobs based on profit in descending order
  jobs.sort((a, b) => b[2] - a[2]);

  console.log("the_", jobs);
  const n = jobs.length;

  // Initialize an array to track occupied time slots
  const hash = Array(n).fill(-1);

  let cnt = 0; // Number of jobs done
  let totalProfit = 0;

  // Iterate over each job
  for (let i = 0; i < n; i++) {
    // Try to find a free slot before the job's deadline
    for (let j = Math.min(n, jobs[i][1]) - 1; j >= 0; j--) {
      if (hash[j] === -1) {
        cnt++;
        hash[j] = jobs[i][0]; // Mark job id
        totalProfit += jobs[i][2]; // Add profit
        break;
      }
    }
  }

  return [cnt, totalProfit];
}

// Example usage
const jobs = [
  [1, 4, 20],
  [2, 1, 10],
  [3, 1, 40],
  [4, 1, 30],
];
const [jobCount, maxProfit] = jobScheduling(jobs);

console.log("Number of Jobs: " + jobCount);
console.log("Maximum Profit: " + maxProfit);
