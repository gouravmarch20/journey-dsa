class Solution {
  // Merge function: Merges two sorted subarrays into one sorted array
  merge(nums, low, mid, high) {
    const temp = []; // Temporary array to hold merged elements
    let p1 = low; // Pointer to the start of the left subarray
    let p2 = mid + 1; // Pointer to the start of the right subarray

    // Merge the two subarrays into the temp array
    while (p1 <= mid && p2 <= high) {
      if (nums[p1] <= nums[p2]) {
        temp.push(nums[p1]);
        p1++;
      } else {
        temp.push(nums[p2]);
        p2++;
      }
    }

    // If there are any remaining elements in the left subarray, add them
    while (p1 <= mid) {
      temp.push(nums[p1]);
      p1++;
    }

    // If there are any remaining elements in the right subarray, add them
    while (p2 <= high) {
      temp.push(nums[p2]);
      p2++;
    }

    // Copy the sorted elements from temp back into the original array
    for (let i = 0; i < temp.length; i++) {
      nums[low + i] = temp[i];
    }
  }

  // mergeSort function: Recursively divides the array into subarrays and sorts them
  mergeS(nums, low, high) {
    const mid = Math.floor((low + high) / 2); // Find the middle index

    // Base case: If the subarray has one or no elements, it is already sorted
    if (low >= high) {
      return;
    }

    // Recursively sort the left half
    this.mergeS(nums, low, mid);

    // Recursively sort the right half
    this.mergeS(nums, mid + 1, high);

    // Merge the two sorted halves
    this.merge(nums, low, mid, high);
  }

  // Public function to start the merge sort
  mergeSort(nums) {
    const n = nums.length - 1; // Get the last index of the array
    this.mergeS(nums, 0, n); // Call the recursive merge sort helper function
    return nums; // Return the sorted array
  }
}

// Example usage
const solution = new Solution();
const nums = [5, 2, 9, 1, 5, 6];
const sorted = solution.mergeSort(nums);

// Output the sorted array
console.log(sorted); // Output: [1, 2, 5, 5, 6, 9]
