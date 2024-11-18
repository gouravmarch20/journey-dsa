class Solution {
  recSubsetsWithDup(nums, i, curr, ans) {
     if (i >= nums.length) {
      const c = [...curr];
      ans.push(c);
      return
    }
    curr.push(nums[i]);
    this.recSubsetsWithDup(nums, i + 1, curr, ans);
    curr.pop();
    if (i < nums.length && ans[i] != ans[i + 1]) {
        this.recSubsetsWithDup(nums, i + 1, curr, ans);
    } else {
        while (i < nums.length && nums[i] == nums[i + 1]) {
          i++;
        }
    }
  }
  subsetsWithDup(nums) {
    //your code goes here
    let ans = [];
    this.recSubsetsWithDup(nums, 0, [], ans);
    console.log(ans)
    return ans;
  }
}
const a = new Solution();
a.subsetsWithDup([1, 2, 2]);
