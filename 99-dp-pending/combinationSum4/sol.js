var combinationSum4 = function (nums, target) {
    let dp = new Array(target + 1).fill(0);
    dp[0] = 1;
    for (let amt = 1; amt <= target; amt++)
        for (let n of nums) {
            dp[amt] += dp[amt - n] || 0;
        }
    return dp[target];
};
