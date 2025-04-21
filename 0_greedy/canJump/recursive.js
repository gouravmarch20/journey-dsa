/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function (nums) {
    function helper(position) {
      // Base case: if we've reached or passed the last index
      if (position >= nums.length - 1) return true;
  
      // Get the maximum number of steps we can jump from current position
      let maxJump = nums[position];
  
      // Try every possible jump from current position
      for (let jump = 1; jump <= maxJump; jump++) {
        if (helper(position + jump)) return true;
      }
  
      // If none of the jumps lead to the end, return false
      return false;
    }
  
    return helper(0);
  };
  
  const r = canJump([3, 2, 1, 0, 4]);
  console.log(r); // false
  