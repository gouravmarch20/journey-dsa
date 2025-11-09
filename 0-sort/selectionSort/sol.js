const selectionSort = (nums) => {
  for (let i = 0; i < nums.length; i++) {
    for (let j = i + 1; j < nums.length; j++) {
      if (nums[i] > nums[j]) {
        [nums[i], nums[j]] = [nums[j], nums[i]];
      }
    }
  }
  console.log(nums)
};

const nums = [43, 1, 5, 9, 45, -9, -3];
selectionSort(nums);
