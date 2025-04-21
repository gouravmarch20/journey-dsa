/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
const maxOne = (nums) => {
  let maxi = 0;
  //!m1:: max continues need to found 
  // for(let val of nums){
  //     if(val == 1) cnt++;
  // }

  for (let i = 0; i < nums.length; ) {
    console.log(nums, i);


    let cnt = 0;
    //!m2:: i < nums.length ==> infinite loop
    while (nums[i] != 0 && i < nums.length) {
      cnt++;
      i++;
    }
    i++;
    maxi = Math.max(cnt, maxi);
  }

  return maxi;
};
const helper = (nums, k, i) => {
  let max = 0;

  if (i >= nums.length || k == 0) {
    // for(let val of nums){
    //     if(val == 1) cnt++;
    // }

    return maxOne(nums);
  }

  if (nums[i] == 0) {
    const newC = [...nums];
    newC[i] = 1;

    max = Math.max(max, helper(newC, k - 1, i + 1), helper(nums, k, i + 1));
  } else {
    max = helper(nums, k, i + 1);
  }

  return max;
};
var longestOnes = function (nums, k) {
  return helper(nums, k, 0);
};
