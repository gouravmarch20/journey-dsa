class Solution {
    // Function to calculate maximum profit
    JobScheduling(Jobs) {
        // Sort jobs based on profit in descending order
        Jobs.sort((a, b) => b[2] - a[2]);

        // Total number of jobs
        const n = Jobs.length;

        /*Initialize a hash table 
        to store selected jobs.
        each element represents a 
        deadline slot, 
        initially unoccupied.*/
        const hash = Array(n).fill(-1);

        // Initialize count
        let cnt = 0;

        // Initialize the total profit earned
        let totalProfit = 0;

        // Iterate over each job
        for (let i = 0; i < n; i++) {
            /*Iterate over each deadline slot starting 
            from the job's deadline*/
            for (let j = Jobs[i][1] - 1; j >= 0; j--) {
                /*If the current deadline 
                slot is available 
                (not occupied)*/
                if (hash[j] === -1) {
                    // Count of selected jobs
                    cnt++;
                    // Mark the job as selected
                    hash[j] = Jobs[i][0];
                    // Update the total profit
                    totalProfit += Jobs[i][2];
                    // Move to the next job
                    break;
                }
            }
        }

        // Return the array
        return [cnt,totalProfit];
    }
}

// Example usage
const jobs = [[1, 4, 20], [2, 1, 10], [3, 1, 40], [4, 1, 30]];

const solution = new Solution();
const result = solution.JobScheduling(jobs);

// Output the result
console.log("Number of Jobs: " + result[1]);
console.log("Maximum Profit: " + result[0]);
