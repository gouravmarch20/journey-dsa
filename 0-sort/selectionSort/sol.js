class Solution {
  selectionSort(nums) {
    const n = nums.length;

    // Traverse through all elements in the array
    for (let i = 0; i < n; i++) {
      let miniIndex = i;

      // Find the minimum element in unsorted part of the array
      for (let j = i + 1; j < n; j++) {
        if (nums[miniIndex] > nums[j]) {
          miniIndex = j;
        }
      }

      // Swap the found minimum element with the first element
      [nums[i], nums[miniIndex]] = [nums[miniIndex], nums[i]];
    }

    return nums;
  }
}

// Example usage:
const solution = new Solution();
const nums = [64, 25, 12, 22, 11];
console.log(solution.selectionSort(nums));  // [11, 12, 22, 25, 64]
