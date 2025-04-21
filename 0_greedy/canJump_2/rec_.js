const arr = [2, 3, 0, 1, 4];

const helper = (arr, index, n, noOfJump) => {
  if (index >= n - 1) return noOfJump;

  let mini = Infinity;
  const maxJump = arr[index];

  for (let i = 1; i <= maxJump; i++) {
    mini = Math.min(mini, helper(arr, index + i, n, noOfJump + 1));
  }

  return mini;
};

var jump = function (nums) {
  if (nums.length === 1) return 0;

  return helper(nums, 0, nums.length, 0);
};

const r = jump(arr);
console.log("-", r);
