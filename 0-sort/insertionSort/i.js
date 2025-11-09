const insertionSort = (nums) => {
  let n = nums.length;
  for (let i = 1; i < n; i++) {
    const element = nums[i];
    let prev = i - 1;

    while (prev >= 0 && nums[prev] > element) {
      nums[prev + 1] = nums[prev];
      prev--;
    }
    nums[prev + 1] = element;
    console.log(nums);

  }
 };
const nums = [4, 3, 8, 5, 2, 1];
insertionSort(nums);
