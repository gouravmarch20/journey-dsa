/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    let n = nums.length ,  zeroP = 0
    for(let i = 0 ; i < n ; i++){
        let curr = nums[i];
        if(curr != 0){
            [ nums[i] , nums[zeroP] ] = [ nums[zeroP] ,  nums[i] ]
            zeroP++;

        }
        // 
    }
    return nums;
};