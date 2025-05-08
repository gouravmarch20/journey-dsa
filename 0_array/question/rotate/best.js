class Solution {
  rotate(nums, k) {
    const n = nums.length;
    k = k % n; // Handle cases where k >= n
    if (k === 0) return; // No rotation needed if k == 0

    // Helper function to reverse part of the array
    function reverse(start, end) {
      while (start < end) {
        [nums[start], nums[end]] = [nums[end], nums[start]]; // swap
        start++;
        end--;
      }
    }

    // Reverse the entire array
    reverse(0, n - 1);

    // Reverse the first k elements
    reverse(0, k - 1);

    // Reverse the remaining elements
    reverse(k, n - 1);
  }
}

// Example usage:
const sol = new Solution();
const nums = [1, 2, 3, 4, 5, 6, 7];
sol.rotate(nums, 3);
console.log(nums); // Output: [5,6,7,1,2,3,4]
