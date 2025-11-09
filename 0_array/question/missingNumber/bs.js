//todo:: by binary search --> index base logic diff 1 ==> 0 to n range 
function missingNumber(nums) {
    nums.sort((a, b) => a - b);
    let left = 0;
    let right = nums.length - 1;
    
    while (left <= right) {
        const mid = Math.floor((left + right) / 2);
        if (nums[mid] === mid) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return left;
}