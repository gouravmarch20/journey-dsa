/**
 * @param {number[]} nums - The array representing max jump lengths at each position
 * @return {number} - The minimum number of jumps to reach the last index
 */

// Sample array to test
const arr = [2, 3, 0, 1, 4];

/**
 * Helper function to decide the best next index to jump to
 * @param {number[]} nums - The input array
 * @param {number} noOfJump - How far you can jump from current index
 * @param {number} startIndex - Current position
 * @param {number} n - Length of the array
 * @return {number} - The index we should jump to next
 */
var nextValid = function (nums, noOfJump, startIndex, n) {
  let nextValidIndex = 0; // Index we decide to jump to
  let maxiJump = 0;       // The maximum reach we can get from the next step

  // Try all positions reachable from current index
  for (let i = 1; i <= noOfJump && startIndex + i < n; i++) {
    // Calculate how far we can reach if we jump to (startIndex + i)
    // ! core logic
    const reachable = startIndex + i + nums[startIndex + i];
    console.log("reachable", reachable); // Debug info

    // Update max reachable and best next index
    if (reachable > maxiJump) {
      maxiJump = reachable;
      nextValidIndex = startIndex + i;
    }
  }

  return nextValidIndex;
};

/**
 * Main function to calculate minimum jumps
 * @param {number[]} nums
 * @return {number}
 */
var jump = function (nums) {
  let n = nums.length;
  let i = 0;                   // Start index
  let minJumpToReach = 0;      // Count of jumps made

  // Edge case: already at the end
  if (nums.length === 1) return 0;

  while (i < n) {
    // If we can reach the end from current index, we’re done
    if (i + nums[i] >= n - 1) {
      return minJumpToReach + 1;
    }

    // Otherwise, find the best index to jump to next
    const next = nextValid(nums, nums[i], i, n);

    // If we’re stuck (can’t move forward), break
    if (next === i) break;

    minJumpToReach++; // Made one more jump
    i = next;         // Move to the chosen next index
  }

  return minJumpToReach;
};

// Call the function with the sample array
jump(arr);
